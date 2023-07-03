extern "C" {
	cv::Ptr<cv::ppf_match_3d::Pose3D>* cv_PtrOfPose3D_new(cv::ppf_match_3d::Pose3D* val) {
			cv::Ptr<cv::ppf_match_3d::Pose3D> ret = cv::Ptr<cv::ppf_match_3d::Pose3D>(val);
			return new cv::Ptr<cv::ppf_match_3d::Pose3D>(ret);
	}
	
	void cv_PtrOfPose3D_delete(cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
			delete instance;
	}
	
	const cv::ppf_match_3d::Pose3D* cv_PtrOfPose3D_get_inner_ptr(const cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
		return instance->get();
	}

	cv::ppf_match_3d::Pose3D* cv_PtrOfPose3D_get_inner_ptr_mut(cv::Ptr<cv::ppf_match_3d::Pose3D>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* cv_PtrOfPoseCluster3D_new(cv::ppf_match_3d::PoseCluster3D* val) {
			cv::Ptr<cv::ppf_match_3d::PoseCluster3D> ret = cv::Ptr<cv::ppf_match_3d::PoseCluster3D>(val);
			return new cv::Ptr<cv::ppf_match_3d::PoseCluster3D>(ret);
	}
	
	void cv_PtrOfPoseCluster3D_delete(cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
			delete instance;
	}
	
	const cv::ppf_match_3d::PoseCluster3D* cv_PtrOfPoseCluster3D_get_inner_ptr(const cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
		return instance->get();
	}

	cv::ppf_match_3d::PoseCluster3D* cv_PtrOfPoseCluster3D_get_inner_ptr_mut(cv::Ptr<cv::ppf_match_3d::PoseCluster3D>* instance) {
		return instance->get();
	}
}

extern "C" {
	std::vector<cv::ppf_match_3d::Pose3DPtr>* cv_VectorOfPose3DPtr_new() {
			std::vector<cv::ppf_match_3d::Pose3DPtr>* ret = new std::vector<cv::ppf_match_3d::Pose3DPtr>();
			return ret;
	}
	
	void cv_VectorOfPose3DPtr_delete(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPose3DPtr_len(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPose3DPtr_is_empty(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPose3DPtr_capacity(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPose3DPtr_shrink_to_fit(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPose3DPtr_reserve(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPose3DPtr_remove(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPose3DPtr_swap(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPose3DPtr_clear(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPose3DPtr_push(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, cv::ppf_match_3d::Pose3DPtr* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPose3DPtr_insert(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index, cv::ppf_match_3d::Pose3DPtr* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPose3DPtr_get(const std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index, cv::ppf_match_3d::Pose3DPtr** ocvrs_return) {
			cv::ppf_match_3d::Pose3DPtr ret = (*instance)[index];
			*ocvrs_return = new cv::ppf_match_3d::Pose3DPtr(ret);
	}
	
	void cv_VectorOfPose3DPtr_set(std::vector<cv::ppf_match_3d::Pose3DPtr>* instance, size_t index, cv::ppf_match_3d::Pose3DPtr* val) {
			(*instance)[index] = *val;
	}
	
}


