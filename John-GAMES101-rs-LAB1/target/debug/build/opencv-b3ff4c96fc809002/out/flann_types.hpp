extern "C" {
	cv::Ptr<cv::flann::IndexParams>* cv_PtrOfIndexParams_new(cv::flann::IndexParams* val) {
			cv::Ptr<cv::flann::IndexParams> ret = cv::Ptr<cv::flann::IndexParams>(val);
			return new cv::Ptr<cv::flann::IndexParams>(ret);
	}
	
	void cv_PtrOfIndexParams_delete(cv::Ptr<cv::flann::IndexParams>* instance) {
			delete instance;
	}
	
	const cv::flann::IndexParams* cv_PtrOfIndexParams_get_inner_ptr(const cv::Ptr<cv::flann::IndexParams>* instance) {
		return instance->get();
	}

	cv::flann::IndexParams* cv_PtrOfIndexParams_get_inner_ptr_mut(cv::Ptr<cv::flann::IndexParams>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::flann::SearchParams>* cv_PtrOfSearchParams_new(cv::flann::SearchParams* val) {
			cv::Ptr<cv::flann::SearchParams> ret = cv::Ptr<cv::flann::SearchParams>(val);
			return new cv::Ptr<cv::flann::SearchParams>(ret);
	}
	
	void cv_PtrOfSearchParams_delete(cv::Ptr<cv::flann::SearchParams>* instance) {
			delete instance;
	}
	
	const cv::flann::SearchParams* cv_PtrOfSearchParams_get_inner_ptr(const cv::Ptr<cv::flann::SearchParams>* instance) {
		return instance->get();
	}

	cv::flann::SearchParams* cv_PtrOfSearchParams_get_inner_ptr_mut(cv::Ptr<cv::flann::SearchParams>* instance) {
		return instance->get();
	}
}

extern "C" {
	std::vector<cv::flann::FlannIndexType>* cv_VectorOfFlannIndexType_new() {
			std::vector<cv::flann::FlannIndexType>* ret = new std::vector<cv::flann::FlannIndexType>();
			return ret;
	}
	
	void cv_VectorOfFlannIndexType_delete(std::vector<cv::flann::FlannIndexType>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfFlannIndexType_len(const std::vector<cv::flann::FlannIndexType>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfFlannIndexType_is_empty(const std::vector<cv::flann::FlannIndexType>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfFlannIndexType_capacity(const std::vector<cv::flann::FlannIndexType>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfFlannIndexType_shrink_to_fit(std::vector<cv::flann::FlannIndexType>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfFlannIndexType_reserve(std::vector<cv::flann::FlannIndexType>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfFlannIndexType_remove(std::vector<cv::flann::FlannIndexType>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfFlannIndexType_swap(std::vector<cv::flann::FlannIndexType>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfFlannIndexType_clear(std::vector<cv::flann::FlannIndexType>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfFlannIndexType_push(std::vector<cv::flann::FlannIndexType>* instance, cv::flann::FlannIndexType val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfFlannIndexType_insert(std::vector<cv::flann::FlannIndexType>* instance, size_t index, cv::flann::FlannIndexType val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfFlannIndexType_get(const std::vector<cv::flann::FlannIndexType>* instance, size_t index, cv::flann::FlannIndexType* ocvrs_return) {
			cv::flann::FlannIndexType ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfFlannIndexType_set(std::vector<cv::flann::FlannIndexType>* instance, size_t index, cv::flann::FlannIndexType val) {
			(*instance)[index] = val;
	}
	
	std::vector<cv::flann::FlannIndexType>* cv_VectorOfFlannIndexType_clone(const std::vector<cv::flann::FlannIndexType>* instance) {
			std::vector<cv::flann::FlannIndexType> ret = std::vector<cv::flann::FlannIndexType>(*instance);
			return new std::vector<cv::flann::FlannIndexType>(ret);
	}
	
	const cv::flann::FlannIndexType* cv_VectorOfFlannIndexType_data(const std::vector<cv::flann::FlannIndexType>* instance) {
		return instance->data();
	}
	
	cv::flann::FlannIndexType* cv_VectorOfFlannIndexType_data_mut(std::vector<cv::flann::FlannIndexType>* instance) {
		return instance->data();
	}
	
	std::vector<cv::flann::FlannIndexType>* cv_VectorOfFlannIndexType_from_slice(const cv::flann::FlannIndexType* data, size_t len) {
		return new std::vector<cv::flann::FlannIndexType>(data, data + len);
	}
}


