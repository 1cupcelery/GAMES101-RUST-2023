extern "C" {
	void cv_PtrOfRetina_delete(cv::Ptr<cv::bioinspired::Retina>* instance) {
			delete instance;
	}
	
	const cv::bioinspired::Retina* cv_PtrOfRetina_get_inner_ptr(const cv::Ptr<cv::bioinspired::Retina>* instance) {
		return instance->get();
	}

	cv::bioinspired::Retina* cv_PtrOfRetina_get_inner_ptr_mut(cv::Ptr<cv::bioinspired::Retina>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfRetinaFastToneMapping_delete(cv::Ptr<cv::bioinspired::RetinaFastToneMapping>* instance) {
			delete instance;
	}
	
	const cv::bioinspired::RetinaFastToneMapping* cv_PtrOfRetinaFastToneMapping_get_inner_ptr(const cv::Ptr<cv::bioinspired::RetinaFastToneMapping>* instance) {
		return instance->get();
	}

	cv::bioinspired::RetinaFastToneMapping* cv_PtrOfRetinaFastToneMapping_get_inner_ptr_mut(cv::Ptr<cv::bioinspired::RetinaFastToneMapping>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfTransientAreasSegmentationModule_delete(cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>* instance) {
			delete instance;
	}
	
	const cv::bioinspired::TransientAreasSegmentationModule* cv_PtrOfTransientAreasSegmentationModule_get_inner_ptr(const cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>* instance) {
		return instance->get();
	}

	cv::bioinspired::TransientAreasSegmentationModule* cv_PtrOfTransientAreasSegmentationModule_get_inner_ptr_mut(cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>* instance) {
		return instance->get();
	}
}

