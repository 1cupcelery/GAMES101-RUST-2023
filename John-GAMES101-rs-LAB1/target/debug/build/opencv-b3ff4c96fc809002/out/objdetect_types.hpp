extern "C" {
	void cv_PtrOfBaseCascadeClassifier_delete(cv::Ptr<cv::BaseCascadeClassifier>* instance) {
			delete instance;
	}
	
	const cv::BaseCascadeClassifier* cv_PtrOfBaseCascadeClassifier_get_inner_ptr(const cv::Ptr<cv::BaseCascadeClassifier>* instance) {
		return instance->get();
	}

	cv::BaseCascadeClassifier* cv_PtrOfBaseCascadeClassifier_get_inner_ptr_mut(cv::Ptr<cv::BaseCascadeClassifier>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfBaseCascadeClassifier_MaskGenerator_delete(cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* instance) {
			delete instance;
	}
	
	const cv::BaseCascadeClassifier::MaskGenerator* cv_PtrOfBaseCascadeClassifier_MaskGenerator_get_inner_ptr(const cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* instance) {
		return instance->get();
	}

	cv::BaseCascadeClassifier::MaskGenerator* cv_PtrOfBaseCascadeClassifier_MaskGenerator_get_inner_ptr_mut(cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfDetectionBasedTracker_IDetector_delete(cv::Ptr<cv::DetectionBasedTracker::IDetector>* instance) {
			delete instance;
	}
	
	const cv::DetectionBasedTracker::IDetector* cv_PtrOfDetectionBasedTracker_IDetector_get_inner_ptr(const cv::Ptr<cv::DetectionBasedTracker::IDetector>* instance) {
		return instance->get();
	}

	cv::DetectionBasedTracker::IDetector* cv_PtrOfDetectionBasedTracker_IDetector_get_inner_ptr_mut(cv::Ptr<cv::DetectionBasedTracker::IDetector>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFaceDetectorYN_delete(cv::Ptr<cv::FaceDetectorYN>* instance) {
			delete instance;
	}
	
	const cv::FaceDetectorYN* cv_PtrOfFaceDetectorYN_get_inner_ptr(const cv::Ptr<cv::FaceDetectorYN>* instance) {
		return instance->get();
	}

	cv::FaceDetectorYN* cv_PtrOfFaceDetectorYN_get_inner_ptr_mut(cv::Ptr<cv::FaceDetectorYN>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFaceRecognizerSF_delete(cv::Ptr<cv::FaceRecognizerSF>* instance) {
			delete instance;
	}
	
	const cv::FaceRecognizerSF* cv_PtrOfFaceRecognizerSF_get_inner_ptr(const cv::Ptr<cv::FaceRecognizerSF>* instance) {
		return instance->get();
	}

	cv::FaceRecognizerSF* cv_PtrOfFaceRecognizerSF_get_inner_ptr_mut(cv::Ptr<cv::FaceRecognizerSF>* instance) {
		return instance->get();
	}
}

extern "C" {
	std::vector<cv::DetectionBasedTracker::ExtObject>* cv_VectorOfDetectionBasedTracker_ExtObject_new() {
			std::vector<cv::DetectionBasedTracker::ExtObject>* ret = new std::vector<cv::DetectionBasedTracker::ExtObject>();
			return ret;
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_delete(std::vector<cv::DetectionBasedTracker::ExtObject>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfDetectionBasedTracker_ExtObject_len(const std::vector<cv::DetectionBasedTracker::ExtObject>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfDetectionBasedTracker_ExtObject_is_empty(const std::vector<cv::DetectionBasedTracker::ExtObject>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfDetectionBasedTracker_ExtObject_capacity(const std::vector<cv::DetectionBasedTracker::ExtObject>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_shrink_to_fit(std::vector<cv::DetectionBasedTracker::ExtObject>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_reserve(std::vector<cv::DetectionBasedTracker::ExtObject>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_remove(std::vector<cv::DetectionBasedTracker::ExtObject>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_swap(std::vector<cv::DetectionBasedTracker::ExtObject>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_clear(std::vector<cv::DetectionBasedTracker::ExtObject>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_push(std::vector<cv::DetectionBasedTracker::ExtObject>* instance, cv::DetectionBasedTracker::ExtObject* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_insert(std::vector<cv::DetectionBasedTracker::ExtObject>* instance, size_t index, cv::DetectionBasedTracker::ExtObject* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_get(const std::vector<cv::DetectionBasedTracker::ExtObject>* instance, size_t index, cv::DetectionBasedTracker::ExtObject** ocvrs_return) {
			cv::DetectionBasedTracker::ExtObject ret = (*instance)[index];
			*ocvrs_return = new cv::DetectionBasedTracker::ExtObject(ret);
	}
	
	void cv_VectorOfDetectionBasedTracker_ExtObject_set(std::vector<cv::DetectionBasedTracker::ExtObject>* instance, size_t index, cv::DetectionBasedTracker::ExtObject* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::DetectionBasedTracker::Object>* cv_VectorOfDetectionBasedTracker_Object_new() {
			std::vector<cv::DetectionBasedTracker::Object>* ret = new std::vector<cv::DetectionBasedTracker::Object>();
			return ret;
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_delete(std::vector<cv::DetectionBasedTracker::Object>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfDetectionBasedTracker_Object_len(const std::vector<cv::DetectionBasedTracker::Object>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfDetectionBasedTracker_Object_is_empty(const std::vector<cv::DetectionBasedTracker::Object>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfDetectionBasedTracker_Object_capacity(const std::vector<cv::DetectionBasedTracker::Object>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_shrink_to_fit(std::vector<cv::DetectionBasedTracker::Object>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_reserve(std::vector<cv::DetectionBasedTracker::Object>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_remove(std::vector<cv::DetectionBasedTracker::Object>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_swap(std::vector<cv::DetectionBasedTracker::Object>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_clear(std::vector<cv::DetectionBasedTracker::Object>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_push(std::vector<cv::DetectionBasedTracker::Object>* instance, cv::DetectionBasedTracker::Object* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_insert(std::vector<cv::DetectionBasedTracker::Object>* instance, size_t index, cv::DetectionBasedTracker::Object* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_get(const std::vector<cv::DetectionBasedTracker::Object>* instance, size_t index, cv::DetectionBasedTracker::Object** ocvrs_return) {
			cv::DetectionBasedTracker::Object ret = (*instance)[index];
			*ocvrs_return = new cv::DetectionBasedTracker::Object(ret);
	}
	
	void cv_VectorOfDetectionBasedTracker_Object_set(std::vector<cv::DetectionBasedTracker::Object>* instance, size_t index, cv::DetectionBasedTracker::Object* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::DetectionROI>* cv_VectorOfDetectionROI_new() {
			std::vector<cv::DetectionROI>* ret = new std::vector<cv::DetectionROI>();
			return ret;
	}
	
	void cv_VectorOfDetectionROI_delete(std::vector<cv::DetectionROI>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfDetectionROI_len(const std::vector<cv::DetectionROI>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfDetectionROI_is_empty(const std::vector<cv::DetectionROI>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfDetectionROI_capacity(const std::vector<cv::DetectionROI>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfDetectionROI_shrink_to_fit(std::vector<cv::DetectionROI>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfDetectionROI_reserve(std::vector<cv::DetectionROI>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfDetectionROI_remove(std::vector<cv::DetectionROI>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfDetectionROI_swap(std::vector<cv::DetectionROI>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfDetectionROI_clear(std::vector<cv::DetectionROI>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfDetectionROI_push(std::vector<cv::DetectionROI>* instance, cv::DetectionROI* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfDetectionROI_insert(std::vector<cv::DetectionROI>* instance, size_t index, cv::DetectionROI* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfDetectionROI_get(const std::vector<cv::DetectionROI>* instance, size_t index, cv::DetectionROI** ocvrs_return) {
			cv::DetectionROI ret = (*instance)[index];
			*ocvrs_return = new cv::DetectionROI(ret);
	}
	
	void cv_VectorOfDetectionROI_set(std::vector<cv::DetectionROI>* instance, size_t index, cv::DetectionROI* val) {
			(*instance)[index] = *val;
	}
	
}


