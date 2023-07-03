extern "C" {
	void cv_PtrOfGrayCodePattern_delete(cv::Ptr<cv::structured_light::GrayCodePattern>* instance) {
			delete instance;
	}
	
	const cv::structured_light::GrayCodePattern* cv_PtrOfGrayCodePattern_get_inner_ptr(const cv::Ptr<cv::structured_light::GrayCodePattern>* instance) {
		return instance->get();
	}

	cv::structured_light::GrayCodePattern* cv_PtrOfGrayCodePattern_get_inner_ptr_mut(cv::Ptr<cv::structured_light::GrayCodePattern>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfSinusoidalPattern_delete(cv::Ptr<cv::structured_light::SinusoidalPattern>* instance) {
			delete instance;
	}
	
	const cv::structured_light::SinusoidalPattern* cv_PtrOfSinusoidalPattern_get_inner_ptr(const cv::Ptr<cv::structured_light::SinusoidalPattern>* instance) {
		return instance->get();
	}

	cv::structured_light::SinusoidalPattern* cv_PtrOfSinusoidalPattern_get_inner_ptr_mut(cv::Ptr<cv::structured_light::SinusoidalPattern>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* cv_PtrOfSinusoidalPattern_Params_new(cv::structured_light::SinusoidalPattern::Params* val) {
			cv::Ptr<cv::structured_light::SinusoidalPattern::Params> ret = cv::Ptr<cv::structured_light::SinusoidalPattern::Params>(val);
			return new cv::Ptr<cv::structured_light::SinusoidalPattern::Params>(ret);
	}
	
	void cv_PtrOfSinusoidalPattern_Params_delete(cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* instance) {
			delete instance;
	}
	
	const cv::structured_light::SinusoidalPattern::Params* cv_PtrOfSinusoidalPattern_Params_get_inner_ptr(const cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* instance) {
		return instance->get();
	}

	cv::structured_light::SinusoidalPattern::Params* cv_PtrOfSinusoidalPattern_Params_get_inner_ptr_mut(cv::Ptr<cv::structured_light::SinusoidalPattern::Params>* instance) {
		return instance->get();
	}
}

