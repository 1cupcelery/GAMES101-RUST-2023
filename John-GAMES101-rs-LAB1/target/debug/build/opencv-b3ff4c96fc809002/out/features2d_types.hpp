extern "C" {
	void cv_PtrOfAKAZE_delete(cv::Ptr<cv::AKAZE>* instance) {
			delete instance;
	}
	
	const cv::AKAZE* cv_PtrOfAKAZE_get_inner_ptr(const cv::Ptr<cv::AKAZE>* instance) {
		return instance->get();
	}

	cv::AKAZE* cv_PtrOfAKAZE_get_inner_ptr_mut(cv::Ptr<cv::AKAZE>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfAKAZE_to_PtrOfFeature2D(cv::Ptr<cv::AKAZE>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	void cv_PtrOfAffineFeature_delete(cv::Ptr<cv::AffineFeature>* instance) {
			delete instance;
	}
	
	const cv::AffineFeature* cv_PtrOfAffineFeature_get_inner_ptr(const cv::Ptr<cv::AffineFeature>* instance) {
		return instance->get();
	}

	cv::AffineFeature* cv_PtrOfAffineFeature_get_inner_ptr_mut(cv::Ptr<cv::AffineFeature>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfAffineFeature_to_PtrOfFeature2D(cv::Ptr<cv::AffineFeature>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	void cv_PtrOfAgastFeatureDetector_delete(cv::Ptr<cv::AgastFeatureDetector>* instance) {
			delete instance;
	}
	
	const cv::AgastFeatureDetector* cv_PtrOfAgastFeatureDetector_get_inner_ptr(const cv::Ptr<cv::AgastFeatureDetector>* instance) {
		return instance->get();
	}

	cv::AgastFeatureDetector* cv_PtrOfAgastFeatureDetector_get_inner_ptr_mut(cv::Ptr<cv::AgastFeatureDetector>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfAgastFeatureDetector_to_PtrOfFeature2D(cv::Ptr<cv::AgastFeatureDetector>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	cv::Ptr<cv::BFMatcher>* cv_PtrOfBFMatcher_new(cv::BFMatcher* val) {
			cv::Ptr<cv::BFMatcher> ret = cv::Ptr<cv::BFMatcher>(val);
			return new cv::Ptr<cv::BFMatcher>(ret);
	}
	
	void cv_PtrOfBFMatcher_delete(cv::Ptr<cv::BFMatcher>* instance) {
			delete instance;
	}
	
	const cv::BFMatcher* cv_PtrOfBFMatcher_get_inner_ptr(const cv::Ptr<cv::BFMatcher>* instance) {
		return instance->get();
	}

	cv::BFMatcher* cv_PtrOfBFMatcher_get_inner_ptr_mut(cv::Ptr<cv::BFMatcher>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::BRISK>* cv_PtrOfBRISK_new(cv::BRISK* val) {
			cv::Ptr<cv::BRISK> ret = cv::Ptr<cv::BRISK>(val);
			return new cv::Ptr<cv::BRISK>(ret);
	}
	
	void cv_PtrOfBRISK_delete(cv::Ptr<cv::BRISK>* instance) {
			delete instance;
	}
	
	const cv::BRISK* cv_PtrOfBRISK_get_inner_ptr(const cv::Ptr<cv::BRISK>* instance) {
		return instance->get();
	}

	cv::BRISK* cv_PtrOfBRISK_get_inner_ptr_mut(cv::Ptr<cv::BRISK>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfBRISK_to_PtrOfFeature2D(cv::Ptr<cv::BRISK>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	void cv_PtrOfDescriptorMatcher_delete(cv::Ptr<cv::DescriptorMatcher>* instance) {
			delete instance;
	}
	
	const cv::DescriptorMatcher* cv_PtrOfDescriptorMatcher_get_inner_ptr(const cv::Ptr<cv::DescriptorMatcher>* instance) {
		return instance->get();
	}

	cv::DescriptorMatcher* cv_PtrOfDescriptorMatcher_get_inner_ptr_mut(cv::Ptr<cv::DescriptorMatcher>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFastFeatureDetector_delete(cv::Ptr<cv::FastFeatureDetector>* instance) {
			delete instance;
	}
	
	const cv::FastFeatureDetector* cv_PtrOfFastFeatureDetector_get_inner_ptr(const cv::Ptr<cv::FastFeatureDetector>* instance) {
		return instance->get();
	}

	cv::FastFeatureDetector* cv_PtrOfFastFeatureDetector_get_inner_ptr_mut(cv::Ptr<cv::FastFeatureDetector>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfFastFeatureDetector_to_PtrOfFeature2D(cv::Ptr<cv::FastFeatureDetector>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	cv::Ptr<cv::Feature2D>* cv_PtrOfFeature2D_new(cv::Feature2D* val) {
			cv::Ptr<cv::Feature2D> ret = cv::Ptr<cv::Feature2D>(val);
			return new cv::Ptr<cv::Feature2D>(ret);
	}
	
	void cv_PtrOfFeature2D_delete(cv::Ptr<cv::Feature2D>* instance) {
			delete instance;
	}
	
	const cv::Feature2D* cv_PtrOfFeature2D_get_inner_ptr(const cv::Ptr<cv::Feature2D>* instance) {
		return instance->get();
	}

	cv::Feature2D* cv_PtrOfFeature2D_get_inner_ptr_mut(cv::Ptr<cv::Feature2D>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::FlannBasedMatcher>* cv_PtrOfFlannBasedMatcher_new(cv::FlannBasedMatcher* val) {
			cv::Ptr<cv::FlannBasedMatcher> ret = cv::Ptr<cv::FlannBasedMatcher>(val);
			return new cv::Ptr<cv::FlannBasedMatcher>(ret);
	}
	
	void cv_PtrOfFlannBasedMatcher_delete(cv::Ptr<cv::FlannBasedMatcher>* instance) {
			delete instance;
	}
	
	const cv::FlannBasedMatcher* cv_PtrOfFlannBasedMatcher_get_inner_ptr(const cv::Ptr<cv::FlannBasedMatcher>* instance) {
		return instance->get();
	}

	cv::FlannBasedMatcher* cv_PtrOfFlannBasedMatcher_get_inner_ptr_mut(cv::Ptr<cv::FlannBasedMatcher>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfGFTTDetector_delete(cv::Ptr<cv::GFTTDetector>* instance) {
			delete instance;
	}
	
	const cv::GFTTDetector* cv_PtrOfGFTTDetector_get_inner_ptr(const cv::Ptr<cv::GFTTDetector>* instance) {
		return instance->get();
	}

	cv::GFTTDetector* cv_PtrOfGFTTDetector_get_inner_ptr_mut(cv::Ptr<cv::GFTTDetector>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfGFTTDetector_to_PtrOfFeature2D(cv::Ptr<cv::GFTTDetector>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	void cv_PtrOfKAZE_delete(cv::Ptr<cv::KAZE>* instance) {
			delete instance;
	}
	
	const cv::KAZE* cv_PtrOfKAZE_get_inner_ptr(const cv::Ptr<cv::KAZE>* instance) {
		return instance->get();
	}

	cv::KAZE* cv_PtrOfKAZE_get_inner_ptr_mut(cv::Ptr<cv::KAZE>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfKAZE_to_PtrOfFeature2D(cv::Ptr<cv::KAZE>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	void cv_PtrOfMSER_delete(cv::Ptr<cv::MSER>* instance) {
			delete instance;
	}
	
	const cv::MSER* cv_PtrOfMSER_get_inner_ptr(const cv::Ptr<cv::MSER>* instance) {
		return instance->get();
	}

	cv::MSER* cv_PtrOfMSER_get_inner_ptr_mut(cv::Ptr<cv::MSER>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfMSER_to_PtrOfFeature2D(cv::Ptr<cv::MSER>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	void cv_PtrOfORB_delete(cv::Ptr<cv::ORB>* instance) {
			delete instance;
	}
	
	const cv::ORB* cv_PtrOfORB_get_inner_ptr(const cv::Ptr<cv::ORB>* instance) {
		return instance->get();
	}

	cv::ORB* cv_PtrOfORB_get_inner_ptr_mut(cv::Ptr<cv::ORB>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfORB_to_PtrOfFeature2D(cv::Ptr<cv::ORB>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	cv::Ptr<cv::SIFT>* cv_PtrOfSIFT_new(cv::SIFT* val) {
			cv::Ptr<cv::SIFT> ret = cv::Ptr<cv::SIFT>(val);
			return new cv::Ptr<cv::SIFT>(ret);
	}
	
	void cv_PtrOfSIFT_delete(cv::Ptr<cv::SIFT>* instance) {
			delete instance;
	}
	
	const cv::SIFT* cv_PtrOfSIFT_get_inner_ptr(const cv::Ptr<cv::SIFT>* instance) {
		return instance->get();
	}

	cv::SIFT* cv_PtrOfSIFT_get_inner_ptr_mut(cv::Ptr<cv::SIFT>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfSIFT_to_PtrOfFeature2D(cv::Ptr<cv::SIFT>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

extern "C" {
	cv::Ptr<cv::SimpleBlobDetector>* cv_PtrOfSimpleBlobDetector_new(cv::SimpleBlobDetector* val) {
			cv::Ptr<cv::SimpleBlobDetector> ret = cv::Ptr<cv::SimpleBlobDetector>(val);
			return new cv::Ptr<cv::SimpleBlobDetector>(ret);
	}
	
	void cv_PtrOfSimpleBlobDetector_delete(cv::Ptr<cv::SimpleBlobDetector>* instance) {
			delete instance;
	}
	
	const cv::SimpleBlobDetector* cv_PtrOfSimpleBlobDetector_get_inner_ptr(const cv::Ptr<cv::SimpleBlobDetector>* instance) {
		return instance->get();
	}

	cv::SimpleBlobDetector* cv_PtrOfSimpleBlobDetector_get_inner_ptr_mut(cv::Ptr<cv::SimpleBlobDetector>* instance) {
		return instance->get();
	}
	
	cv::Ptr<cv::Feature2D>* cv_PtrOfSimpleBlobDetector_to_PtrOfFeature2D(cv::Ptr<cv::SimpleBlobDetector>* instance) {
		return new cv::Ptr<cv::Feature2D>(instance->dynamicCast<cv::Feature2D>());
	}
}

