#include "ocvrs_common.hpp"
#include <opencv2/tracking.hpp>
#include "tracking_types.hpp"

extern "C" {
	void cv_tracking_TrackerCSRT_create_const_ParamsR(const cv::tracking::TrackerCSRT::Params* parameters, Result<cv::Ptr<cv::tracking::TrackerCSRT>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::tracking::TrackerCSRT> ret = cv::tracking::TrackerCSRT::create(*parameters);
			Ok(new cv::Ptr<cv::tracking::TrackerCSRT>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::tracking::TrackerCSRT>*>, ocvrs_return);
	}
	
	void cv_tracking_TrackerCSRT_setInitialMask_const__InputArrayR(cv::tracking::TrackerCSRT* instance, const cv::_InputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->setInitialMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	bool cv_tracking_TrackerCSRT_Params_getPropUse_hog_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_hog;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropUse_hog_bool(cv::tracking::TrackerCSRT::Params* instance, bool val) {
			instance->use_hog = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_getPropUse_color_names_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_color_names;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropUse_color_names_bool(cv::tracking::TrackerCSRT::Params* instance, bool val) {
			instance->use_color_names = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_getPropUse_gray_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_gray;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropUse_gray_bool(cv::tracking::TrackerCSRT::Params* instance, bool val) {
			instance->use_gray = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_getPropUse_rgb_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_rgb;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropUse_rgb_bool(cv::tracking::TrackerCSRT::Params* instance, bool val) {
			instance->use_rgb = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_getPropUse_channel_weights_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_channel_weights;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropUse_channel_weights_bool(cv::tracking::TrackerCSRT::Params* instance, bool val) {
			instance->use_channel_weights = val;
	}
	
	bool cv_tracking_TrackerCSRT_Params_getPropUse_segmentation_const(const cv::tracking::TrackerCSRT::Params* instance) {
			bool ret = instance->use_segmentation;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropUse_segmentation_bool(cv::tracking::TrackerCSRT::Params* instance, bool val) {
			instance->use_segmentation = val;
	}
	
	void* cv_tracking_TrackerCSRT_Params_getPropWindow_function_const(const cv::tracking::TrackerCSRT::Params* instance) {
			std::string ret = instance->window_function;
			return ocvrs_create_string(ret.c_str());
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropWindow_function_string(cv::tracking::TrackerCSRT::Params* instance, char* val) {
			instance->window_function = std::string(val);
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropKaiser_alpha_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->kaiser_alpha;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropKaiser_alpha_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->kaiser_alpha = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropCheb_attenuation_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->cheb_attenuation;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropCheb_attenuation_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->cheb_attenuation = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropTemplate_size_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->template_size;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropTemplate_size_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->template_size = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropGsl_sigma_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->gsl_sigma;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropGsl_sigma_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->gsl_sigma = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropHog_orientations_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->hog_orientations;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropHog_orientations_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->hog_orientations = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropHog_clip_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->hog_clip;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropHog_clip_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->hog_clip = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropPadding_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->padding;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropPadding_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->padding = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropFilter_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->filter_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropFilter_lr_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->filter_lr = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropWeights_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->weights_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropWeights_lr_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->weights_lr = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_getPropNum_hog_channels_used_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->num_hog_channels_used;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropNum_hog_channels_used_int(cv::tracking::TrackerCSRT::Params* instance, int val) {
			instance->num_hog_channels_used = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_getPropAdmm_iterations_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->admm_iterations;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropAdmm_iterations_int(cv::tracking::TrackerCSRT::Params* instance, int val) {
			instance->admm_iterations = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_getPropHistogram_bins_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->histogram_bins;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropHistogram_bins_int(cv::tracking::TrackerCSRT::Params* instance, int val) {
			instance->histogram_bins = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropHistogram_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->histogram_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropHistogram_lr_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->histogram_lr = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_getPropBackground_ratio_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->background_ratio;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropBackground_ratio_int(cv::tracking::TrackerCSRT::Params* instance, int val) {
			instance->background_ratio = val;
	}
	
	int cv_tracking_TrackerCSRT_Params_getPropNumber_of_scales_const(const cv::tracking::TrackerCSRT::Params* instance) {
			int ret = instance->number_of_scales;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropNumber_of_scales_int(cv::tracking::TrackerCSRT::Params* instance, int val) {
			instance->number_of_scales = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropScale_sigma_factor_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_sigma_factor;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropScale_sigma_factor_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->scale_sigma_factor = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropScale_model_max_area_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_model_max_area;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropScale_model_max_area_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->scale_model_max_area = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropScale_lr_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_lr;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropScale_lr_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->scale_lr = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropScale_step_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->scale_step;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropScale_step_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->scale_step = val;
	}
	
	float cv_tracking_TrackerCSRT_Params_getPropPsr_threshold_const(const cv::tracking::TrackerCSRT::Params* instance) {
			float ret = instance->psr_threshold;
			return ret;
	}
	
	void cv_tracking_TrackerCSRT_Params_setPropPsr_threshold_float(cv::tracking::TrackerCSRT::Params* instance, float val) {
			instance->psr_threshold = val;
	}
	
	void cv_TrackerCSRT_Params_delete(cv::tracking::TrackerCSRT::Params* instance) {
			delete instance;
	}
	
	void cv_tracking_TrackerCSRT_Params_Params(Result<cv::tracking::TrackerCSRT::Params*>* ocvrs_return) {
		try {
			cv::tracking::TrackerCSRT::Params* ret = new cv::tracking::TrackerCSRT::Params();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::tracking::TrackerCSRT::Params*>, ocvrs_return);
	}
	
	void cv_tracking_TrackerKCF_create_const_ParamsR(const cv::tracking::TrackerKCF::Params* parameters, Result<cv::Ptr<cv::tracking::TrackerKCF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::tracking::TrackerKCF> ret = cv::tracking::TrackerKCF::create(*parameters);
			Ok(new cv::Ptr<cv::tracking::TrackerKCF>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::tracking::TrackerKCF>*>, ocvrs_return);
	}
	
	void cv_tracking_TrackerKCF_setFeatureExtractor_FeatureExtractorCallbackFN_bool(cv::tracking::TrackerKCF* instance, cv::tracking::TrackerKCF::FeatureExtractorCallbackFN callback, bool pca_func, Result_void* ocvrs_return) {
		try {
			instance->setFeatureExtractor(callback, pca_func);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_tracking_TrackerKCF_Params_Params(Result<cv::tracking::TrackerKCF::Params>* ocvrs_return) {
		try {
			cv::tracking::TrackerKCF::Params ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::tracking::TrackerKCF::Params>, ocvrs_return);
	}
	
}
