#include "ocvrs_common.hpp"
#include <opencv2/mcc.hpp>
#include "mcc_types.hpp"

extern "C" {
	void cv_ColorCorrectionModel_delete(cv::ccm::ColorCorrectionModel* instance) {
			delete instance;
	}
	
	void cv_ccm_ColorCorrectionModel_ColorCorrectionModel_const_MatR_CONST_COLOR(const cv::Mat* src, cv::ccm::CONST_COLOR constcolor, Result<cv::ccm::ColorCorrectionModel*>* ocvrs_return) {
		try {
			cv::ccm::ColorCorrectionModel* ret = new cv::ccm::ColorCorrectionModel(*src, constcolor);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ccm::ColorCorrectionModel*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_ColorCorrectionModel_const_MatR_Mat_COLOR_SPACE(const cv::Mat* src, cv::Mat* colors, cv::ccm::COLOR_SPACE ref_cs, Result<cv::ccm::ColorCorrectionModel*>* ocvrs_return) {
		try {
			cv::ccm::ColorCorrectionModel* ret = new cv::ccm::ColorCorrectionModel(*src, *colors, ref_cs);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ccm::ColorCorrectionModel*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_ColorCorrectionModel_const_MatR_Mat_COLOR_SPACE_Mat(const cv::Mat* src, cv::Mat* colors, cv::ccm::COLOR_SPACE ref_cs, cv::Mat* colored, Result<cv::ccm::ColorCorrectionModel*>* ocvrs_return) {
		try {
			cv::ccm::ColorCorrectionModel* ret = new cv::ccm::ColorCorrectionModel(*src, *colors, ref_cs, *colored);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::ccm::ColorCorrectionModel*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setColorSpace_COLOR_SPACE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::COLOR_SPACE cs, Result_void* ocvrs_return) {
		try {
			instance->setColorSpace(cs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setCCM_TYPE_CCM_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::CCM_TYPE ccm_type, Result_void* ocvrs_return) {
		try {
			instance->setCCM_TYPE(ccm_type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setDistance_DISTANCE_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::DISTANCE_TYPE distance, Result_void* ocvrs_return) {
		try {
			instance->setDistance(distance);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setLinear_LINEAR_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::LINEAR_TYPE linear_type, Result_void* ocvrs_return) {
		try {
			instance->setLinear(linear_type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setLinearGamma_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* gamma, Result_void* ocvrs_return) {
		try {
			instance->setLinearGamma(*gamma);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setLinearDegree_const_intR(cv::ccm::ColorCorrectionModel* instance, const int* deg, Result_void* ocvrs_return) {
		try {
			instance->setLinearDegree(*deg);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setSaturatedThreshold_const_doubleR_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* lower, const double* upper, Result_void* ocvrs_return) {
		try {
			instance->setSaturatedThreshold(*lower, *upper);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setWeightsList_const_MatR(cv::ccm::ColorCorrectionModel* instance, const cv::Mat* weights_list, Result_void* ocvrs_return) {
		try {
			instance->setWeightsList(*weights_list);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setWeightCoeff_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* weights_coeff, Result_void* ocvrs_return) {
		try {
			instance->setWeightCoeff(*weights_coeff);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setInitialMethod_INITIAL_METHOD_TYPE(cv::ccm::ColorCorrectionModel* instance, cv::ccm::INITIAL_METHOD_TYPE initial_method_type, Result_void* ocvrs_return) {
		try {
			instance->setInitialMethod(initial_method_type);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setMaxCount_const_intR(cv::ccm::ColorCorrectionModel* instance, const int* max_count, Result_void* ocvrs_return) {
		try {
			instance->setMaxCount(*max_count);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_setEpsilon_const_doubleR(cv::ccm::ColorCorrectionModel* instance, const double* epsilon, Result_void* ocvrs_return) {
		try {
			instance->setEpsilon(*epsilon);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_run(cv::ccm::ColorCorrectionModel* instance, Result_void* ocvrs_return) {
		try {
			instance->run();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_getCCM_const(const cv::ccm::ColorCorrectionModel* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getCCM();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_getLoss_const(const cv::ccm::ColorCorrectionModel* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->getLoss();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_get_src_rgbl_const(const cv::ccm::ColorCorrectionModel* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->get_src_rgbl();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_get_dst_rgbl_const(const cv::ccm::ColorCorrectionModel* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->get_dst_rgbl();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_getMask_const(const cv::ccm::ColorCorrectionModel* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getMask();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_getWeights_const(const cv::ccm::ColorCorrectionModel* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getWeights();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ccm_ColorCorrectionModel_infer_const_MatR_bool(cv::ccm::ColorCorrectionModel* instance, const cv::Mat* img, bool islinear, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->infer(*img, islinear);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_create(Result<cv::Ptr<cv::mcc::CChecker>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::mcc::CChecker> ret = cv::mcc::CChecker::create();
			Ok(new cv::Ptr<cv::mcc::CChecker>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::mcc::CChecker>*>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_setTarget_TYPECHART(cv::mcc::CChecker* instance, cv::mcc::TYPECHART _target, Result_void* ocvrs_return) {
		try {
			instance->setTarget(_target);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CChecker_setBox_vectorLPoint2fG(cv::mcc::CChecker* instance, std::vector<cv::Point2f>* _box, Result_void* ocvrs_return) {
		try {
			instance->setBox(*_box);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CChecker_setChartsRGB_Mat(cv::mcc::CChecker* instance, cv::Mat* _chartsRGB, Result_void* ocvrs_return) {
		try {
			instance->setChartsRGB(*_chartsRGB);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CChecker_setChartsYCbCr_Mat(cv::mcc::CChecker* instance, cv::Mat* _chartsYCbCr, Result_void* ocvrs_return) {
		try {
			instance->setChartsYCbCr(*_chartsYCbCr);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CChecker_setCost_float(cv::mcc::CChecker* instance, float _cost, Result_void* ocvrs_return) {
		try {
			instance->setCost(_cost);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CChecker_setCenter_Point2f(cv::mcc::CChecker* instance, cv::Point2f* _center, Result_void* ocvrs_return) {
		try {
			instance->setCenter(*_center);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CChecker_getTarget(cv::mcc::CChecker* instance, Result<cv::mcc::TYPECHART>* ocvrs_return) {
		try {
			cv::mcc::TYPECHART ret = instance->getTarget();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::mcc::TYPECHART>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_getBox(cv::mcc::CChecker* instance, Result<std::vector<cv::Point2f>*>* ocvrs_return) {
		try {
			std::vector<cv::Point2f> ret = instance->getBox();
			Ok(new std::vector<cv::Point2f>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Point2f>*>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_getChartsRGB(cv::mcc::CChecker* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getChartsRGB();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_getChartsYCbCr(cv::mcc::CChecker* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->getChartsYCbCr();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_getCost(cv::mcc::CChecker* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->getCost();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_mcc_CChecker_getCenter(cv::mcc::CChecker* instance, Result<cv::Point2f>* ocvrs_return) {
		try {
			cv::Point2f ret = instance->getCenter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Point2f>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDetector_setNet_Net(cv::mcc::CCheckerDetector* instance, cv::dnn::Net* net, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->setNet(*net);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDetector_process_const__InputArrayR_const_TYPECHART_const_vectorLRectGR_const_int_bool_const_PtrLDetectorParametersGR(cv::mcc::CCheckerDetector* instance, const cv::_InputArray* image, const cv::mcc::TYPECHART chartType, const std::vector<cv::Rect>* regionsOfInterest, const int nc, bool useNet, const cv::Ptr<cv::mcc::DetectorParameters>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->process(*image, chartType, *regionsOfInterest, nc, useNet, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDetector_process_const__InputArrayR_const_TYPECHART_const_int_bool_const_PtrLDetectorParametersGR(cv::mcc::CCheckerDetector* instance, const cv::_InputArray* image, const cv::mcc::TYPECHART chartType, const int nc, bool useNet, const cv::Ptr<cv::mcc::DetectorParameters>* params, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->process(*image, chartType, nc, useNet, *params);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDetector_getBestColorChecker(cv::mcc::CCheckerDetector* instance, Result<cv::Ptr<cv::mcc::CChecker>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::mcc::CChecker> ret = instance->getBestColorChecker();
			Ok(new cv::Ptr<cv::mcc::CChecker>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::mcc::CChecker>*>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDetector_getListColorChecker(cv::mcc::CCheckerDetector* instance, Result<std::vector<cv::Ptr<cv::mcc::CChecker>>*>* ocvrs_return) {
		try {
			std::vector<cv::Ptr<cv::mcc::CChecker>> ret = instance->getListColorChecker();
			Ok(new std::vector<cv::Ptr<cv::mcc::CChecker>>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Ptr<cv::mcc::CChecker>>*>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDetector_create(Result<cv::Ptr<cv::mcc::CCheckerDetector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::mcc::CCheckerDetector> ret = cv::mcc::CCheckerDetector::create();
			Ok(new cv::Ptr<cv::mcc::CCheckerDetector>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::mcc::CCheckerDetector>*>, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDraw_draw_const__InputOutputArrayR(cv::mcc::CCheckerDraw* instance, const cv::_InputOutputArray* img, Result_void* ocvrs_return) {
		try {
			instance->draw(*img);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_mcc_CCheckerDraw_create_PtrLCCheckerG_Scalar_int(cv::Ptr<cv::mcc::CChecker>* pChecker, cv::Scalar* color, int thickness, Result<cv::Ptr<cv::mcc::CCheckerDraw>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::mcc::CCheckerDraw> ret = cv::mcc::CCheckerDraw::create(*pChecker, *color, thickness);
			Ok(new cv::Ptr<cv::mcc::CCheckerDraw>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::mcc::CCheckerDraw>*>, ocvrs_return);
	}
	
	int cv_mcc_DetectorParameters_getPropAdaptiveThreshWinSizeMin_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->adaptiveThreshWinSizeMin;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropAdaptiveThreshWinSizeMin_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->adaptiveThreshWinSizeMin = val;
	}
	
	int cv_mcc_DetectorParameters_getPropAdaptiveThreshWinSizeMax_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->adaptiveThreshWinSizeMax;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropAdaptiveThreshWinSizeMax_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->adaptiveThreshWinSizeMax = val;
	}
	
	int cv_mcc_DetectorParameters_getPropAdaptiveThreshWinSizeStep_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->adaptiveThreshWinSizeStep;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropAdaptiveThreshWinSizeStep_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->adaptiveThreshWinSizeStep = val;
	}
	
	double cv_mcc_DetectorParameters_getPropAdaptiveThreshConstant_const(const cv::mcc::DetectorParameters* instance) {
			double ret = instance->adaptiveThreshConstant;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropAdaptiveThreshConstant_double(cv::mcc::DetectorParameters* instance, double val) {
			instance->adaptiveThreshConstant = val;
	}
	
	double cv_mcc_DetectorParameters_getPropMinContoursAreaRate_const(const cv::mcc::DetectorParameters* instance) {
			double ret = instance->minContoursAreaRate;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinContoursAreaRate_double(cv::mcc::DetectorParameters* instance, double val) {
			instance->minContoursAreaRate = val;
	}
	
	double cv_mcc_DetectorParameters_getPropMinContoursArea_const(const cv::mcc::DetectorParameters* instance) {
			double ret = instance->minContoursArea;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinContoursArea_double(cv::mcc::DetectorParameters* instance, double val) {
			instance->minContoursArea = val;
	}
	
	double cv_mcc_DetectorParameters_getPropConfidenceThreshold_const(const cv::mcc::DetectorParameters* instance) {
			double ret = instance->confidenceThreshold;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropConfidenceThreshold_double(cv::mcc::DetectorParameters* instance, double val) {
			instance->confidenceThreshold = val;
	}
	
	double cv_mcc_DetectorParameters_getPropMinContourSolidity_const(const cv::mcc::DetectorParameters* instance) {
			double ret = instance->minContourSolidity;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinContourSolidity_double(cv::mcc::DetectorParameters* instance, double val) {
			instance->minContourSolidity = val;
	}
	
	double cv_mcc_DetectorParameters_getPropFindCandidatesApproxPolyDPEpsMultiplier_const(const cv::mcc::DetectorParameters* instance) {
			double ret = instance->findCandidatesApproxPolyDPEpsMultiplier;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropFindCandidatesApproxPolyDPEpsMultiplier_double(cv::mcc::DetectorParameters* instance, double val) {
			instance->findCandidatesApproxPolyDPEpsMultiplier = val;
	}
	
	int cv_mcc_DetectorParameters_getPropBorderWidth_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->borderWidth;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropBorderWidth_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->borderWidth = val;
	}
	
	float cv_mcc_DetectorParameters_getPropB0factor_const(const cv::mcc::DetectorParameters* instance) {
			float ret = instance->B0factor;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropB0factor_float(cv::mcc::DetectorParameters* instance, float val) {
			instance->B0factor = val;
	}
	
	float cv_mcc_DetectorParameters_getPropMaxError_const(const cv::mcc::DetectorParameters* instance) {
			float ret = instance->maxError;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMaxError_float(cv::mcc::DetectorParameters* instance, float val) {
			instance->maxError = val;
	}
	
	int cv_mcc_DetectorParameters_getPropMinContourPointsAllowed_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->minContourPointsAllowed;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinContourPointsAllowed_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->minContourPointsAllowed = val;
	}
	
	int cv_mcc_DetectorParameters_getPropMinContourLengthAllowed_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->minContourLengthAllowed;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinContourLengthAllowed_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->minContourLengthAllowed = val;
	}
	
	int cv_mcc_DetectorParameters_getPropMinInterContourDistance_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->minInterContourDistance;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinInterContourDistance_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->minInterContourDistance = val;
	}
	
	int cv_mcc_DetectorParameters_getPropMinInterCheckerDistance_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->minInterCheckerDistance;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinInterCheckerDistance_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->minInterCheckerDistance = val;
	}
	
	int cv_mcc_DetectorParameters_getPropMinImageSize_const(const cv::mcc::DetectorParameters* instance) {
			int ret = instance->minImageSize;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinImageSize_int(cv::mcc::DetectorParameters* instance, int val) {
			instance->minImageSize = val;
	}
	
	unsigned int cv_mcc_DetectorParameters_getPropMinGroupSize_const(const cv::mcc::DetectorParameters* instance) {
			unsigned int ret = instance->minGroupSize;
			return ret;
	}
	
	void cv_mcc_DetectorParameters_setPropMinGroupSize_unsigned_int(cv::mcc::DetectorParameters* instance, unsigned int val) {
			instance->minGroupSize = val;
	}
	
	void cv_MCC_DetectorParameters_delete(cv::mcc::DetectorParameters* instance) {
			delete instance;
	}
	
	void cv_mcc_DetectorParameters_DetectorParameters(Result<cv::mcc::DetectorParameters*>* ocvrs_return) {
		try {
			cv::mcc::DetectorParameters* ret = new cv::mcc::DetectorParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::mcc::DetectorParameters*>, ocvrs_return);
	}
	
	void cv_mcc_DetectorParameters_create(Result<cv::Ptr<cv::mcc::DetectorParameters>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::mcc::DetectorParameters> ret = cv::mcc::DetectorParameters::create();
			Ok(new cv::Ptr<cv::mcc::DetectorParameters>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::mcc::DetectorParameters>*>, ocvrs_return);
	}
	
}
