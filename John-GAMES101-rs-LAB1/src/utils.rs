use std::os::raw::c_void;
use nalgebra::{Matrix, Matrix4, Vector3, Matrix3, Matrix3x1, Matrix1x3};
use opencv::core::{Mat, MatTraitConst};
use opencv::imgproc::{COLOR_RGB2BGR, cvt_color};

pub type V3d = Vector3<f64>;
const PI: f64=std::f64::consts::PI;

pub(crate) fn get_view_matrix(eye_pos: V3d) -> Matrix4<f64> {
    let mut view: Matrix4<f64> = Matrix4::identity();
    /*  implement your code here  */
    let mut t_view =Matrix4::identity();
    t_view[(0, 3)]=-eye_pos[0];
    t_view[(1, 3)]=-eye_pos[1];
    t_view[(2, 3)]=-eye_pos[2];
    view= t_view;
    view
}

//arbitrary rotation
pub(crate) fn get_model_matrix_ar(axis: V3d ,rotation_angle: f64) -> Matrix4<f64> {
    /*  implement your code here  */
    let n=Matrix3x1::new(axis[0],axis[1],axis[2]);
    let n_t=Matrix1x3::new(axis[0],axis[1],axis[2]);
    let a=rotation_angle*PI/180.0;
    let mut model_3= Matrix3::identity();
    model_3=a.cos()*Matrix3::identity()+(1.0-a.cos())*n*n_t+a.sin()*
        Matrix3::new(0.0,-axis[2],axis[1],
                     axis[2],0.0,-axis[0],
                     -axis[1],axis[0],0.0);
    let model = Matrix4::new(model_3[(0,0)],model_3[(0,1)],model_3[(0,2)],0.0,
                         model_3[(1,0)],model_3[(1,1)],model_3[(1,2)],0.0,
                         model_3[(2,0)],model_3[(2,1)],model_3[(2,2)],0.0,
                         0.0,0.0,0.0,1.0,);
    model
}


pub(crate) fn get_model_matrix(rotation_angle: f64) -> Matrix4<f64> {
    let mut model: Matrix4<f64> = Matrix4::identity();
    /*  implement your code here  */
    let a=rotation_angle*PI/180.0;
    model[(0,0)]=a.cos();
    model[(0,1)]=-a.sin();
    model[(1,0)]=a.sin();
    model[(1,1)]=a.cos();
    model
}

pub(crate) fn get_projection_matrix(eye_fov: f64, aspect_ratio: f64, z_near: f64, z_far: f64) -> Matrix4<f64> {
    let mut projection: Matrix4<f64> = Matrix4::identity();
    /*  implement your code here  */
    let z_near=-z_near;
    let z_far=-z_far;
    let fov_y =eye_fov*PI/180.0;
    let t=z_near.abs()*(fov_y /2.0).tan();
    let r=t*aspect_ratio;
    let l=-r;
    let b=-t;
    let mut m_o_1 =Matrix4::identity();
    let mut m_o_2 =Matrix4::identity();
    m_o_1[(0, 0)]=2.0/(r-l);
    m_o_1[(1, 1)]=2.0/(t-b);
    m_o_1[(2, 2)]=2.0/(z_near-z_far);
    m_o_2[(2, 3)]=-(z_far+z_near)/2.0;
    let mut m_po =Matrix4::identity();
    m_po[(0, 0)]=z_near;
    m_po[(1, 1)]=z_near;
    m_po[(2, 2)]=z_near+z_far;
    m_po[(2, 3)]=-z_far*z_near;
    m_po[(3, 2)]=1.0;
    m_po[(3, 3)]=0.0;
    projection= m_o_1 * m_o_2 * m_po;
    projection
}

pub(crate) fn frame_buffer2cv_mat(frame_buffer: &Vec<V3d>) -> Mat {
    let mut image = unsafe {
        Mat::new_rows_cols_with_data(
            700, 700,
            opencv::core::CV_64FC3,
            frame_buffer.as_ptr() as *mut c_void,
            opencv::core::Mat_AUTO_STEP,
        ).unwrap()
    };
    let mut img = Mat::copy(&image).unwrap();
    image.convert_to(&mut img, opencv::core::CV_8UC3, 1.0, 1.0).expect("panic message");
    cvt_color(&img, &mut image, COLOR_RGB2BGR, 0).unwrap();
    image
}