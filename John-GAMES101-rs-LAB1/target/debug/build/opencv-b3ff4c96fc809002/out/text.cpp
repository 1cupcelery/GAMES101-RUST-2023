#include "ocvrs_common.hpp"
#include <opencv2/text.hpp>
#include "text_types.hpp"

extern "C" {
	void cv_text_MSERsToERStats_const__InputArrayR_vectorLvectorLPointGGR_vectorLvectorLERStatGGR(const cv::_InputArray* image, std::vector<std::vector<cv::Point>>* contours, std::vector<std::vector<cv::text::ERStat>>* regions, Result_void* ocvrs_return) {
		try {
			cv::text::MSERsToERStats(*image, *contours, *regions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_computeNMChannels_const__InputArrayR_const__OutputArrayR_int(const cv::_InputArray* _src, const cv::_OutputArray* _channels, int _mode, Result_void* ocvrs_return) {
		try {
			cv::text::computeNMChannels(*_src, *_channels, _mode);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_createERFilterNM1_const_PtrLCallbackGR_int_float_float_float_bool_float(const cv::Ptr<cv::text::ERFilter::Callback>* cb, int thresholdDelta, float minArea, float maxArea, float minProbability, bool nonMaxSuppression, float minProbabilityDiff, Result<cv::Ptr<cv::text::ERFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::ERFilter> ret = cv::text::createERFilterNM1(*cb, thresholdDelta, minArea, maxArea, minProbability, nonMaxSuppression, minProbabilityDiff);
			Ok(new cv::Ptr<cv::text::ERFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::ERFilter>*>, ocvrs_return);
	}
	
	void cv_text_createERFilterNM1_const_StringR_int_float_float_float_bool_float(const char* filename, int thresholdDelta, float minArea, float maxArea, float minProbability, bool nonMaxSuppression, float minProbabilityDiff, Result<cv::Ptr<cv::text::ERFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::ERFilter> ret = cv::text::createERFilterNM1(std::string(filename), thresholdDelta, minArea, maxArea, minProbability, nonMaxSuppression, minProbabilityDiff);
			Ok(new cv::Ptr<cv::text::ERFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::ERFilter>*>, ocvrs_return);
	}
	
	void cv_text_createERFilterNM2_const_PtrLCallbackGR_float(const cv::Ptr<cv::text::ERFilter::Callback>* cb, float minProbability, Result<cv::Ptr<cv::text::ERFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::ERFilter> ret = cv::text::createERFilterNM2(*cb, minProbability);
			Ok(new cv::Ptr<cv::text::ERFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::ERFilter>*>, ocvrs_return);
	}
	
	void cv_text_createERFilterNM2_const_StringR_float(const char* filename, float minProbability, Result<cv::Ptr<cv::text::ERFilter>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::ERFilter> ret = cv::text::createERFilterNM2(std::string(filename), minProbability);
			Ok(new cv::Ptr<cv::text::ERFilter>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::ERFilter>*>, ocvrs_return);
	}
	
	void cv_text_createOCRHMMTransitionsTable_const_StringR_vectorLStringGR(const char* vocabulary, std::vector<cv::String>* lexicon, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::text::createOCRHMMTransitionsTable(std::string(vocabulary), *lexicon);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_text_createOCRHMMTransitionsTable_stringR_vectorLstringGR_const__OutputArrayR(void** vocabulary, std::vector<std::string>* lexicon, const cv::_OutputArray* transition_probabilities_table, Result_void* ocvrs_return) {
		try {
			std::string vocabulary_out;
			cv::text::createOCRHMMTransitionsTable(vocabulary_out, *lexicon, *transition_probabilities_table);
			*vocabulary = ocvrs_create_string(vocabulary_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_detectRegions_const__InputArrayR_const_PtrLERFilterGR_const_PtrLERFilterGR_vectorLRectGR_int_const_StringR_float(const cv::_InputArray* image, const cv::Ptr<cv::text::ERFilter>* er_filter1, const cv::Ptr<cv::text::ERFilter>* er_filter2, std::vector<cv::Rect>* groups_rects, int method, const char* filename, float minProbability, Result_void* ocvrs_return) {
		try {
			cv::text::detectRegions(*image, *er_filter1, *er_filter2, *groups_rects, method, std::string(filename), minProbability);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_detectRegions_const__InputArrayR_const_PtrLERFilterGR_const_PtrLERFilterGR_vectorLvectorLPointGGR(const cv::_InputArray* image, const cv::Ptr<cv::text::ERFilter>* er_filter1, const cv::Ptr<cv::text::ERFilter>* er_filter2, std::vector<std::vector<cv::Point>>* regions, Result_void* ocvrs_return) {
		try {
			cv::text::detectRegions(*image, *er_filter1, *er_filter2, *regions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_detectTextSWT_const__InputArrayR_vectorLRectGR_bool_const__OutputArrayR_const__OutputArrayR(const cv::_InputArray* input, std::vector<cv::Rect>* result, bool dark_on_light, const cv::_OutputArray* draw, const cv::_OutputArray* chainBBs, Result_void* ocvrs_return) {
		try {
			cv::text::detectTextSWT(*input, *result, dark_on_light, *draw, *chainBBs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_erGrouping_const__InputArrayR_const__InputArrayR_vectorLvectorLERStatGGR_vectorLvectorLVec2iGGR_vectorLRectGR_int_const_stringR_float(const cv::_InputArray* img, const cv::_InputArray* channels, std::vector<std::vector<cv::text::ERStat>>* regions, std::vector<std::vector<cv::Vec2i>>* groups, std::vector<cv::Rect>* groups_rects, int method, const char* filename, float minProbablity, Result_void* ocvrs_return) {
		try {
			cv::text::erGrouping(*img, *channels, *regions, *groups, *groups_rects, method, std::string(filename), minProbablity);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_erGrouping_const__InputArrayR_const__InputArrayR_vectorLvectorLPointGG_vectorLRectGR_int_const_StringR_float(const cv::_InputArray* image, const cv::_InputArray* channel, std::vector<std::vector<cv::Point>>* regions, std::vector<cv::Rect>* groups_rects, int method, const char* filename, float minProbablity, Result_void* ocvrs_return) {
		try {
			cv::text::erGrouping(*image, *channel, *regions, *groups_rects, method, std::string(filename), minProbablity);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_loadClassifierNM1_const_StringR(const char* filename, Result<cv::Ptr<cv::text::ERFilter::Callback>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::ERFilter::Callback> ret = cv::text::loadClassifierNM1(std::string(filename));
			Ok(new cv::Ptr<cv::text::ERFilter::Callback>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::ERFilter::Callback>*>, ocvrs_return);
	}
	
	void cv_text_loadClassifierNM2_const_StringR(const char* filename, Result<cv::Ptr<cv::text::ERFilter::Callback>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::ERFilter::Callback> ret = cv::text::loadClassifierNM2(std::string(filename));
			Ok(new cv::Ptr<cv::text::ERFilter::Callback>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::ERFilter::Callback>*>, ocvrs_return);
	}
	
	void cv_text_loadOCRBeamSearchClassifierCNN_const_StringR(const char* filename, Result<cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback> ret = cv::text::loadOCRBeamSearchClassifierCNN(std::string(filename));
			Ok(new cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>*>, ocvrs_return);
	}
	
	void cv_text_loadOCRHMMClassifierCNN_const_StringR(const char* filename, Result<cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback> ret = cv::text::loadOCRHMMClassifierCNN(std::string(filename));
			Ok(new cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>*>, ocvrs_return);
	}
	
	void cv_text_loadOCRHMMClassifierNM_const_StringR(const char* filename, Result<cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback> ret = cv::text::loadOCRHMMClassifierNM(std::string(filename));
			Ok(new cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>*>, ocvrs_return);
	}
	
	void cv_text_loadOCRHMMClassifier_const_StringR_int(const char* filename, int classifier, Result<cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback> ret = cv::text::loadOCRHMMClassifier(std::string(filename), classifier);
			Ok(new cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>*>, ocvrs_return);
	}
	
	void cv_text_BaseOCR_run_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::BaseOCR* instance, cv::Mat* image, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_BaseOCR_run_MatR_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::BaseOCR* instance, cv::Mat* image, cv::Mat* mask, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, *mask, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_run_const__InputArrayR_vectorLERStatGR(cv::text::ERFilter* instance, const cv::_InputArray* image, std::vector<cv::text::ERStat>* regions, Result_void* ocvrs_return) {
		try {
			instance->run(*image, *regions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setCallback_const_PtrLCallbackGR(cv::text::ERFilter* instance, const cv::Ptr<cv::text::ERFilter::Callback>* cb, Result_void* ocvrs_return) {
		try {
			instance->setCallback(*cb);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setThresholdDelta_int(cv::text::ERFilter* instance, int thresholdDelta, Result_void* ocvrs_return) {
		try {
			instance->setThresholdDelta(thresholdDelta);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setMinArea_float(cv::text::ERFilter* instance, float minArea, Result_void* ocvrs_return) {
		try {
			instance->setMinArea(minArea);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setMaxArea_float(cv::text::ERFilter* instance, float maxArea, Result_void* ocvrs_return) {
		try {
			instance->setMaxArea(maxArea);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setMinProbability_float(cv::text::ERFilter* instance, float minProbability, Result_void* ocvrs_return) {
		try {
			instance->setMinProbability(minProbability);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setMinProbabilityDiff_float(cv::text::ERFilter* instance, float minProbabilityDiff, Result_void* ocvrs_return) {
		try {
			instance->setMinProbabilityDiff(minProbabilityDiff);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_setNonMaxSuppression_bool(cv::text::ERFilter* instance, bool nonMaxSuppression, Result_void* ocvrs_return) {
		try {
			instance->setNonMaxSuppression(nonMaxSuppression);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_ERFilter_getNumRejected_const(const cv::text::ERFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getNumRejected();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_text_ERFilter_Callback_eval_const_ERStatR(cv::text::ERFilter::Callback* instance, const cv::text::ERStat* stat, Result<double>* ocvrs_return) {
		try {
			double ret = instance->eval(*stat);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	int cv_text_ERStat_getPropPixel_const(const cv::text::ERStat* instance) {
			int ret = instance->pixel;
			return ret;
	}
	
	void cv_text_ERStat_setPropPixel_int(cv::text::ERStat* instance, int val) {
			instance->pixel = val;
	}
	
	int cv_text_ERStat_getPropLevel_const(const cv::text::ERStat* instance) {
			int ret = instance->level;
			return ret;
	}
	
	void cv_text_ERStat_setPropLevel_int(cv::text::ERStat* instance, int val) {
			instance->level = val;
	}
	
	int cv_text_ERStat_getPropArea_const(const cv::text::ERStat* instance) {
			int ret = instance->area;
			return ret;
	}
	
	void cv_text_ERStat_setPropArea_int(cv::text::ERStat* instance, int val) {
			instance->area = val;
	}
	
	int cv_text_ERStat_getPropPerimeter_const(const cv::text::ERStat* instance) {
			int ret = instance->perimeter;
			return ret;
	}
	
	void cv_text_ERStat_setPropPerimeter_int(cv::text::ERStat* instance, int val) {
			instance->perimeter = val;
	}
	
	int cv_text_ERStat_getPropEuler_const(const cv::text::ERStat* instance) {
			int ret = instance->euler;
			return ret;
	}
	
	void cv_text_ERStat_setPropEuler_int(cv::text::ERStat* instance, int val) {
			instance->euler = val;
	}
	
	void cv_text_ERStat_getPropRect_const(const cv::text::ERStat* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = instance->rect;
			*ocvrs_return = ret;
	}
	
	void cv_text_ERStat_setPropRect_Rect(cv::text::ERStat* instance, cv::Rect* val) {
			instance->rect = *val;
	}
	
	double** cv_text_ERStat_getPropRaw_moments(cv::text::ERStat* instance) {
			double(*ret)[2] = &instance->raw_moments;
			return (double**)ret;
	}
	
	double** cv_text_ERStat_getPropCentral_moments(cv::text::ERStat* instance) {
			double(*ret)[3] = &instance->central_moments;
			return (double**)ret;
	}
	
	float cv_text_ERStat_getPropMed_crossings_const(const cv::text::ERStat* instance) {
			float ret = instance->med_crossings;
			return ret;
	}
	
	void cv_text_ERStat_setPropMed_crossings_float(cv::text::ERStat* instance, float val) {
			instance->med_crossings = val;
	}
	
	float cv_text_ERStat_getPropHole_area_ratio_const(const cv::text::ERStat* instance) {
			float ret = instance->hole_area_ratio;
			return ret;
	}
	
	void cv_text_ERStat_setPropHole_area_ratio_float(cv::text::ERStat* instance, float val) {
			instance->hole_area_ratio = val;
	}
	
	float cv_text_ERStat_getPropConvex_hull_ratio_const(const cv::text::ERStat* instance) {
			float ret = instance->convex_hull_ratio;
			return ret;
	}
	
	void cv_text_ERStat_setPropConvex_hull_ratio_float(cv::text::ERStat* instance, float val) {
			instance->convex_hull_ratio = val;
	}
	
	float cv_text_ERStat_getPropNum_inflexion_points_const(const cv::text::ERStat* instance) {
			float ret = instance->num_inflexion_points;
			return ret;
	}
	
	void cv_text_ERStat_setPropNum_inflexion_points_float(cv::text::ERStat* instance, float val) {
			instance->num_inflexion_points = val;
	}
	
	double cv_text_ERStat_getPropProbability_const(const cv::text::ERStat* instance) {
			double ret = instance->probability;
			return ret;
	}
	
	void cv_text_ERStat_setPropProbability_double(cv::text::ERStat* instance, double val) {
			instance->probability = val;
	}
	
	cv::text::ERStat** cv_text_ERStat_getPropParent(cv::text::ERStat* instance) {
			cv::text::ERStat* ret = instance->parent;
			return new cv::text::ERStat*(ret);
	}
	
	void cv_text_ERStat_setPropParent_ERStatX(cv::text::ERStat* instance, cv::text::ERStat* val) {
			instance->parent = val;
	}
	
	cv::text::ERStat** cv_text_ERStat_getPropChild(cv::text::ERStat* instance) {
			cv::text::ERStat* ret = instance->child;
			return new cv::text::ERStat*(ret);
	}
	
	void cv_text_ERStat_setPropChild_ERStatX(cv::text::ERStat* instance, cv::text::ERStat* val) {
			instance->child = val;
	}
	
	cv::text::ERStat** cv_text_ERStat_getPropNext(cv::text::ERStat* instance) {
			cv::text::ERStat* ret = instance->next;
			return new cv::text::ERStat*(ret);
	}
	
	void cv_text_ERStat_setPropNext_ERStatX(cv::text::ERStat* instance, cv::text::ERStat* val) {
			instance->next = val;
	}
	
	cv::text::ERStat** cv_text_ERStat_getPropPrev(cv::text::ERStat* instance) {
			cv::text::ERStat* ret = instance->prev;
			return new cv::text::ERStat*(ret);
	}
	
	void cv_text_ERStat_setPropPrev_ERStatX(cv::text::ERStat* instance, cv::text::ERStat* val) {
			instance->prev = val;
	}
	
	bool cv_text_ERStat_getPropLocal_maxima_const(const cv::text::ERStat* instance) {
			bool ret = instance->local_maxima;
			return ret;
	}
	
	void cv_text_ERStat_setPropLocal_maxima_bool(cv::text::ERStat* instance, bool val) {
			instance->local_maxima = val;
	}
	
	cv::text::ERStat** cv_text_ERStat_getPropMax_probability_ancestor(cv::text::ERStat* instance) {
			cv::text::ERStat* ret = instance->max_probability_ancestor;
			return new cv::text::ERStat*(ret);
	}
	
	void cv_text_ERStat_setPropMax_probability_ancestor_ERStatX(cv::text::ERStat* instance, cv::text::ERStat* val) {
			instance->max_probability_ancestor = val;
	}
	
	cv::text::ERStat** cv_text_ERStat_getPropMin_probability_ancestor(cv::text::ERStat* instance) {
			cv::text::ERStat* ret = instance->min_probability_ancestor;
			return new cv::text::ERStat*(ret);
	}
	
	void cv_text_ERStat_setPropMin_probability_ancestor_ERStatX(cv::text::ERStat* instance, cv::text::ERStat* val) {
			instance->min_probability_ancestor = val;
	}
	
	void cv_ERStat_delete(cv::text::ERStat* instance) {
			delete instance;
	}
	
	void cv_text_ERStat_ERStat_int_int_int_int(int level, int pixel, int x, int y, Result<cv::text::ERStat*>* ocvrs_return) {
		try {
			cv::text::ERStat* ret = new cv::text::ERStat(level, pixel, x, y);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::text::ERStat*>, ocvrs_return);
	}
	
	void cv_OCRBeamSearchDecoder_delete(cv::text::OCRBeamSearchDecoder* instance) {
			delete instance;
	}
	
	void cv_text_OCRBeamSearchDecoder_run_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRBeamSearchDecoder* instance, cv::Mat* image, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_run_MatR_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRBeamSearchDecoder* instance, cv::Mat* image, cv::Mat* mask, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, *mask, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_run_const__InputArrayR_int_int(cv::text::OCRBeamSearchDecoder* instance, const cv::_InputArray* image, int min_confidence, int component_level, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->run(*image, min_confidence, component_level);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_run_const__InputArrayR_const__InputArrayR_int_int(cv::text::OCRBeamSearchDecoder* instance, const cv::_InputArray* image, const cv::_InputArray* mask, int min_confidence, int component_level, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->run(*image, *mask, min_confidence, component_level);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_create_const_PtrLClassifierCallbackG_const_stringR_const__InputArrayR_const__InputArrayR_decoder_mode_int(const cv::Ptr<cv::text::OCRBeamSearchDecoder::ClassifierCallback>* classifier, const char* vocabulary, const cv::_InputArray* transition_probabilities_table, const cv::_InputArray* emission_probabilities_table, cv::text::decoder_mode mode, int beam_size, Result<cv::Ptr<cv::text::OCRBeamSearchDecoder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRBeamSearchDecoder> ret = cv::text::OCRBeamSearchDecoder::create(*classifier, std::string(vocabulary), *transition_probabilities_table, *emission_probabilities_table, mode, beam_size);
			Ok(new cv::Ptr<cv::text::OCRBeamSearchDecoder>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRBeamSearchDecoder>*>, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_create_const_StringR_const_StringR_const__InputArrayR_const__InputArrayR_decoder_mode_int(const char* filename, const char* vocabulary, const cv::_InputArray* transition_probabilities_table, const cv::_InputArray* emission_probabilities_table, cv::text::decoder_mode mode, int beam_size, Result<cv::Ptr<cv::text::OCRBeamSearchDecoder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRBeamSearchDecoder> ret = cv::text::OCRBeamSearchDecoder::create(std::string(filename), std::string(vocabulary), *transition_probabilities_table, *emission_probabilities_table, mode, beam_size);
			Ok(new cv::Ptr<cv::text::OCRBeamSearchDecoder>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRBeamSearchDecoder>*>, ocvrs_return);
	}
	
	void cv_OCRBeamSearchDecoder_ClassifierCallback_delete(cv::text::OCRBeamSearchDecoder::ClassifierCallback* instance) {
			delete instance;
	}
	
	void cv_text_OCRBeamSearchDecoder_ClassifierCallback_eval_const__InputArrayR_vectorLvectorLdoubleGGR_vectorLintGR(cv::text::OCRBeamSearchDecoder::ClassifierCallback* instance, const cv::_InputArray* image, std::vector<std::vector<double>>* recognition_probabilities, std::vector<int>* oversegmentation, Result_void* ocvrs_return) {
		try {
			instance->eval(*image, *recognition_probabilities, *oversegmentation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_ClassifierCallback_getWindowSize(cv::text::OCRBeamSearchDecoder::ClassifierCallback* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_text_OCRBeamSearchDecoder_ClassifierCallback_getStepSize(cv::text::OCRBeamSearchDecoder::ClassifierCallback* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getStepSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_OCRHMMDecoder_delete(cv::text::OCRHMMDecoder* instance) {
			delete instance;
	}
	
	void cv_text_OCRHMMDecoder_run_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRHMMDecoder* instance, cv::Mat* image, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRHMMDecoder_run_MatR_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRHMMDecoder* instance, cv::Mat* image, cv::Mat* mask, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, *mask, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRHMMDecoder_run_const__InputArrayR_int_int(cv::text::OCRHMMDecoder* instance, const cv::_InputArray* image, int min_confidence, int component_level, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->run(*image, min_confidence, component_level);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_text_OCRHMMDecoder_run_const__InputArrayR_const__InputArrayR_int_int(cv::text::OCRHMMDecoder* instance, const cv::_InputArray* image, const cv::_InputArray* mask, int min_confidence, int component_level, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->run(*image, *mask, min_confidence, component_level);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_text_OCRHMMDecoder_create_const_PtrLClassifierCallbackG_const_StringR_const__InputArrayR_const__InputArrayR_int(const cv::Ptr<cv::text::OCRHMMDecoder::ClassifierCallback>* classifier, const char* vocabulary, const cv::_InputArray* transition_probabilities_table, const cv::_InputArray* emission_probabilities_table, int mode, Result<cv::Ptr<cv::text::OCRHMMDecoder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRHMMDecoder> ret = cv::text::OCRHMMDecoder::create(*classifier, std::string(vocabulary), *transition_probabilities_table, *emission_probabilities_table, mode);
			Ok(new cv::Ptr<cv::text::OCRHMMDecoder>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRHMMDecoder>*>, ocvrs_return);
	}
	
	void cv_text_OCRHMMDecoder_create_const_StringR_const_StringR_const__InputArrayR_const__InputArrayR_int_int(const char* filename, const char* vocabulary, const cv::_InputArray* transition_probabilities_table, const cv::_InputArray* emission_probabilities_table, int mode, int classifier, Result<cv::Ptr<cv::text::OCRHMMDecoder>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRHMMDecoder> ret = cv::text::OCRHMMDecoder::create(std::string(filename), std::string(vocabulary), *transition_probabilities_table, *emission_probabilities_table, mode, classifier);
			Ok(new cv::Ptr<cv::text::OCRHMMDecoder>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRHMMDecoder>*>, ocvrs_return);
	}
	
	void cv_OCRHMMDecoder_ClassifierCallback_delete(cv::text::OCRHMMDecoder::ClassifierCallback* instance) {
			delete instance;
	}
	
	void cv_text_OCRHMMDecoder_ClassifierCallback_eval_const__InputArrayR_vectorLintGR_vectorLdoubleGR(cv::text::OCRHMMDecoder::ClassifierCallback* instance, const cv::_InputArray* image, std::vector<int>* out_class, std::vector<double>* out_confidence, Result_void* ocvrs_return) {
		try {
			instance->eval(*image, *out_class, *out_confidence);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRHolisticWordRecognizer_run_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRHolisticWordRecognizer* instance, cv::Mat* image, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRHolisticWordRecognizer_run_MatR_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRHolisticWordRecognizer* instance, cv::Mat* image, cv::Mat* mask, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, *mask, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRHolisticWordRecognizer_create_const_stringR_const_stringR_const_stringR(const char* archFilename, const char* weightsFilename, const char* wordsFilename, Result<cv::Ptr<cv::text::OCRHolisticWordRecognizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRHolisticWordRecognizer> ret = cv::text::OCRHolisticWordRecognizer::create(std::string(archFilename), std::string(weightsFilename), std::string(wordsFilename));
			Ok(new cv::Ptr<cv::text::OCRHolisticWordRecognizer>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRHolisticWordRecognizer>*>, ocvrs_return);
	}
	
	void cv_text_OCRTesseract_run_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRTesseract* instance, cv::Mat* image, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRTesseract_run_MatR_MatR_stringR_vectorLRectGX_vectorLstringGX_vectorLfloatGX_int(cv::text::OCRTesseract* instance, cv::Mat* image, cv::Mat* mask, void** output_text, std::vector<cv::Rect>* component_rects, std::vector<std::string>* component_texts, std::vector<float>* component_confidences, int component_level, Result_void* ocvrs_return) {
		try {
			std::string output_text_out;
			instance->run(*image, *mask, output_text_out, component_rects, component_texts, component_confidences, component_level);
			*output_text = ocvrs_create_string(output_text_out.c_str());
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRTesseract_run_const__InputArrayR_int_int(cv::text::OCRTesseract* instance, const cv::_InputArray* image, int min_confidence, int component_level, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->run(*image, min_confidence, component_level);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_text_OCRTesseract_run_const__InputArrayR_const__InputArrayR_int_int(cv::text::OCRTesseract* instance, const cv::_InputArray* image, const cv::_InputArray* mask, int min_confidence, int component_level, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->run(*image, *mask, min_confidence, component_level);
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_text_OCRTesseract_setWhiteList_const_StringR(cv::text::OCRTesseract* instance, const char* char_whitelist, Result_void* ocvrs_return) {
		try {
			instance->setWhiteList(std::string(char_whitelist));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_OCRTesseract_create_const_charX_const_charX_const_charX_int_int(const char* datapath, const char* language, const char* char_whitelist, int oem, int psmode, Result<cv::Ptr<cv::text::OCRTesseract>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::OCRTesseract> ret = cv::text::OCRTesseract::create(datapath, language, char_whitelist, oem, psmode);
			Ok(new cv::Ptr<cv::text::OCRTesseract>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::OCRTesseract>*>, ocvrs_return);
	}
	
	void cv_text_TextDetector_detect_const__InputArrayR_vectorLRectGR_vectorLfloatGR(cv::text::TextDetector* instance, const cv::_InputArray* inputImage, std::vector<cv::Rect>* Bbox, std::vector<float>* confidence, Result_void* ocvrs_return) {
		try {
			instance->detect(*inputImage, *Bbox, *confidence);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_TextDetectorCNN_detect_const__InputArrayR_vectorLRectGR_vectorLfloatGR(cv::text::TextDetectorCNN* instance, const cv::_InputArray* inputImage, std::vector<cv::Rect>* Bbox, std::vector<float>* confidence, Result_void* ocvrs_return) {
		try {
			instance->detect(*inputImage, *Bbox, *confidence);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_text_TextDetectorCNN_create_const_StringR_const_StringR_vectorLSizeG(const char* modelArchFilename, const char* modelWeightsFilename, std::vector<cv::Size>* detectionSizes, Result<cv::Ptr<cv::text::TextDetectorCNN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::TextDetectorCNN> ret = cv::text::TextDetectorCNN::create(std::string(modelArchFilename), std::string(modelWeightsFilename), *detectionSizes);
			Ok(new cv::Ptr<cv::text::TextDetectorCNN>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::TextDetectorCNN>*>, ocvrs_return);
	}
	
	void cv_text_TextDetectorCNN_create_const_StringR_const_StringR(const char* modelArchFilename, const char* modelWeightsFilename, Result<cv::Ptr<cv::text::TextDetectorCNN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::text::TextDetectorCNN> ret = cv::text::TextDetectorCNN::create(std::string(modelArchFilename), std::string(modelWeightsFilename));
			Ok(new cv::Ptr<cv::text::TextDetectorCNN>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::text::TextDetectorCNN>*>, ocvrs_return);
	}
	
}
