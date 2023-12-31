use std::collections::HashMap;

use nalgebra::{Matrix4, Vector2, Vector3, Vector4};
use crate::triangle::Triangle;

#[allow(dead_code)]
pub enum Buffer {
    Color,
    Depth,
    Both,
}

#[allow(dead_code)]
pub enum Primitive {
    Line,
    Triangle,
}

#[derive(Default, Clone)]
pub struct Rasterizer {
    model: Matrix4<f64>,
    view: Matrix4<f64>,
    projection: Matrix4<f64>,
    pos_buf: HashMap<usize, Vec<Vector3<f64>>>,
    ind_buf: HashMap<usize, Vec<Vector3<usize>>>,
    col_buf: HashMap<usize, Vec<Vector3<f64>>>,

    frame_buf_0: Vec<Vector3<f64>>,
    frame_buf: Vec<Vector3<f64>>,
    depth_buf: Vec<f64>,
    /*  You may need to uncomment here to implement the MSAA method  */
    //frame_sample: Vec<Vector3<f64>>,
    //depth_sample: Vec<f64>,

    width: u64,
    height: u64,
    next_id: usize,
}

#[derive(Clone, Copy)]
pub struct PosBufId(usize);

#[derive(Clone, Copy)]
pub struct IndBufId(usize);

#[derive(Clone, Copy)]
pub struct ColBufId(usize);

impl Rasterizer {
    pub fn new(w: u64, h: u64) -> Self {
        let mut r = Rasterizer::default();
        r.width = w;
        r.height = h;
        r.frame_buf_0.resize((w * h) as usize, Vector3::zeros());
        r.frame_buf.resize((w * h) as usize, Vector3::zeros());
        r.depth_buf.resize((w * h) as usize, 0.0);
        r
    }

    fn get_index(&self, x: usize, y: usize) -> usize {
        ((self.height - 1 - y as u64) * self.width + x as u64) as usize
    }

    fn set_pixel_0(&mut self, point: &Vector3<f64>, color: &Vector3<f64>) {
        let ind = (self.height as f64 - 1.0 - point.y) * self.width as f64 + point.x;
        self.frame_buf_0[ind as usize] = *color;
    }

    fn set_pixel(&mut self, point: &Vector3<f64>, color: &Vector3<f64>) {
        let ind = (self.height as f64 - 1.0 - point.y) * self.width as f64 + point.x;
        self.frame_buf[ind as usize] = *color;
    }

    fn set_depth(&mut self, point: &Vector3<f64>, depth: f64) -> bool {
        let ind = (self.height as f64 - 1.0 - point.y) * self.width as f64 + point.x;
        if depth>self.depth_buf[ind as usize]{
            self.depth_buf[ind as usize] = depth;
            true
        } else {
            false
        }
    }

    pub fn clear(&mut self, buff: Buffer) {
        match buff {
            Buffer::Color => {
                self.frame_buf_0.fill(Vector3::new(0.0, 0.0, 0.0));
                self.frame_buf.fill(Vector3::new(0.0, 0.0, 0.0));
            }
            Buffer::Depth => {
                self.depth_buf.fill(f64::NEG_INFINITY);
            }
            Buffer::Both => {
                self.frame_buf_0.fill(Vector3::new(0.0, 0.0, 0.0));
                self.frame_buf.fill(Vector3::new(0.0, 0.0, 0.0));
                self.depth_buf.fill(f64::NEG_INFINITY);
            }
        }
    }

    pub fn set_model(&mut self, model: Matrix4<f64>) {
        self.model = model;
    }

    pub fn set_view(&mut self, view: Matrix4<f64>) {
        self.view = view;
    }

    pub fn set_projection(&mut self, projection: Matrix4<f64>) {
        self.projection = projection;
    }

    fn get_next_id(&mut self) -> usize {
        let res = self.next_id;
        self.next_id += 1;
        res
    }

    pub fn load_position(&mut self, positions: &Vec<Vector3<f64>>) -> PosBufId {
        let id = self.get_next_id();
        self.pos_buf.insert(id, positions.clone());
        PosBufId(id)
    }

    pub fn load_indices(&mut self, indices: &Vec<Vector3<usize>>) -> IndBufId {
        let id = self.get_next_id();
        self.ind_buf.insert(id, indices.clone());
        IndBufId(id)
    }

    pub fn load_colors(&mut self, colors: &Vec<Vector3<f64>>) -> ColBufId {
        let id = self.get_next_id();
        self.col_buf.insert(id, colors.clone());
        ColBufId(id)
    }

    pub fn draw(&mut self, pos_buffer: PosBufId, ind_buffer: IndBufId, col_buffer: ColBufId, _typ: Primitive) {
        let buf = &self.clone().pos_buf[&pos_buffer.0];
        let ind: &Vec<Vector3<usize>> = &self.clone().ind_buf[&ind_buffer.0];
        let col = &self.clone().col_buf[&col_buffer.0];

        let f1 = (50.0 - 0.1) / 2.0;
        let f2 = (50.0 + 0.1) / 2.0;

        let mvp = self.projection * self.view * self.model;

        for i in ind {
            let mut t = Triangle::new();
            let mut v =
                vec![mvp * to_vec4(buf[i[0]], Some(1.0)), // homogeneous coordinates
                     mvp * to_vec4(buf[i[1]], Some(1.0)),
                     mvp * to_vec4(buf[i[2]], Some(1.0))];

            for vec in v.iter_mut() {
                *vec = *vec / vec.w;
            }
            for vert in v.iter_mut() {
                vert.x = 0.5 * self.width as f64 * (vert.x + 1.0);
                vert.y = 0.5 * self.height as f64 * (vert.y + 1.0);
                vert.z = vert.z * f1 + f2;
            }
            for j in 0..3 {
                // t.set_vertex(j, Vector3::new(v[j].x, v[j].y, v[j].z));
                t.set_vertex(j, v[j].xyz());
                t.set_vertex(j, v[j].xyz());
                t.set_vertex(j, v[j].xyz());
            }
            let col_x = col[i[0]];
            let col_y = col[i[1]];
            let col_z = col[i[2]];
            t.set_color(0, col_x[0], col_x[1], col_x[2]);
            t.set_color(1, col_y[0], col_y[1], col_y[2]);
            t.set_color(2, col_z[0], col_z[1], col_z[2]);

            self.rasterize_triangle(&t);
        }
    }

    pub fn rasterize_triangle(&mut self, t: &Triangle) {
        /*  implement your code here  */
        let xmin=t.v[0][0].min(t.v[1][0]).min(t.v[2][0]) as usize;
        let xmax=(t.v[0][0].max(t.v[1][0]).max(t.v[2][0])+1.0) as usize;
        let ymin=t.v[0][1].min(t.v[1][1]).min(t.v[2][1]) as usize;
        let ymax=(t.v[0][1].max(t.v[1][1]).max(t.v[2][1])+1.0) as usize;
        for x in xmin..=xmax {
            for y in ymin..=ymax {
                if inside_triangle(x as f64 + 0.5, y as f64 + 0.5,&t.v) {
                    let d=depth(x as f64,y as f64,&t);
                    if self.set_depth(&Vector3::new(x as f64,y as f64 ,0.0), d) {
                        self.set_pixel_0(&Vector3::new(x as f64,y as f64 ,0.0), &t.get_color());
                    }
                }
            }
        }

        for x in xmin..=xmax {
            for y in ymin..=ymax {
                let ind_m = self.get_index(x,y);
                let ind_w=self.get_index(x-1,y);
                let ind_e=self.get_index(x+1,y);
                let ind_n=self.get_index(x,y-1);
                let ind_s=self.get_index(x,y+1);
                let color_m=self.frame_buf_0[ind_m as usize];
                let color_w=self.frame_buf_0[ind_w as usize];
                let color_e=self.frame_buf_0[ind_e as usize];
                let color_n=self.frame_buf_0[ind_n as usize];
                let color_s=self.frame_buf_0[ind_s as usize];
                let mut num=0;
                let grad_w=color_w-color_m;
                if grad_w!=Vector3::zeros() {num=num+1;}
                let grad_e=color_e-color_m;
                if grad_e!=Vector3::zeros() {num=num+1;}
                let grad_n=color_n-color_m;
                if grad_n!=Vector3::zeros() {num=num+1;}
                let grad_s=color_s-color_m;
                if grad_s!=Vector3::zeros() {num=num+1;}
                if num>=2 {
                    let c=(color_s+color_n+color_e+color_w)/4.0;
                    self.set_pixel(&Vector3::new(x as f64,y as f64 ,0.0), &c);
                } else {
                    self.set_pixel(&Vector3::new(x as f64,y as f64 ,0.0), &color_m);
                }
            }
        }
    }

    pub fn frame_buffer(&self) -> &Vec<Vector3<f64>> {
        &self.frame_buf
    }
}

pub fn depth(x: f64,y:f64,t: &Triangle) -> f64 {
    let x_a=t.v[0][0];
    let y_a=t.v[0][1];
    let x_b=t.v[1][0];
    let y_b=t.v[1][1];
    let x_c=t.v[2][0];
    let y_c=t.v[2][1];
    let a=(-(x-x_b)*(y_c-y_b)+(y-y_b)*(x_c-x_b))/(-(x_a-x_b)*(y_c-y_b)+(y_a-y_b)*(x_c-x_b));
    let b=(-(x-x_c)*(y_a-y_c)+(y-y_c)*(x_a-x_c))/(-(x_b-x_c)*(y_a-y_c)+(y_b-y_c)*(x_a-x_c));
    let r=1.0-a-b;
    a*t.v[0][2]+b*t.v[1][2]+r*t.v[2][2]
}

fn to_vec4(v3: Vector3<f64>, w: Option<f64>) -> Vector4<f64> {
    Vector4::new(v3.x, v3.y, v3.z, w.unwrap_or(1.0))
}

fn cross(v1:Vector2<f64>,v2:Vector2<f64>) -> f64 {
    return v1[0]*v2[1]-v1[1]*v2[0]
}

fn inside_triangle(x: f64, y: f64, v: &[Vector3<f64>; 3]) -> bool {
    /*  implement your code here  */
    //如果P在三角形ABC内部，则满足以下三个条件：P,A在BC的同侧、P,B在AC的同侧、PC在AB的同侧。某一个不满足则表示P不在三角形内部。
    let (a1,b1)=(v[0][0],v[0][1]); //A
    let (a2,b2)=(v[1][0],v[1][1]); //B
    let (a3,b3)=(v[2][0],v[2][1]); //C
    let AB=Vector2::new(a2-a1,b2-b1);
    let AP=Vector2::new(x-a1,y-b1);
    let AC=Vector2::new(a3-a1,b3-b1);
    let s1=cross(AB,AP)*cross(AB,AC)>=0.0;

    let BC=Vector2::new(a3-a2,b3-b2);
    let BP=Vector2::new(x-a2,y-b2);
    let BA=-AB;
    let s2=cross(BC,BP)*cross(BC,BA)>=0.0;

    let CA=-AC;
    let CP=Vector2::new(x-a3,y-b3);
    let CB=-BC;
    let s3=cross(CA,CP)*cross(CA,CB)>=0.0;

    if s1&&s2&&s3 {
        true
    } else {
        false
    }
}

fn compute_barycentric2d(x: f64, y: f64, v: &[Vector3<f64>; 3]) -> (f64, f64, f64) {
    let c1 = (x * (v[1].y - v[2].y) + (v[2].x - v[1].x) * y + v[1].x * v[2].y - v[2].x * v[1].y)
        / (v[0].x * (v[1].y - v[2].y) + (v[2].x - v[1].x) * v[0].y + v[1].x * v[2].y - v[2].x * v[1].y);
    let c2 = (x * (v[2].y - v[0].y) + (v[0].x - v[2].x) * y + v[2].x * v[0].y - v[0].x * v[2].y)
        / (v[1].x * (v[2].y - v[0].y) + (v[0].x - v[2].x) * v[1].y + v[2].x * v[0].y - v[0].x * v[2].y);
    let c3 = (x * (v[0].y - v[1].y) + (v[1].x - v[0].x) * y + v[0].x * v[1].y - v[1].x * v[0].y)
        / (v[2].x * (v[0].y - v[1].y) + (v[1].x - v[0].x) * v[2].y + v[0].x * v[1].y - v[1].x * v[0].y);
    (c1, c2, c3)
}
