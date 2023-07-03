extern "C" {
	void cv_PtrOfBIF_delete(cv::Ptr<cv::face::BIF>* instance) {
			delete instance;
	}
	
	const cv::face::BIF* cv_PtrOfBIF_get_inner_ptr(const cv::Ptr<cv::face::BIF>* instance) {
		return instance->get();
	}

	cv::face::BIF* cv_PtrOfBIF_get_inner_ptr_mut(cv::Ptr<cv::face::BIF>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfEigenFaceRecognizer_delete(cv::Ptr<cv::face::EigenFaceRecognizer>* instance) {
			delete instance;
	}
	
	const cv::face::EigenFaceRecognizer* cv_PtrOfEigenFaceRecognizer_get_inner_ptr(const cv::Ptr<cv::face::EigenFaceRecognizer>* instance) {
		return instance->get();
	}

	cv::face::EigenFaceRecognizer* cv_PtrOfEigenFaceRecognizer_get_inner_ptr_mut(cv::Ptr<cv::face::EigenFaceRecognizer>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFacemark_delete(cv::Ptr<cv::face::Facemark>* instance) {
			delete instance;
	}
	
	const cv::face::Facemark* cv_PtrOfFacemark_get_inner_ptr(const cv::Ptr<cv::face::Facemark>* instance) {
		return instance->get();
	}

	cv::face::Facemark* cv_PtrOfFacemark_get_inner_ptr_mut(cv::Ptr<cv::face::Facemark>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFacemarkAAM_delete(cv::Ptr<cv::face::FacemarkAAM>* instance) {
			delete instance;
	}
	
	const cv::face::FacemarkAAM* cv_PtrOfFacemarkAAM_get_inner_ptr(const cv::Ptr<cv::face::FacemarkAAM>* instance) {
		return instance->get();
	}

	cv::face::FacemarkAAM* cv_PtrOfFacemarkAAM_get_inner_ptr_mut(cv::Ptr<cv::face::FacemarkAAM>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFacemarkKazemi_delete(cv::Ptr<cv::face::FacemarkKazemi>* instance) {
			delete instance;
	}
	
	const cv::face::FacemarkKazemi* cv_PtrOfFacemarkKazemi_get_inner_ptr(const cv::Ptr<cv::face::FacemarkKazemi>* instance) {
		return instance->get();
	}

	cv::face::FacemarkKazemi* cv_PtrOfFacemarkKazemi_get_inner_ptr_mut(cv::Ptr<cv::face::FacemarkKazemi>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFacemarkLBF_delete(cv::Ptr<cv::face::FacemarkLBF>* instance) {
			delete instance;
	}
	
	const cv::face::FacemarkLBF* cv_PtrOfFacemarkLBF_get_inner_ptr(const cv::Ptr<cv::face::FacemarkLBF>* instance) {
		return instance->get();
	}

	cv::face::FacemarkLBF* cv_PtrOfFacemarkLBF_get_inner_ptr_mut(cv::Ptr<cv::face::FacemarkLBF>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFisherFaceRecognizer_delete(cv::Ptr<cv::face::FisherFaceRecognizer>* instance) {
			delete instance;
	}
	
	const cv::face::FisherFaceRecognizer* cv_PtrOfFisherFaceRecognizer_get_inner_ptr(const cv::Ptr<cv::face::FisherFaceRecognizer>* instance) {
		return instance->get();
	}

	cv::face::FisherFaceRecognizer* cv_PtrOfFisherFaceRecognizer_get_inner_ptr_mut(cv::Ptr<cv::face::FisherFaceRecognizer>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfLBPHFaceRecognizer_delete(cv::Ptr<cv::face::LBPHFaceRecognizer>* instance) {
			delete instance;
	}
	
	const cv::face::LBPHFaceRecognizer* cv_PtrOfLBPHFaceRecognizer_get_inner_ptr(const cv::Ptr<cv::face::LBPHFaceRecognizer>* instance) {
		return instance->get();
	}

	cv::face::LBPHFaceRecognizer* cv_PtrOfLBPHFaceRecognizer_get_inner_ptr_mut(cv::Ptr<cv::face::LBPHFaceRecognizer>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfMACE_delete(cv::Ptr<cv::face::MACE>* instance) {
			delete instance;
	}
	
	const cv::face::MACE* cv_PtrOfMACE_get_inner_ptr(const cv::Ptr<cv::face::MACE>* instance) {
		return instance->get();
	}

	cv::face::MACE* cv_PtrOfMACE_get_inner_ptr_mut(cv::Ptr<cv::face::MACE>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfPredictCollector_delete(cv::Ptr<cv::face::PredictCollector>* instance) {
			delete instance;
	}
	
	const cv::face::PredictCollector* cv_PtrOfPredictCollector_get_inner_ptr(const cv::Ptr<cv::face::PredictCollector>* instance) {
		return instance->get();
	}

	cv::face::PredictCollector* cv_PtrOfPredictCollector_get_inner_ptr_mut(cv::Ptr<cv::face::PredictCollector>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::face::StandardCollector>* cv_PtrOfStandardCollector_new(cv::face::StandardCollector* val) {
			cv::Ptr<cv::face::StandardCollector> ret = cv::Ptr<cv::face::StandardCollector>(val);
			return new cv::Ptr<cv::face::StandardCollector>(ret);
	}
	
	void cv_PtrOfStandardCollector_delete(cv::Ptr<cv::face::StandardCollector>* instance) {
			delete instance;
	}
	
	const cv::face::StandardCollector* cv_PtrOfStandardCollector_get_inner_ptr(const cv::Ptr<cv::face::StandardCollector>* instance) {
		return instance->get();
	}

	cv::face::StandardCollector* cv_PtrOfStandardCollector_get_inner_ptr_mut(cv::Ptr<cv::face::StandardCollector>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::face::PredictCollector>* cv_PtrOfStandardCollector_to_PtrOfPredictCollector(cv::Ptr<cv::face::StandardCollector>* instance) {
		return new cv::Ptr<cv::face::PredictCollector>(instance->dynamicCast<cv::face::PredictCollector>());
	}
}

extern "C" {
	std::vector<cv::face::FacemarkAAM::Config>* cv_VectorOfFacemarkAAM_Config_new() {
			std::vector<cv::face::FacemarkAAM::Config>* ret = new std::vector<cv::face::FacemarkAAM::Config>();
			return ret;
	}
	
	void cv_VectorOfFacemarkAAM_Config_delete(std::vector<cv::face::FacemarkAAM::Config>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfFacemarkAAM_Config_len(const std::vector<cv::face::FacemarkAAM::Config>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfFacemarkAAM_Config_is_empty(const std::vector<cv::face::FacemarkAAM::Config>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfFacemarkAAM_Config_capacity(const std::vector<cv::face::FacemarkAAM::Config>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfFacemarkAAM_Config_shrink_to_fit(std::vector<cv::face::FacemarkAAM::Config>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfFacemarkAAM_Config_reserve(std::vector<cv::face::FacemarkAAM::Config>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfFacemarkAAM_Config_remove(std::vector<cv::face::FacemarkAAM::Config>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfFacemarkAAM_Config_swap(std::vector<cv::face::FacemarkAAM::Config>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfFacemarkAAM_Config_clear(std::vector<cv::face::FacemarkAAM::Config>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfFacemarkAAM_Config_push(std::vector<cv::face::FacemarkAAM::Config>* instance, cv::face::FacemarkAAM::Config* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfFacemarkAAM_Config_insert(std::vector<cv::face::FacemarkAAM::Config>* instance, size_t index, cv::face::FacemarkAAM::Config* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfFacemarkAAM_Config_get(const std::vector<cv::face::FacemarkAAM::Config>* instance, size_t index, cv::face::FacemarkAAM::Config** ocvrs_return) {
			cv::face::FacemarkAAM::Config ret = (*instance)[index];
			*ocvrs_return = new cv::face::FacemarkAAM::Config(ret);
	}
	
	void cv_VectorOfFacemarkAAM_Config_set(std::vector<cv::face::FacemarkAAM::Config>* instance, size_t index, cv::face::FacemarkAAM::Config* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::face::FacemarkAAM::Model::Texture>* cv_VectorOfFacemarkAAM_Model_Texture_new() {
			std::vector<cv::face::FacemarkAAM::Model::Texture>* ret = new std::vector<cv::face::FacemarkAAM::Model::Texture>();
			return ret;
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_delete(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfFacemarkAAM_Model_Texture_len(const std::vector<cv::face::FacemarkAAM::Model::Texture>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfFacemarkAAM_Model_Texture_is_empty(const std::vector<cv::face::FacemarkAAM::Model::Texture>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfFacemarkAAM_Model_Texture_capacity(const std::vector<cv::face::FacemarkAAM::Model::Texture>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_shrink_to_fit(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_reserve(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_remove(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_swap(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_clear(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_push(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, cv::face::FacemarkAAM::Model::Texture* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_insert(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, size_t index, cv::face::FacemarkAAM::Model::Texture* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_get(const std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, size_t index, cv::face::FacemarkAAM::Model::Texture** ocvrs_return) {
			cv::face::FacemarkAAM::Model::Texture ret = (*instance)[index];
			*ocvrs_return = new cv::face::FacemarkAAM::Model::Texture(ret);
	}
	
	void cv_VectorOfFacemarkAAM_Model_Texture_set(std::vector<cv::face::FacemarkAAM::Model::Texture>* instance, size_t index, cv::face::FacemarkAAM::Model::Texture* val) {
			(*instance)[index] = *val;
	}
	
}


