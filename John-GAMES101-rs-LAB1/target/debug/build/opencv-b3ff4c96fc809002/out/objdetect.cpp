#include "ocvrs_common.hpp"
#include <opencv2/objdetect.hpp>
#include "objdetect_types.hpp"

extern "C" {
	void cv_createFaceDetectionMaskGenerator(Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = cv::createFaceDetectionMaskGenerator();
			Ok(new cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>, ocvrs_return);
	}
	
	void cv_groupRectangles_meanshift_vectorLRectGR_vectorLdoubleGR_vectorLdoubleGR_double_Size(std::vector<cv::Rect>* rectList, std::vector<double>* foundWeights, std::vector<double>* foundScales, double detectThreshold, cv::Size* winDetSize, Result_void* ocvrs_return) {
		try {
			cv::groupRectangles_meanshift(*rectList, *foundWeights, *foundScales, detectThreshold, *winDetSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_int_double(std::vector<cv::Rect>* rectList, int groupThreshold, double eps, Result_void* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_int_double_vectorLintGX_vectorLdoubleGX(std::vector<cv::Rect>* rectList, int groupThreshold, double eps, std::vector<int>* weights, std::vector<double>* levelWeights, Result_void* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, groupThreshold, eps, weights, levelWeights);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_vectorLintGR_int_double(std::vector<cv::Rect>* rectList, std::vector<int>* weights, int groupThreshold, double eps, Result_void* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, *weights, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_groupRectangles_vectorLRectGR_vectorLintGR_vectorLdoubleGR_int_double(std::vector<cv::Rect>* rectList, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, int groupThreshold, double eps, Result_void* ocvrs_return) {
		try {
			cv::groupRectangles(*rectList, *rejectLevels, *levelWeights, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_empty_const(const cv::BaseCascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_load_const_StringR(cv::BaseCascadeClassifier* instance, const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_double_int_int_Size_Size(cv::BaseCascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_double_int_int_Size_Size(cv::BaseCascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* numDetections, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *numDetections, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_vectorLdoubleGR_double_int_int_Size_Size_bool(cv::BaseCascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, bool outputRejectLevels, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *rejectLevels, *levelWeights, scaleFactor, minNeighbors, flags, *minSize, *maxSize, outputRejectLevels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_isOldFormatCascade_const(const cv::BaseCascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOldFormatCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getOriginalWindowSize_const(const cv::BaseCascadeClassifier* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getOriginalWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getFeatureType_const(const cv::BaseCascadeClassifier* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFeatureType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getOldCascade(cv::BaseCascadeClassifier* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->getOldCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_setMaskGenerator_const_PtrLMaskGeneratorGR(cv::BaseCascadeClassifier* instance, const cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* maskGenerator, Result_void* ocvrs_return) {
		try {
			instance->setMaskGenerator(*maskGenerator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_getMaskGenerator(cv::BaseCascadeClassifier* instance, Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = instance->getMaskGenerator();
			Ok(new cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_MaskGenerator_generateMask_const_MatR(cv::BaseCascadeClassifier::MaskGenerator* instance, const cv::Mat* src, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->generateMask(*src);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_BaseCascadeClassifier_MaskGenerator_initializeMask_const_MatR(cv::BaseCascadeClassifier::MaskGenerator* instance, const cv::Mat* unnamed, Result_void* ocvrs_return) {
		try {
			instance->initializeMask(*unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	cv::Ptr<cv::BaseCascadeClassifier>* cv_CascadeClassifier_getPropCc(cv::CascadeClassifier* instance) {
			cv::Ptr<cv::BaseCascadeClassifier> ret = instance->cc;
			return new cv::Ptr<cv::BaseCascadeClassifier>(ret);
	}
	
	void cv_CascadeClassifier_setPropCc_PtrLBaseCascadeClassifierG(cv::CascadeClassifier* instance, cv::Ptr<cv::BaseCascadeClassifier>* val) {
			instance->cc = *val;
	}
	
	void cv_CascadeClassifier_delete(cv::CascadeClassifier* instance) {
			delete instance;
	}
	
	void cv_CascadeClassifier_CascadeClassifier(Result<cv::CascadeClassifier*>* ocvrs_return) {
		try {
			cv::CascadeClassifier* ret = new cv::CascadeClassifier();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::CascadeClassifier*>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_CascadeClassifier_const_StringR(const char* filename, Result<cv::CascadeClassifier*>* ocvrs_return) {
		try {
			cv::CascadeClassifier* ret = new cv::CascadeClassifier(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::CascadeClassifier*>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_empty_const(const cv::CascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_load_const_StringR(cv::CascadeClassifier* instance, const char* filename, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_read_const_FileNodeR(cv::CascadeClassifier* instance, const cv::FileNode* node, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->read(*node);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_double_int_int_Size_Size(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_double_int_int_Size_Size(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* numDetections, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *numDetections, scaleFactor, minNeighbors, flags, *minSize, *maxSize);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_CascadeClassifier_detectMultiScale_const__InputArrayR_vectorLRectGR_vectorLintGR_vectorLdoubleGR_double_int_int_Size_Size_bool(cv::CascadeClassifier* instance, const cv::_InputArray* image, std::vector<cv::Rect>* objects, std::vector<int>* rejectLevels, std::vector<double>* levelWeights, double scaleFactor, int minNeighbors, int flags, cv::Size* minSize, cv::Size* maxSize, bool outputRejectLevels, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*image, *objects, *rejectLevels, *levelWeights, scaleFactor, minNeighbors, flags, *minSize, *maxSize, outputRejectLevels);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_CascadeClassifier_isOldFormatCascade_const(const cv::CascadeClassifier* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->isOldFormatCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_getOriginalWindowSize_const(const cv::CascadeClassifier* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getOriginalWindowSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_getFeatureType_const(const cv::CascadeClassifier* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getFeatureType();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_getOldCascade(cv::CascadeClassifier* instance, Result<void*>* ocvrs_return) {
		try {
			void* ret = instance->getOldCascade();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_convert_const_StringR_const_StringR(const char* oldcascade, const char* newcascade, Result<bool>* ocvrs_return) {
		try {
			bool ret = cv::CascadeClassifier::convert(std::string(oldcascade), std::string(newcascade));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_CascadeClassifier_setMaskGenerator_const_PtrLMaskGeneratorGR(cv::CascadeClassifier* instance, const cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>* maskGenerator, Result_void* ocvrs_return) {
		try {
			instance->setMaskGenerator(*maskGenerator);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_CascadeClassifier_getMaskGenerator(cv::CascadeClassifier* instance, Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator> ret = instance->getMaskGenerator();
			Ok(new cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::BaseCascadeClassifier::MaskGenerator>*>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_delete(cv::DetectionBasedTracker* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_DetectionBasedTracker_PtrLIDetectorG_PtrLIDetectorG_const_ParametersR(cv::Ptr<cv::DetectionBasedTracker::IDetector>* mainDetector, cv::Ptr<cv::DetectionBasedTracker::IDetector>* trackingDetector, const cv::DetectionBasedTracker::Parameters* params, Result<cv::DetectionBasedTracker*>* ocvrs_return) {
		try {
			cv::DetectionBasedTracker* ret = new cv::DetectionBasedTracker(*mainDetector, *trackingDetector, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::DetectionBasedTracker*>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_run(cv::DetectionBasedTracker* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->run();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_stop(cv::DetectionBasedTracker* instance, Result_void* ocvrs_return) {
		try {
			instance->stop();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_resetTracking(cv::DetectionBasedTracker* instance, Result_void* ocvrs_return) {
		try {
			instance->resetTracking();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_process_const_MatR(cv::DetectionBasedTracker* instance, const cv::Mat* imageGray, Result_void* ocvrs_return) {
		try {
			instance->process(*imageGray);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_setParameters_const_ParametersR(cv::DetectionBasedTracker* instance, const cv::DetectionBasedTracker::Parameters* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setParameters(*params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getParameters_const(const cv::DetectionBasedTracker* instance, Result<cv::DetectionBasedTracker::Parameters*>* ocvrs_return) {
		try {
			const cv::DetectionBasedTracker::Parameters ret = instance->getParameters();
			Ok(new const cv::DetectionBasedTracker::Parameters(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::DetectionBasedTracker::Parameters*>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getObjects_const_vectorLRectGR(const cv::DetectionBasedTracker* instance, std::vector<cv::Rect>* result, Result_void* ocvrs_return) {
		try {
			instance->getObjects(*result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getObjects_const_vectorLObjectGR(const cv::DetectionBasedTracker* instance, std::vector<cv::DetectionBasedTracker::Object>* result, Result_void* ocvrs_return) {
		try {
			instance->getObjects(*result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_getObjects_const_vectorLExtObjectGR(const cv::DetectionBasedTracker* instance, std::vector<cv::DetectionBasedTracker::ExtObject>* result, Result_void* ocvrs_return) {
		try {
			instance->getObjects(*result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_addObject_const_RectR(cv::DetectionBasedTracker* instance, const cv::Rect* location, Result<int>* ocvrs_return) {
		try {
			int ret = instance->addObject(*location);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	int cv_DetectionBasedTracker_ExtObject_getPropId_const(const cv::DetectionBasedTracker::ExtObject* instance) {
			int ret = instance->id;
			return ret;
	}
	
	void cv_DetectionBasedTracker_ExtObject_setPropId_int(cv::DetectionBasedTracker::ExtObject* instance, int val) {
			instance->id = val;
	}
	
	void cv_DetectionBasedTracker_ExtObject_getPropLocation_const(const cv::DetectionBasedTracker::ExtObject* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = instance->location;
			*ocvrs_return = ret;
	}
	
	void cv_DetectionBasedTracker_ExtObject_setPropLocation_Rect(cv::DetectionBasedTracker::ExtObject* instance, cv::Rect* val) {
			instance->location = *val;
	}
	
	void cv_DetectionBasedTracker_ExtObject_getPropStatus_const(const cv::DetectionBasedTracker::ExtObject* instance, cv::DetectionBasedTracker::ObjectStatus* ocvrs_return) {
			cv::DetectionBasedTracker::ObjectStatus ret = instance->status;
			*ocvrs_return = ret;
	}
	
	void cv_DetectionBasedTracker_ExtObject_setPropStatus_ObjectStatus(cv::DetectionBasedTracker::ExtObject* instance, cv::DetectionBasedTracker::ObjectStatus val) {
			instance->status = val;
	}
	
	void cv_DetectionBasedTracker_ExtObject_delete(cv::DetectionBasedTracker::ExtObject* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_ExtObject_ExtObject_int_Rect_ObjectStatus(int _id, cv::Rect* _location, cv::DetectionBasedTracker::ObjectStatus _status, Result<cv::DetectionBasedTracker::ExtObject*>* ocvrs_return) {
		try {
			cv::DetectionBasedTracker::ExtObject* ret = new cv::DetectionBasedTracker::ExtObject(_id, *_location, _status);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::DetectionBasedTracker::ExtObject*>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_detect_const_MatR_vectorLRectGR(cv::DetectionBasedTracker::IDetector* instance, const cv::Mat* image, std::vector<cv::Rect>* objects, Result_void* ocvrs_return) {
		try {
			instance->detect(*image, *objects);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setMinObjectSize_const_SizeR(cv::DetectionBasedTracker::IDetector* instance, const cv::Size* min, Result_void* ocvrs_return) {
		try {
			instance->setMinObjectSize(*min);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setMaxObjectSize_const_SizeR(cv::DetectionBasedTracker::IDetector* instance, const cv::Size* max, Result_void* ocvrs_return) {
		try {
			instance->setMaxObjectSize(*max);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getMinObjectSize_const(const cv::DetectionBasedTracker::IDetector* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getMinObjectSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getMaxObjectSize_const(const cv::DetectionBasedTracker::IDetector* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getMaxObjectSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getScaleFactor(cv::DetectionBasedTracker::IDetector* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScaleFactor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setScaleFactor_float(cv::DetectionBasedTracker::IDetector* instance, float value, Result_void* ocvrs_return) {
		try {
			instance->setScaleFactor(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_getMinNeighbours(cv::DetectionBasedTracker::IDetector* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getMinNeighbours();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_DetectionBasedTracker_IDetector_setMinNeighbours_int(cv::DetectionBasedTracker::IDetector* instance, int value, Result_void* ocvrs_return) {
		try {
			instance->setMinNeighbours(value);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	int cv_DetectionBasedTracker_Parameters_getPropMaxTrackLifetime_const(const cv::DetectionBasedTracker::Parameters* instance) {
			int ret = instance->maxTrackLifetime;
			return ret;
	}
	
	void cv_DetectionBasedTracker_Parameters_setPropMaxTrackLifetime_int(cv::DetectionBasedTracker::Parameters* instance, int val) {
			instance->maxTrackLifetime = val;
	}
	
	int cv_DetectionBasedTracker_Parameters_getPropMinDetectionPeriod_const(const cv::DetectionBasedTracker::Parameters* instance) {
			int ret = instance->minDetectionPeriod;
			return ret;
	}
	
	void cv_DetectionBasedTracker_Parameters_setPropMinDetectionPeriod_int(cv::DetectionBasedTracker::Parameters* instance, int val) {
			instance->minDetectionPeriod = val;
	}
	
	void cv_DetectionBasedTracker_Parameters_delete(cv::DetectionBasedTracker::Parameters* instance) {
			delete instance;
	}
	
	void cv_DetectionBasedTracker_Parameters_Parameters(Result<cv::DetectionBasedTracker::Parameters*>* ocvrs_return) {
		try {
			cv::DetectionBasedTracker::Parameters* ret = new cv::DetectionBasedTracker::Parameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::DetectionBasedTracker::Parameters*>, ocvrs_return);
	}
	
	double cv_DetectionROI_getPropScale_const(const cv::DetectionROI* instance) {
			double ret = instance->scale;
			return ret;
	}
	
	void cv_DetectionROI_setPropScale_double(cv::DetectionROI* instance, double val) {
			instance->scale = val;
	}
	
	std::vector<cv::Point>* cv_DetectionROI_getPropLocations_const(const cv::DetectionROI* instance) {
			std::vector<cv::Point> ret = instance->locations;
			return new std::vector<cv::Point>(ret);
	}
	
	void cv_DetectionROI_setPropLocations_vectorLPointG(cv::DetectionROI* instance, std::vector<cv::Point>* val) {
			instance->locations = *val;
	}
	
	std::vector<double>* cv_DetectionROI_getPropConfidences_const(const cv::DetectionROI* instance) {
			std::vector<double> ret = instance->confidences;
			return new std::vector<double>(ret);
	}
	
	void cv_DetectionROI_setPropConfidences_vectorLdoubleG(cv::DetectionROI* instance, std::vector<double>* val) {
			instance->confidences = *val;
	}
	
	void cv_DetectionROI_delete(cv::DetectionROI* instance) {
			delete instance;
	}
	
	void cv_FaceDetectorYN_setInputSize_const_SizeR(cv::FaceDetectorYN* instance, const cv::Size* input_size, Result_void* ocvrs_return) {
		try {
			instance->setInputSize(*input_size);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getInputSize(cv::FaceDetectorYN* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getInputSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_setScoreThreshold_float(cv::FaceDetectorYN* instance, float score_threshold, Result_void* ocvrs_return) {
		try {
			instance->setScoreThreshold(score_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getScoreThreshold(cv::FaceDetectorYN* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getScoreThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_setNMSThreshold_float(cv::FaceDetectorYN* instance, float nms_threshold, Result_void* ocvrs_return) {
		try {
			instance->setNMSThreshold(nms_threshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getNMSThreshold(cv::FaceDetectorYN* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getNMSThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_setTopK_int(cv::FaceDetectorYN* instance, int top_k, Result_void* ocvrs_return) {
		try {
			instance->setTopK(top_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_getTopK(cv::FaceDetectorYN* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->getTopK();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_detect_const__InputArrayR_const__OutputArrayR(cv::FaceDetectorYN* instance, const cv::_InputArray* image, const cv::_OutputArray* faces, Result<int>* ocvrs_return) {
		try {
			int ret = instance->detect(*image, *faces);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_FaceDetectorYN_create_const_StringR_const_StringR_const_SizeR_float_float_int_int_int(const char* model, const char* config, const cv::Size* input_size, float score_threshold, float nms_threshold, int top_k, int backend_id, int target_id, Result<cv::Ptr<cv::FaceDetectorYN>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceDetectorYN> ret = cv::FaceDetectorYN::create(std::string(model), std::string(config), *input_size, score_threshold, nms_threshold, top_k, backend_id, target_id);
			Ok(new cv::Ptr<cv::FaceDetectorYN>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::FaceDetectorYN>*>, ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_alignCrop_const_const__InputArrayR_const__InputArrayR_const__OutputArrayR(const cv::FaceRecognizerSF* instance, const cv::_InputArray* src_img, const cv::_InputArray* face_box, const cv::_OutputArray* aligned_img, Result_void* ocvrs_return) {
		try {
			instance->alignCrop(*src_img, *face_box, *aligned_img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_feature_const__InputArrayR_const__OutputArrayR(cv::FaceRecognizerSF* instance, const cv::_InputArray* aligned_img, const cv::_OutputArray* face_feature, Result_void* ocvrs_return) {
		try {
			instance->feature(*aligned_img, *face_feature);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_match_const_const__InputArrayR_const__InputArrayR_int(const cv::FaceRecognizerSF* instance, const cv::_InputArray* _face_feature1, const cv::_InputArray* _face_feature2, int dis_type, Result<double>* ocvrs_return) {
		try {
			double ret = instance->match(*_face_feature1, *_face_feature2, dis_type);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	void cv_FaceRecognizerSF_create_const_StringR_const_StringR_int_int(const char* model, const char* config, int backend_id, int target_id, Result<cv::Ptr<cv::FaceRecognizerSF>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::FaceRecognizerSF> ret = cv::FaceRecognizerSF::create(std::string(model), std::string(config), backend_id, target_id);
			Ok(new cv::Ptr<cv::FaceRecognizerSF>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::FaceRecognizerSF>*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_getPropWinSize_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->winSize;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_setPropWinSize_Size(cv::HOGDescriptor* instance, cv::Size* val) {
			instance->winSize = *val;
	}
	
	void cv_HOGDescriptor_getPropBlockSize_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->blockSize;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_setPropBlockSize_Size(cv::HOGDescriptor* instance, cv::Size* val) {
			instance->blockSize = *val;
	}
	
	void cv_HOGDescriptor_getPropBlockStride_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->blockStride;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_setPropBlockStride_Size(cv::HOGDescriptor* instance, cv::Size* val) {
			instance->blockStride = *val;
	}
	
	void cv_HOGDescriptor_getPropCellSize_const(const cv::HOGDescriptor* instance, cv::Size* ocvrs_return) {
			cv::Size ret = instance->cellSize;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_setPropCellSize_Size(cv::HOGDescriptor* instance, cv::Size* val) {
			instance->cellSize = *val;
	}
	
	int cv_HOGDescriptor_getPropNbins_const(const cv::HOGDescriptor* instance) {
			int ret = instance->nbins;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropNbins_int(cv::HOGDescriptor* instance, int val) {
			instance->nbins = val;
	}
	
	int cv_HOGDescriptor_getPropDerivAperture_const(const cv::HOGDescriptor* instance) {
			int ret = instance->derivAperture;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropDerivAperture_int(cv::HOGDescriptor* instance, int val) {
			instance->derivAperture = val;
	}
	
	double cv_HOGDescriptor_getPropWinSigma_const(const cv::HOGDescriptor* instance) {
			double ret = instance->winSigma;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropWinSigma_double(cv::HOGDescriptor* instance, double val) {
			instance->winSigma = val;
	}
	
	void cv_HOGDescriptor_getPropHistogramNormType_const(const cv::HOGDescriptor* instance, cv::HOGDescriptor::HistogramNormType* ocvrs_return) {
			cv::HOGDescriptor::HistogramNormType ret = instance->histogramNormType;
			*ocvrs_return = ret;
	}
	
	void cv_HOGDescriptor_setPropHistogramNormType_HistogramNormType(cv::HOGDescriptor* instance, cv::HOGDescriptor::HistogramNormType val) {
			instance->histogramNormType = val;
	}
	
	double cv_HOGDescriptor_getPropL2HysThreshold_const(const cv::HOGDescriptor* instance) {
			double ret = instance->L2HysThreshold;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropL2HysThreshold_double(cv::HOGDescriptor* instance, double val) {
			instance->L2HysThreshold = val;
	}
	
	bool cv_HOGDescriptor_getPropGammaCorrection_const(const cv::HOGDescriptor* instance) {
			bool ret = instance->gammaCorrection;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropGammaCorrection_bool(cv::HOGDescriptor* instance, bool val) {
			instance->gammaCorrection = val;
	}
	
	std::vector<float>* cv_HOGDescriptor_getPropSvmDetector_const(const cv::HOGDescriptor* instance) {
			std::vector<float> ret = instance->svmDetector;
			return new std::vector<float>(ret);
	}
	
	void cv_HOGDescriptor_setPropSvmDetector_vectorLfloatG(cv::HOGDescriptor* instance, std::vector<float>* val) {
			instance->svmDetector = *val;
	}
	
	cv::UMat* cv_HOGDescriptor_getPropOclSvmDetector_const(const cv::HOGDescriptor* instance) {
			cv::UMat ret = instance->oclSvmDetector;
			return new cv::UMat(ret);
	}
	
	void cv_HOGDescriptor_setPropOclSvmDetector_UMat(cv::HOGDescriptor* instance, cv::UMat* val) {
			instance->oclSvmDetector = *val;
	}
	
	float cv_HOGDescriptor_getPropFree_coef_const(const cv::HOGDescriptor* instance) {
			float ret = instance->free_coef;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropFree_coef_float(cv::HOGDescriptor* instance, float val) {
			instance->free_coef = val;
	}
	
	int cv_HOGDescriptor_getPropNlevels_const(const cv::HOGDescriptor* instance) {
			int ret = instance->nlevels;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropNlevels_int(cv::HOGDescriptor* instance, int val) {
			instance->nlevels = val;
	}
	
	bool cv_HOGDescriptor_getPropSignedGradient_const(const cv::HOGDescriptor* instance) {
			bool ret = instance->signedGradient;
			return ret;
	}
	
	void cv_HOGDescriptor_setPropSignedGradient_bool(cv::HOGDescriptor* instance, bool val) {
			instance->signedGradient = val;
	}
	
	void cv_HOGDescriptor_delete(cv::HOGDescriptor* instance) {
			delete instance;
	}
	
	void cv_HOGDescriptor_HOGDescriptor(Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::HOGDescriptor*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_Size_Size_Size_Size_int_int_double_HistogramNormType_double_bool_int_bool(cv::Size* _winSize, cv::Size* _blockSize, cv::Size* _blockStride, cv::Size* _cellSize, int _nbins, int _derivAperture, double _winSigma, cv::HOGDescriptor::HistogramNormType _histogramNormType, double _L2HysThreshold, bool _gammaCorrection, int _nlevels, bool _signedGradient, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(*_winSize, *_blockSize, *_blockStride, *_cellSize, _nbins, _derivAperture, _winSigma, _histogramNormType, _L2HysThreshold, _gammaCorrection, _nlevels, _signedGradient);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::HOGDescriptor*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_const_StringR(const char* filename, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(std::string(filename));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::HOGDescriptor*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_HOGDescriptor_const_HOGDescriptorR(const cv::HOGDescriptor* d, Result<cv::HOGDescriptor*>* ocvrs_return) {
		try {
			cv::HOGDescriptor* ret = new cv::HOGDescriptor(*d);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::HOGDescriptor*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_getDescriptorSize_const(const cv::HOGDescriptor* instance, Result<size_t>* ocvrs_return) {
		try {
			size_t ret = instance->getDescriptorSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<size_t>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_checkDetectorSize_const(const cv::HOGDescriptor* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->checkDetectorSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_getWinSigma_const(const cv::HOGDescriptor* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getWinSigma();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_setSVMDetector_const__InputArrayR(cv::HOGDescriptor* instance, const cv::_InputArray* svmdetector, Result_void* ocvrs_return) {
		try {
			instance->setSVMDetector(*svmdetector);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_read_FileNodeR(cv::HOGDescriptor* instance, cv::FileNode* fn, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->read(*fn);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_write_const_FileStorageR_const_StringR(const cv::HOGDescriptor* instance, cv::FileStorage* fs, const char* objname, Result_void* ocvrs_return) {
		try {
			instance->write(*fs, std::string(objname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_load_const_StringR_const_StringR(cv::HOGDescriptor* instance, const char* filename, const char* objname, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->load(std::string(filename), std::string(objname));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_save_const_const_StringR_const_StringR(const cv::HOGDescriptor* instance, const char* filename, const char* objname, Result_void* ocvrs_return) {
		try {
			instance->save(std::string(filename), std::string(objname));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_copyTo_const_HOGDescriptorR(const cv::HOGDescriptor* instance, cv::HOGDescriptor* c, Result_void* ocvrs_return) {
		try {
			instance->copyTo(*c);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_compute_const_const__InputArrayR_vectorLfloatGR_Size_Size_const_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<float>* descriptors, cv::Size* winStride, cv::Size* padding, const std::vector<cv::Point>* locations, Result_void* ocvrs_return) {
		try {
			instance->compute(*img, *descriptors, *winStride, *padding, *locations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_detect_const_const__InputArrayR_vectorLPointGR_vectorLdoubleGR_double_Size_Size_const_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Point>* foundLocations, std::vector<double>* weights, double hitThreshold, cv::Size* winStride, cv::Size* padding, const std::vector<cv::Point>* searchLocations, Result_void* ocvrs_return) {
		try {
			instance->detect(*img, *foundLocations, *weights, hitThreshold, *winStride, *padding, *searchLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_detect_const_const__InputArrayR_vectorLPointGR_double_Size_Size_const_vectorLPointGR(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Point>* foundLocations, double hitThreshold, cv::Size* winStride, cv::Size* padding, const std::vector<cv::Point>* searchLocations, Result_void* ocvrs_return) {
		try {
			instance->detect(*img, *foundLocations, hitThreshold, *winStride, *padding, *searchLocations);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScale_const_const__InputArrayR_vectorLRectGR_vectorLdoubleGR_double_Size_Size_double_double_bool(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, std::vector<double>* foundWeights, double hitThreshold, cv::Size* winStride, cv::Size* padding, double scale, double finalThreshold, bool useMeanshiftGrouping, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*img, *foundLocations, *foundWeights, hitThreshold, *winStride, *padding, scale, finalThreshold, useMeanshiftGrouping);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScale_const_const__InputArrayR_vectorLRectGR_double_Size_Size_double_double_bool(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, double hitThreshold, cv::Size* winStride, cv::Size* padding, double scale, double finalThreshold, bool useMeanshiftGrouping, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScale(*img, *foundLocations, hitThreshold, *winStride, *padding, scale, finalThreshold, useMeanshiftGrouping);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_computeGradient_const_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_Size_Size(const cv::HOGDescriptor* instance, const cv::_InputArray* img, const cv::_InputOutputArray* grad, const cv::_InputOutputArray* angleOfs, cv::Size* paddingTL, cv::Size* paddingBR, Result_void* ocvrs_return) {
		try {
			instance->computeGradient(*img, *grad, *angleOfs, *paddingTL, *paddingBR);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_getDefaultPeopleDetector(Result<std::vector<float>*>* ocvrs_return) {
		try {
			std::vector<float> ret = cv::HOGDescriptor::getDefaultPeopleDetector();
			Ok(new std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<float>*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_getDaimlerPeopleDetector(Result<std::vector<float>*>* ocvrs_return) {
		try {
			std::vector<float> ret = cv::HOGDescriptor::getDaimlerPeopleDetector();
			Ok(new std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<float>*>, ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectROI_const_const__InputArrayR_const_vectorLPointGR_vectorLPointGR_vectorLdoubleGR_double_Size_Size(const cv::HOGDescriptor* instance, const cv::_InputArray* img, const std::vector<cv::Point>* locations, std::vector<cv::Point>* foundLocations, std::vector<double>* confidences, double hitThreshold, cv::Size* winStride, cv::Size* padding, Result_void* ocvrs_return) {
		try {
			instance->detectROI(*img, *locations, *foundLocations, *confidences, hitThreshold, *winStride, *padding);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_detectMultiScaleROI_const_const__InputArrayR_vectorLRectGR_vectorLDetectionROIGR_double_int(const cv::HOGDescriptor* instance, const cv::_InputArray* img, std::vector<cv::Rect>* foundLocations, std::vector<cv::DetectionROI>* locations, double hitThreshold, int groupThreshold, Result_void* ocvrs_return) {
		try {
			instance->detectMultiScaleROI(*img, *foundLocations, *locations, hitThreshold, groupThreshold);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_HOGDescriptor_groupRectangles_const_vectorLRectGR_vectorLdoubleGR_int_double(const cv::HOGDescriptor* instance, std::vector<cv::Rect>* rectList, std::vector<double>* weights, int groupThreshold, double eps, Result_void* ocvrs_return) {
		try {
			instance->groupRectangles(*rectList, *weights, groupThreshold, eps);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_QRCodeDetector_delete(cv::QRCodeDetector* instance) {
			delete instance;
	}
	
	void cv_QRCodeDetector_QRCodeDetector(Result<cv::QRCodeDetector*>* ocvrs_return) {
		try {
			cv::QRCodeDetector* ret = new cv::QRCodeDetector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::QRCodeDetector*>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_setEpsX_double(cv::QRCodeDetector* instance, double epsX, Result_void* ocvrs_return) {
		try {
			instance->setEpsX(epsX);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_QRCodeDetector_setEpsY_double(cv::QRCodeDetector* instance, double epsY, Result_void* ocvrs_return) {
		try {
			instance->setEpsY(epsY);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_QRCodeDetector_detect_const_const__InputArrayR_const__OutputArrayR(const cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detect(*img, *points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_decode_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, const cv::_OutputArray* straight_qrcode, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->decode(*img, *points, *straight_qrcode);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_decodeCurved_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, const cv::_OutputArray* straight_qrcode, Result<void*>* ocvrs_return) {
		try {
			cv::String ret = instance->decodeCurved(*img, *points, *straight_qrcode);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_detectAndDecode_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, const cv::_OutputArray* straight_qrcode, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->detectAndDecode(*img, *points, *straight_qrcode);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_detectAndDecodeCurved_const__InputArrayR_const__OutputArrayR_const__OutputArrayR(cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, const cv::_OutputArray* straight_qrcode, Result<void*>* ocvrs_return) {
		try {
			std::string ret = instance->detectAndDecodeCurved(*img, *points, *straight_qrcode);
			Ok(ocvrs_create_byte_string(ret.data(), ret.size()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_detectMulti_const_const__InputArrayR_const__OutputArrayR(const cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_OutputArray* points, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->detectMulti(*img, *points);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_QRCodeDetector_decodeMulti_const_const__InputArrayR_const__InputArrayR_vectorLstringGR_const__OutputArrayR(const cv::QRCodeDetector* instance, const cv::_InputArray* img, const cv::_InputArray* points, std::vector<std::string>* decoded_info, const cv::_OutputArray* straight_qrcode, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->decodeMulti(*img, *points, *decoded_info, *straight_qrcode);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	double cv_SimilarRects_getPropEps_const(const cv::SimilarRects* instance) {
			double ret = instance->eps;
			return ret;
	}
	
	void cv_SimilarRects_setPropEps_double(cv::SimilarRects* instance, double val) {
			instance->eps = val;
	}
	
	void cv_SimilarRects_delete(cv::SimilarRects* instance) {
			delete instance;
	}
	
	void cv_SimilarRects_SimilarRects_double(double _eps, Result<cv::SimilarRects*>* ocvrs_return) {
		try {
			cv::SimilarRects* ret = new cv::SimilarRects(_eps);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::SimilarRects*>, ocvrs_return);
	}
	
	void cv_SimilarRects_operator___const_const_RectR_const_RectR(const cv::SimilarRects* instance, const cv::Rect* r1, const cv::Rect* r2, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->operator()(*r1, *r2);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
}
