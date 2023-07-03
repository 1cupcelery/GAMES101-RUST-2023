extern "C" {
	void cv_PtrOfDenseRLOFOpticalFlow_delete(cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>* instance) {
			delete instance;
	}
	
	const cv::optflow::DenseRLOFOpticalFlow* cv_PtrOfDenseRLOFOpticalFlow_get_inner_ptr(const cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>* instance) {
		return instance->get();
	}

	cv::optflow::DenseRLOFOpticalFlow* cv_PtrOfDenseRLOFOpticalFlow_get_inner_ptr_mut(cv::Ptr<cv::optflow::DenseRLOFOpticalFlow>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfDualTVL1OpticalFlow_delete(cv::Ptr<cv::optflow::DualTVL1OpticalFlow>* instance) {
			delete instance;
	}
	
	const cv::optflow::DualTVL1OpticalFlow* cv_PtrOfDualTVL1OpticalFlow_get_inner_ptr(const cv::Ptr<cv::optflow::DualTVL1OpticalFlow>* instance) {
		return instance->get();
	}

	cv::optflow::DualTVL1OpticalFlow* cv_PtrOfDualTVL1OpticalFlow_get_inner_ptr_mut(cv::Ptr<cv::optflow::DualTVL1OpticalFlow>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::optflow::GPCTrainingSamples>* cv_PtrOfGPCTrainingSamples_new(cv::optflow::GPCTrainingSamples* val) {
			cv::Ptr<cv::optflow::GPCTrainingSamples> ret = cv::Ptr<cv::optflow::GPCTrainingSamples>(val);
			return new cv::Ptr<cv::optflow::GPCTrainingSamples>(ret);
	}
	
	void cv_PtrOfGPCTrainingSamples_delete(cv::Ptr<cv::optflow::GPCTrainingSamples>* instance) {
			delete instance;
	}
	
	const cv::optflow::GPCTrainingSamples* cv_PtrOfGPCTrainingSamples_get_inner_ptr(const cv::Ptr<cv::optflow::GPCTrainingSamples>* instance) {
		return instance->get();
	}

	cv::optflow::GPCTrainingSamples* cv_PtrOfGPCTrainingSamples_get_inner_ptr_mut(cv::Ptr<cv::optflow::GPCTrainingSamples>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::optflow::GPCTree>* cv_PtrOfGPCTree_new(cv::optflow::GPCTree* val) {
			cv::Ptr<cv::optflow::GPCTree> ret = cv::Ptr<cv::optflow::GPCTree>(val);
			return new cv::Ptr<cv::optflow::GPCTree>(ret);
	}
	
	void cv_PtrOfGPCTree_delete(cv::Ptr<cv::optflow::GPCTree>* instance) {
			delete instance;
	}
	
	const cv::optflow::GPCTree* cv_PtrOfGPCTree_get_inner_ptr(const cv::Ptr<cv::optflow::GPCTree>* instance) {
		return instance->get();
	}

	cv::optflow::GPCTree* cv_PtrOfGPCTree_get_inner_ptr_mut(cv::Ptr<cv::optflow::GPCTree>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<const cv::optflow::PCAPrior>* cv_PtrOfPCAPrior_new(const cv::optflow::PCAPrior* val) {
			cv::Ptr<const cv::optflow::PCAPrior> ret = cv::Ptr<const cv::optflow::PCAPrior>(val);
			return new cv::Ptr<const cv::optflow::PCAPrior>(ret);
	}
	
	void cv_PtrOfPCAPrior_delete(cv::Ptr<const cv::optflow::PCAPrior>* instance) {
			delete instance;
	}
	
	const cv::optflow::PCAPrior* cv_PtrOfPCAPrior_get_inner_ptr(const cv::Ptr<const cv::optflow::PCAPrior>* instance) {
		return instance->get();
	}

	const cv::optflow::PCAPrior* cv_PtrOfPCAPrior_get_inner_ptr_mut(cv::Ptr<const cv::optflow::PCAPrior>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* cv_PtrOfRLOFOpticalFlowParameter_new(cv::optflow::RLOFOpticalFlowParameter* val) {
			cv::Ptr<cv::optflow::RLOFOpticalFlowParameter> ret = cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>(val);
			return new cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>(ret);
	}
	
	void cv_PtrOfRLOFOpticalFlowParameter_delete(cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* instance) {
			delete instance;
	}
	
	const cv::optflow::RLOFOpticalFlowParameter* cv_PtrOfRLOFOpticalFlowParameter_get_inner_ptr(const cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* instance) {
		return instance->get();
	}

	cv::optflow::RLOFOpticalFlowParameter* cv_PtrOfRLOFOpticalFlowParameter_get_inner_ptr_mut(cv::Ptr<cv::optflow::RLOFOpticalFlowParameter>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfSparseRLOFOpticalFlow_delete(cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>* instance) {
			delete instance;
	}
	
	const cv::optflow::SparseRLOFOpticalFlow* cv_PtrOfSparseRLOFOpticalFlow_get_inner_ptr(const cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>* instance) {
		return instance->get();
	}

	cv::optflow::SparseRLOFOpticalFlow* cv_PtrOfSparseRLOFOpticalFlow_get_inner_ptr_mut(cv::Ptr<cv::optflow::SparseRLOFOpticalFlow>* instance) {
		return instance->get();
	}
}

extern "C" {
	std::vector<cv::optflow::GPCPatchDescriptor>* cv_VectorOfGPCPatchDescriptor_new() {
			std::vector<cv::optflow::GPCPatchDescriptor>* ret = new std::vector<cv::optflow::GPCPatchDescriptor>();
			return ret;
	}
	
	void cv_VectorOfGPCPatchDescriptor_delete(std::vector<cv::optflow::GPCPatchDescriptor>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfGPCPatchDescriptor_len(const std::vector<cv::optflow::GPCPatchDescriptor>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfGPCPatchDescriptor_is_empty(const std::vector<cv::optflow::GPCPatchDescriptor>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfGPCPatchDescriptor_capacity(const std::vector<cv::optflow::GPCPatchDescriptor>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfGPCPatchDescriptor_shrink_to_fit(std::vector<cv::optflow::GPCPatchDescriptor>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfGPCPatchDescriptor_reserve(std::vector<cv::optflow::GPCPatchDescriptor>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfGPCPatchDescriptor_remove(std::vector<cv::optflow::GPCPatchDescriptor>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfGPCPatchDescriptor_swap(std::vector<cv::optflow::GPCPatchDescriptor>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfGPCPatchDescriptor_clear(std::vector<cv::optflow::GPCPatchDescriptor>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfGPCPatchDescriptor_push(std::vector<cv::optflow::GPCPatchDescriptor>* instance, cv::optflow::GPCPatchDescriptor* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfGPCPatchDescriptor_insert(std::vector<cv::optflow::GPCPatchDescriptor>* instance, size_t index, cv::optflow::GPCPatchDescriptor* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfGPCPatchDescriptor_get(const std::vector<cv::optflow::GPCPatchDescriptor>* instance, size_t index, cv::optflow::GPCPatchDescriptor** ocvrs_return) {
			cv::optflow::GPCPatchDescriptor ret = (*instance)[index];
			*ocvrs_return = new cv::optflow::GPCPatchDescriptor(ret);
	}
	
	void cv_VectorOfGPCPatchDescriptor_set(std::vector<cv::optflow::GPCPatchDescriptor>* instance, size_t index, cv::optflow::GPCPatchDescriptor* val) {
			(*instance)[index] = *val;
	}
	
}


