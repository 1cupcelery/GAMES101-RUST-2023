extern "C" {
	std::vector<cv::VideoCapture>* cv_VectorOfVideoCapture_new() {
			std::vector<cv::VideoCapture>* ret = new std::vector<cv::VideoCapture>();
			return ret;
	}
	
	void cv_VectorOfVideoCapture_delete(std::vector<cv::VideoCapture>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVideoCapture_len(const std::vector<cv::VideoCapture>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVideoCapture_is_empty(const std::vector<cv::VideoCapture>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVideoCapture_capacity(const std::vector<cv::VideoCapture>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVideoCapture_shrink_to_fit(std::vector<cv::VideoCapture>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVideoCapture_reserve(std::vector<cv::VideoCapture>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVideoCapture_remove(std::vector<cv::VideoCapture>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVideoCapture_swap(std::vector<cv::VideoCapture>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVideoCapture_clear(std::vector<cv::VideoCapture>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVideoCapture_push(std::vector<cv::VideoCapture>* instance, cv::VideoCapture* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVideoCapture_insert(std::vector<cv::VideoCapture>* instance, size_t index, cv::VideoCapture* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVideoCapture_get(const std::vector<cv::VideoCapture>* instance, size_t index, cv::VideoCapture** ocvrs_return) {
			cv::VideoCapture ret = (*instance)[index];
			*ocvrs_return = new cv::VideoCapture(ret);
	}
	
	void cv_VectorOfVideoCapture_set(std::vector<cv::VideoCapture>* instance, size_t index, cv::VideoCapture* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::VideoCaptureAPIs>* cv_VectorOfVideoCaptureAPIs_new() {
			std::vector<cv::VideoCaptureAPIs>* ret = new std::vector<cv::VideoCaptureAPIs>();
			return ret;
	}
	
	void cv_VectorOfVideoCaptureAPIs_delete(std::vector<cv::VideoCaptureAPIs>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVideoCaptureAPIs_len(const std::vector<cv::VideoCaptureAPIs>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVideoCaptureAPIs_is_empty(const std::vector<cv::VideoCaptureAPIs>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVideoCaptureAPIs_capacity(const std::vector<cv::VideoCaptureAPIs>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVideoCaptureAPIs_shrink_to_fit(std::vector<cv::VideoCaptureAPIs>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVideoCaptureAPIs_reserve(std::vector<cv::VideoCaptureAPIs>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVideoCaptureAPIs_remove(std::vector<cv::VideoCaptureAPIs>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVideoCaptureAPIs_swap(std::vector<cv::VideoCaptureAPIs>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVideoCaptureAPIs_clear(std::vector<cv::VideoCaptureAPIs>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVideoCaptureAPIs_push(std::vector<cv::VideoCaptureAPIs>* instance, cv::VideoCaptureAPIs val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfVideoCaptureAPIs_insert(std::vector<cv::VideoCaptureAPIs>* instance, size_t index, cv::VideoCaptureAPIs val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfVideoCaptureAPIs_get(const std::vector<cv::VideoCaptureAPIs>* instance, size_t index, cv::VideoCaptureAPIs* ocvrs_return) {
			cv::VideoCaptureAPIs ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVideoCaptureAPIs_set(std::vector<cv::VideoCaptureAPIs>* instance, size_t index, cv::VideoCaptureAPIs val) {
			(*instance)[index] = val;
	}
	
	std::vector<cv::VideoCaptureAPIs>* cv_VectorOfVideoCaptureAPIs_clone(const std::vector<cv::VideoCaptureAPIs>* instance) {
			std::vector<cv::VideoCaptureAPIs> ret = std::vector<cv::VideoCaptureAPIs>(*instance);
			return new std::vector<cv::VideoCaptureAPIs>(ret);
	}
	
	const cv::VideoCaptureAPIs* cv_VectorOfVideoCaptureAPIs_data(const std::vector<cv::VideoCaptureAPIs>* instance) {
		return instance->data();
	}
	
	cv::VideoCaptureAPIs* cv_VectorOfVideoCaptureAPIs_data_mut(std::vector<cv::VideoCaptureAPIs>* instance) {
		return instance->data();
	}
	
	std::vector<cv::VideoCaptureAPIs>* cv_VectorOfVideoCaptureAPIs_from_slice(const cv::VideoCaptureAPIs* data, size_t len) {
		return new std::vector<cv::VideoCaptureAPIs>(data, data + len);
	}
}


