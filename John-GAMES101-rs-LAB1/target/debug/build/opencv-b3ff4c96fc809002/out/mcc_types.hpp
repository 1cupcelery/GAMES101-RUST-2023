extern "C" {
	void cv_PtrOfMCC_CChecker_delete(cv::Ptr<cv::mcc::CChecker>* instance) {
			delete instance;
	}
	
	const cv::mcc::CChecker* cv_PtrOfMCC_CChecker_get_inner_ptr(const cv::Ptr<cv::mcc::CChecker>* instance) {
		return instance->get();
	}

	cv::mcc::CChecker* cv_PtrOfMCC_CChecker_get_inner_ptr_mut(cv::Ptr<cv::mcc::CChecker>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfMCC_CCheckerDetector_delete(cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
			delete instance;
	}
	
	const cv::mcc::CCheckerDetector* cv_PtrOfMCC_CCheckerDetector_get_inner_ptr(const cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
		return instance->get();
	}

	cv::mcc::CCheckerDetector* cv_PtrOfMCC_CCheckerDetector_get_inner_ptr_mut(cv::Ptr<cv::mcc::CCheckerDetector>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfMCC_CCheckerDraw_delete(cv::Ptr<cv::mcc::CCheckerDraw>* instance) {
			delete instance;
	}
	
	const cv::mcc::CCheckerDraw* cv_PtrOfMCC_CCheckerDraw_get_inner_ptr(const cv::Ptr<cv::mcc::CCheckerDraw>* instance) {
		return instance->get();
	}

	cv::mcc::CCheckerDraw* cv_PtrOfMCC_CCheckerDraw_get_inner_ptr_mut(cv::Ptr<cv::mcc::CCheckerDraw>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::mcc::DetectorParameters>* cv_PtrOfMCC_DetectorParameters_new(cv::mcc::DetectorParameters* val) {
			cv::Ptr<cv::mcc::DetectorParameters> ret = cv::Ptr<cv::mcc::DetectorParameters>(val);
			return new cv::Ptr<cv::mcc::DetectorParameters>(ret);
	}
	
	void cv_PtrOfMCC_DetectorParameters_delete(cv::Ptr<cv::mcc::DetectorParameters>* instance) {
			delete instance;
	}
	
	const cv::mcc::DetectorParameters* cv_PtrOfMCC_DetectorParameters_get_inner_ptr(const cv::Ptr<cv::mcc::DetectorParameters>* instance) {
		return instance->get();
	}

	cv::mcc::DetectorParameters* cv_PtrOfMCC_DetectorParameters_get_inner_ptr_mut(cv::Ptr<cv::mcc::DetectorParameters>* instance) {
		return instance->get();
	}
}

extern "C" {
	std::vector<cv::Ptr<cv::mcc::CChecker>>* cv_VectorOfPtrOfMCC_CChecker_new() {
			std::vector<cv::Ptr<cv::mcc::CChecker>>* ret = new std::vector<cv::Ptr<cv::mcc::CChecker>>();
			return ret;
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_delete(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPtrOfMCC_CChecker_len(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPtrOfMCC_CChecker_is_empty(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPtrOfMCC_CChecker_capacity(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_shrink_to_fit(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_reserve(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_remove(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_swap(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_clear(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_push(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, cv::Ptr<cv::mcc::CChecker>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_insert(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index, cv::Ptr<cv::mcc::CChecker>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_get(const std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index, cv::Ptr<cv::mcc::CChecker>** ocvrs_return) {
			cv::Ptr<cv::mcc::CChecker> ret = (*instance)[index];
			*ocvrs_return = new cv::Ptr<cv::mcc::CChecker>(ret);
	}
	
	void cv_VectorOfPtrOfMCC_CChecker_set(std::vector<cv::Ptr<cv::mcc::CChecker>>* instance, size_t index, cv::Ptr<cv::mcc::CChecker>* val) {
			(*instance)[index] = *val;
	}
	
}


