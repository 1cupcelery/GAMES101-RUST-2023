extern "C" {
	cv::Ptr<cv::aruco::Board>* cv_PtrOfBoard_new(cv::aruco::Board* val) {
			cv::Ptr<cv::aruco::Board> ret = cv::Ptr<cv::aruco::Board>(val);
			return new cv::Ptr<cv::aruco::Board>(ret);
	}
	
	void cv_PtrOfBoard_delete(cv::Ptr<cv::aruco::Board>* instance) {
			delete instance;
	}
	
	const cv::aruco::Board* cv_PtrOfBoard_get_inner_ptr(const cv::Ptr<cv::aruco::Board>* instance) {
		return instance->get();
	}

	cv::aruco::Board* cv_PtrOfBoard_get_inner_ptr_mut(cv::Ptr<cv::aruco::Board>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::aruco::CharucoBoard>* cv_PtrOfCharucoBoard_new(cv::aruco::CharucoBoard* val) {
			cv::Ptr<cv::aruco::CharucoBoard> ret = cv::Ptr<cv::aruco::CharucoBoard>(val);
			return new cv::Ptr<cv::aruco::CharucoBoard>(ret);
	}
	
	void cv_PtrOfCharucoBoard_delete(cv::Ptr<cv::aruco::CharucoBoard>* instance) {
			delete instance;
	}
	
	const cv::aruco::CharucoBoard* cv_PtrOfCharucoBoard_get_inner_ptr(const cv::Ptr<cv::aruco::CharucoBoard>* instance) {
		return instance->get();
	}

	cv::aruco::CharucoBoard* cv_PtrOfCharucoBoard_get_inner_ptr_mut(cv::Ptr<cv::aruco::CharucoBoard>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::aruco::DetectorParameters>* cv_PtrOfDetectorParameters_new(cv::aruco::DetectorParameters* val) {
			cv::Ptr<cv::aruco::DetectorParameters> ret = cv::Ptr<cv::aruco::DetectorParameters>(val);
			return new cv::Ptr<cv::aruco::DetectorParameters>(ret);
	}
	
	void cv_PtrOfDetectorParameters_delete(cv::Ptr<cv::aruco::DetectorParameters>* instance) {
			delete instance;
	}
	
	const cv::aruco::DetectorParameters* cv_PtrOfDetectorParameters_get_inner_ptr(const cv::Ptr<cv::aruco::DetectorParameters>* instance) {
		return instance->get();
	}

	cv::aruco::DetectorParameters* cv_PtrOfDetectorParameters_get_inner_ptr_mut(cv::Ptr<cv::aruco::DetectorParameters>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::aruco::Dictionary>* cv_PtrOfDictionary_new(cv::aruco::Dictionary* val) {
			cv::Ptr<cv::aruco::Dictionary> ret = cv::Ptr<cv::aruco::Dictionary>(val);
			return new cv::Ptr<cv::aruco::Dictionary>(ret);
	}
	
	void cv_PtrOfDictionary_delete(cv::Ptr<cv::aruco::Dictionary>* instance) {
			delete instance;
	}
	
	const cv::aruco::Dictionary* cv_PtrOfDictionary_get_inner_ptr(const cv::Ptr<cv::aruco::Dictionary>* instance) {
		return instance->get();
	}

	cv::aruco::Dictionary* cv_PtrOfDictionary_get_inner_ptr_mut(cv::Ptr<cv::aruco::Dictionary>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::aruco::GridBoard>* cv_PtrOfGridBoard_new(cv::aruco::GridBoard* val) {
			cv::Ptr<cv::aruco::GridBoard> ret = cv::Ptr<cv::aruco::GridBoard>(val);
			return new cv::Ptr<cv::aruco::GridBoard>(ret);
	}
	
	void cv_PtrOfGridBoard_delete(cv::Ptr<cv::aruco::GridBoard>* instance) {
			delete instance;
	}
	
	const cv::aruco::GridBoard* cv_PtrOfGridBoard_get_inner_ptr(const cv::Ptr<cv::aruco::GridBoard>* instance) {
		return instance->get();
	}

	cv::aruco::GridBoard* cv_PtrOfGridBoard_get_inner_ptr_mut(cv::Ptr<cv::aruco::GridBoard>* instance) {
		return instance->get();
	}
}

