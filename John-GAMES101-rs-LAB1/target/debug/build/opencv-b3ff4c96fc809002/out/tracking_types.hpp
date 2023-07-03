extern "C" {
	void cv_PtrOfTrackerCSRT_delete(cv::Ptr<cv::tracking::TrackerCSRT>* instance) {
			delete instance;
	}
	
	const cv::tracking::TrackerCSRT* cv_PtrOfTrackerCSRT_get_inner_ptr(const cv::Ptr<cv::tracking::TrackerCSRT>* instance) {
		return instance->get();
	}

	cv::tracking::TrackerCSRT* cv_PtrOfTrackerCSRT_get_inner_ptr_mut(cv::Ptr<cv::tracking::TrackerCSRT>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfTrackerKCF_delete(cv::Ptr<cv::tracking::TrackerKCF>* instance) {
			delete instance;
	}
	
	const cv::tracking::TrackerKCF* cv_PtrOfTrackerKCF_get_inner_ptr(const cv::Ptr<cv::tracking::TrackerKCF>* instance) {
		return instance->get();
	}

	cv::tracking::TrackerKCF* cv_PtrOfTrackerKCF_get_inner_ptr_mut(cv::Ptr<cv::tracking::TrackerKCF>* instance) {
		return instance->get();
	}
}

