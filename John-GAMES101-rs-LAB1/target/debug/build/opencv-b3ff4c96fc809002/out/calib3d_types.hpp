extern "C" {
	void cv_PtrOfLMSolver_delete(cv::Ptr<cv::LMSolver>* instance) {
			delete instance;
	}
	
	const cv::LMSolver* cv_PtrOfLMSolver_get_inner_ptr(const cv::Ptr<cv::LMSolver>* instance) {
		return instance->get();
	}

	cv::LMSolver* cv_PtrOfLMSolver_get_inner_ptr_mut(cv::Ptr<cv::LMSolver>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfLMSolver_Callback_delete(cv::Ptr<cv::LMSolver::Callback>* instance) {
			delete instance;
	}
	
	const cv::LMSolver::Callback* cv_PtrOfLMSolver_Callback_get_inner_ptr(const cv::Ptr<cv::LMSolver::Callback>* instance) {
		return instance->get();
	}

	cv::LMSolver::Callback* cv_PtrOfLMSolver_Callback_get_inner_ptr_mut(cv::Ptr<cv::LMSolver::Callback>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfStereoBM_delete(cv::Ptr<cv::StereoBM>* instance) {
			delete instance;
	}
	
	const cv::StereoBM* cv_PtrOfStereoBM_get_inner_ptr(const cv::Ptr<cv::StereoBM>* instance) {
		return instance->get();
	}

	cv::StereoBM* cv_PtrOfStereoBM_get_inner_ptr_mut(cv::Ptr<cv::StereoBM>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfStereoMatcher_delete(cv::Ptr<cv::StereoMatcher>* instance) {
			delete instance;
	}
	
	const cv::StereoMatcher* cv_PtrOfStereoMatcher_get_inner_ptr(const cv::Ptr<cv::StereoMatcher>* instance) {
		return instance->get();
	}

	cv::StereoMatcher* cv_PtrOfStereoMatcher_get_inner_ptr_mut(cv::Ptr<cv::StereoMatcher>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfStereoSGBM_delete(cv::Ptr<cv::StereoSGBM>* instance) {
			delete instance;
	}
	
	const cv::StereoSGBM* cv_PtrOfStereoSGBM_get_inner_ptr(const cv::Ptr<cv::StereoSGBM>* instance) {
		return instance->get();
	}

	cv::StereoSGBM* cv_PtrOfStereoSGBM_get_inner_ptr_mut(cv::Ptr<cv::StereoSGBM>* instance) {
		return instance->get();
	}
}

