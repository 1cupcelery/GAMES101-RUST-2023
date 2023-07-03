extern "C" {
	void cv_PtrOfCLAHE_delete(cv::Ptr<cv::CLAHE>* instance) {
			delete instance;
	}
	
	const cv::CLAHE* cv_PtrOfCLAHE_get_inner_ptr(const cv::Ptr<cv::CLAHE>* instance) {
		return instance->get();
	}

	cv::CLAHE* cv_PtrOfCLAHE_get_inner_ptr_mut(cv::Ptr<cv::CLAHE>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfGeneralizedHoughBallard_delete(cv::Ptr<cv::GeneralizedHoughBallard>* instance) {
			delete instance;
	}
	
	const cv::GeneralizedHoughBallard* cv_PtrOfGeneralizedHoughBallard_get_inner_ptr(const cv::Ptr<cv::GeneralizedHoughBallard>* instance) {
		return instance->get();
	}

	cv::GeneralizedHoughBallard* cv_PtrOfGeneralizedHoughBallard_get_inner_ptr_mut(cv::Ptr<cv::GeneralizedHoughBallard>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfGeneralizedHoughGuil_delete(cv::Ptr<cv::GeneralizedHoughGuil>* instance) {
			delete instance;
	}
	
	const cv::GeneralizedHoughGuil* cv_PtrOfGeneralizedHoughGuil_get_inner_ptr(const cv::Ptr<cv::GeneralizedHoughGuil>* instance) {
		return instance->get();
	}

	cv::GeneralizedHoughGuil* cv_PtrOfGeneralizedHoughGuil_get_inner_ptr_mut(cv::Ptr<cv::GeneralizedHoughGuil>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfLineSegmentDetector_delete(cv::Ptr<cv::LineSegmentDetector>* instance) {
			delete instance;
	}
	
	const cv::LineSegmentDetector* cv_PtrOfLineSegmentDetector_get_inner_ptr(const cv::Ptr<cv::LineSegmentDetector>* instance) {
		return instance->get();
	}

	cv::LineSegmentDetector* cv_PtrOfLineSegmentDetector_get_inner_ptr_mut(cv::Ptr<cv::LineSegmentDetector>* instance) {
		return instance->get();
	}
}

