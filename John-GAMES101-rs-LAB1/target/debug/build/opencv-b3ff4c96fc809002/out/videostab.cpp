#include "ocvrs_common.hpp"
#include <opencv2/videostab.hpp>
#include "videostab_types.hpp"

extern "C" {
	void cv_videostab_calcBlurriness_const_MatR(const cv::Mat* frame, Result<float>* ocvrs_return) {
		try {
			float ret = cv::videostab::calcBlurriness(*frame);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_calcFlowMask_const_MatR_const_MatR_const_MatR_float_const_MatR_const_MatR_MatR(const cv::Mat* flowX, const cv::Mat* flowY, const cv::Mat* errors, float maxError, const cv::Mat* mask0, const cv::Mat* mask1, cv::Mat* flowMask, Result_void* ocvrs_return) {
		try {
			cv::videostab::calcFlowMask(*flowX, *flowY, *errors, maxError, *mask0, *mask1, *flowMask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_completeFrameAccordingToFlow_const_MatR_const_MatR_const_MatR_const_MatR_const_MatR_float_MatR_MatR(const cv::Mat* flowMask, const cv::Mat* flowX, const cv::Mat* flowY, const cv::Mat* frame1, const cv::Mat* mask1, float distThresh, cv::Mat* frame0, cv::Mat* mask0, Result_void* ocvrs_return) {
		try {
			cv::videostab::completeFrameAccordingToFlow(*flowMask, *flowX, *flowY, *frame1, *mask1, distThresh, *frame0, *mask0);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ensureInclusionConstraint_const_MatR_Size_float(const cv::Mat* M, cv::Size* size, float trimRatio, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::ensureInclusionConstraint(*M, *size, trimRatio);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_estimateGlobalMotionLeastSquares_const__InputOutputArrayR_const__InputOutputArrayR_int_floatX(const cv::_InputOutputArray* points0, const cv::_InputOutputArray* points1, int model, float* rmse, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::estimateGlobalMotionLeastSquares(*points0, *points1, model, rmse);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_estimateGlobalMotionRansac_const__InputArrayR_const__InputArrayR_int_const_RansacParamsR_floatX_intX(const cv::_InputArray* points0, const cv::_InputArray* points1, int model, const cv::videostab::RansacParams* params, float* rmse, int* ninliers, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::estimateGlobalMotionRansac(*points0, *points1, model, *params, rmse, ninliers);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_estimateOptimalTrimRatio_const_MatR_Size(const cv::Mat* M, cv::Size* size, Result<float>* ocvrs_return) {
		try {
			float ret = cv::videostab::estimateOptimalTrimRatio(*M, *size);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_getMotion_int_int_const_vectorLMatGR(int from, int to, const std::vector<cv::Mat>* motions, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = cv::videostab::getMotion(from, to, *motions);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_ColorAverageInpainter_delete(cv::videostab::ColorAverageInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_ColorAverageInpainter_inpaint_int_MatR_MatR(cv::videostab::ColorAverageInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, Result_void* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ColorInpainter_delete(cv::videostab::ColorInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_ColorInpainter_ColorInpainter_int_double(int method, double radius, Result<cv::videostab::ColorInpainter*>* ocvrs_return) {
		try {
			cv::videostab::ColorInpainter* ret = new cv::videostab::ColorInpainter(method, radius);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::ColorInpainter*>, ocvrs_return);
	}
	
	void cv_videostab_ColorInpainter_inpaint_int_MatR_MatR(cv::videostab::ColorInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, Result_void* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_ConsistentMosaicInpainter_delete(cv::videostab::ConsistentMosaicInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_ConsistentMosaicInpainter_ConsistentMosaicInpainter(Result<cv::videostab::ConsistentMosaicInpainter*>* ocvrs_return) {
		try {
			cv::videostab::ConsistentMosaicInpainter* ret = new cv::videostab::ConsistentMosaicInpainter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::ConsistentMosaicInpainter*>, ocvrs_return);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_setStdevThresh_float(cv::videostab::ConsistentMosaicInpainter* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setStdevThresh(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_stdevThresh_const(const cv::videostab::ConsistentMosaicInpainter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->stdevThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_ConsistentMosaicInpainter_inpaint_int_MatR_MatR(cv::videostab::ConsistentMosaicInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, Result_void* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setRadius_int(cv::videostab::DeblurerBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_radius_const(const cv::videostab::DeblurerBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_deblur_int_MatR_const_RangeR(cv::videostab::DeblurerBase* instance, int idx, cv::Mat* frame, const cv::Range* range, Result_void* ocvrs_return) {
		try {
			instance->deblur(idx, *frame, *range);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setFrames_const_vectorLMatGR(cv::videostab::DeblurerBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_frames_const(const cv::videostab::DeblurerBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->frames();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setMotions_const_vectorLMatGR(cv::videostab::DeblurerBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_motions_const(const cv::videostab::DeblurerBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_setBlurrinessRates_const_vectorLfloatGR(cv::videostab::DeblurerBase* instance, const std::vector<float>* val, Result_void* ocvrs_return) {
		try {
			instance->setBlurrinessRates(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_DeblurerBase_blurrinessRates_const(const cv::videostab::DeblurerBase* instance, Result<std::vector<float>*>* ocvrs_return) {
		try {
			const std::vector<float> ret = instance->blurrinessRates();
			Ok(new const std::vector<float>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<float>*>, ocvrs_return);
	}
	
	void cv_FastMarchingMethod_delete(cv::videostab::FastMarchingMethod* instance) {
			delete instance;
	}
	
	void cv_videostab_FastMarchingMethod_FastMarchingMethod(Result<cv::videostab::FastMarchingMethod*>* ocvrs_return) {
		try {
			cv::videostab::FastMarchingMethod* ret = new cv::videostab::FastMarchingMethod();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::FastMarchingMethod*>, ocvrs_return);
	}
	
	void cv_videostab_FastMarchingMethod_distanceMap_const(const cv::videostab::FastMarchingMethod* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->distanceMap();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_FromFileMotionReader_delete(cv::videostab::FromFileMotionReader* instance) {
			delete instance;
	}
	
	void cv_videostab_FromFileMotionReader_FromFileMotionReader_const_StringR(const char* path, Result<cv::videostab::FromFileMotionReader*>* ocvrs_return) {
		try {
			cv::videostab::FromFileMotionReader* ret = new cv::videostab::FromFileMotionReader(std::string(path));
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::FromFileMotionReader*>, ocvrs_return);
	}
	
	void cv_videostab_FromFileMotionReader_estimate_const_MatR_const_MatR_boolX(cv::videostab::FromFileMotionReader* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_GaussianMotionFilter_delete(cv::videostab::GaussianMotionFilter* instance) {
			delete instance;
	}
	
	void cv_videostab_GaussianMotionFilter_GaussianMotionFilter_int_float(int radius, float stdev, Result<cv::videostab::GaussianMotionFilter*>* ocvrs_return) {
		try {
			cv::videostab::GaussianMotionFilter* ret = new cv::videostab::GaussianMotionFilter(radius, stdev);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::GaussianMotionFilter*>, ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_setParams_int_float(cv::videostab::GaussianMotionFilter* instance, int radius, float stdev, Result_void* ocvrs_return) {
		try {
			instance->setParams(radius, stdev);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_radius_const(const cv::videostab::GaussianMotionFilter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_stdev_const(const cv::videostab::GaussianMotionFilter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->stdev();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_GaussianMotionFilter_stabilize_int_const_vectorLMatGR_const_RangeR(cv::videostab::GaussianMotionFilter* instance, int idx, const std::vector<cv::Mat>* motions, const cv::Range* range, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->stabilize(idx, *motions, *range);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_IDenseOptFlowEstimator_run_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__InputOutputArrayR_const__OutputArrayR(cv::videostab::IDenseOptFlowEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_InputOutputArray* flowX, const cv::_InputOutputArray* flowY, const cv::_OutputArray* errors, Result_void* ocvrs_return) {
		try {
			instance->run(*frame0, *frame1, *flowX, *flowY, *errors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_IFrameSource_reset(cv::videostab::IFrameSource* instance, Result_void* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_IFrameSource_nextFrame(cv::videostab::IFrameSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_ILog_print_const_charX(cv::videostab::ILog* instance, const char* format, Result_void* ocvrs_return) {
		try {
			instance->print(format);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_IMotionStabilizer_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::IMotionStabilizer* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, Result_void* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_IOutlierRejector_process_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::videostab::IOutlierRejector* instance, cv::Size* frameSize, const cv::_InputArray* points0, const cv::_InputArray* points1, const cv::_OutputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->process(*frameSize, *points0, *points1, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ISparseOptFlowEstimator_run_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::videostab::ISparseOptFlowEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_InputArray* points0, const cv::_InputOutputArray* points1, const cv::_OutputArray* status, const cv::_OutputArray* errors, Result_void* ocvrs_return) {
		try {
			instance->run(*frame0, *frame1, *points0, *points1, *status, *errors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_setMotionModel_MotionModel(cv::videostab::ImageMotionEstimatorBase* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_motionModel_const(const cv::videostab::ImageMotionEstimatorBase* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionModel>, ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_setFrameMask_const__InputArrayR(cv::videostab::ImageMotionEstimatorBase* instance, const cv::_InputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->setFrameMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ImageMotionEstimatorBase_estimate_const_MatR_const_MatR_boolX(cv::videostab::ImageMotionEstimatorBase* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setRadius_int(cv::videostab::InpainterBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_radius_const(const cv::videostab::InpainterBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setMotionModel_MotionModel(cv::videostab::InpainterBase* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_motionModel_const(const cv::videostab::InpainterBase* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionModel>, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_inpaint_int_MatR_MatR(cv::videostab::InpainterBase* instance, int idx, cv::Mat* frame, cv::Mat* mask, Result_void* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setFrames_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_frames_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->frames();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setMotions_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_motions_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setStabilizedFrames_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setStabilizedFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_stabilizedFrames_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->stabilizedFrames();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_setStabilizationMotions_const_vectorLMatGR(cv::videostab::InpainterBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setStabilizationMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpainterBase_stabilizationMotions_const(const cv::videostab::InpainterBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->stabilizationMotions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_InpaintingPipeline_delete(cv::videostab::InpaintingPipeline* instance) {
			delete instance;
	}
	
	void cv_videostab_InpaintingPipeline_pushBack_PtrLInpainterBaseG(cv::videostab::InpaintingPipeline* instance, cv::Ptr<cv::videostab::InpainterBase>* inpainter, Result_void* ocvrs_return) {
		try {
			instance->pushBack(*inpainter);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_empty_const(const cv::videostab::InpaintingPipeline* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setRadius_int(cv::videostab::InpaintingPipeline* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setMotionModel_MotionModel(cv::videostab::InpaintingPipeline* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setFrames_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setMotions_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setStabilizedFrames_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setStabilizedFrames(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_setStabilizationMotions_const_vectorLMatGR(cv::videostab::InpaintingPipeline* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setStabilizationMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_InpaintingPipeline_inpaint_int_MatR_MatR(cv::videostab::InpaintingPipeline* instance, int idx, cv::Mat* frame, cv::Mat* mask, Result_void* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_KeypointBasedMotionEstimator_delete(cv::videostab::KeypointBasedMotionEstimator* instance) {
			delete instance;
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_KeypointBasedMotionEstimator_PtrLMotionEstimatorBaseG(cv::Ptr<cv::videostab::MotionEstimatorBase>* estimator, Result<cv::videostab::KeypointBasedMotionEstimator*>* ocvrs_return) {
		try {
			cv::videostab::KeypointBasedMotionEstimator* ret = new cv::videostab::KeypointBasedMotionEstimator(*estimator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::KeypointBasedMotionEstimator*>, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setMotionModel_MotionModel(cv::videostab::KeypointBasedMotionEstimator* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_motionModel_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionModel>, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setDetector_PtrLFeature2DG(cv::videostab::KeypointBasedMotionEstimator* instance, cv::Ptr<cv::Feature2D>* val, Result_void* ocvrs_return) {
		try {
			instance->setDetector(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_detector_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::Ptr<cv::Feature2D>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::Feature2D> ret = instance->detector();
			Ok(new cv::Ptr<cv::Feature2D>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::Feature2D>*>, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setOpticalFlowEstimator_PtrLISparseOptFlowEstimatorG(cv::videostab::KeypointBasedMotionEstimator* instance, cv::Ptr<cv::videostab::ISparseOptFlowEstimator>* val, Result_void* ocvrs_return) {
		try {
			instance->setOpticalFlowEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_opticalFlowEstimator_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::Ptr<cv::videostab::ISparseOptFlowEstimator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ISparseOptFlowEstimator> ret = instance->opticalFlowEstimator();
			Ok(new cv::Ptr<cv::videostab::ISparseOptFlowEstimator>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::ISparseOptFlowEstimator>*>, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setOutlierRejector_PtrLIOutlierRejectorG(cv::videostab::KeypointBasedMotionEstimator* instance, cv::Ptr<cv::videostab::IOutlierRejector>* val, Result_void* ocvrs_return) {
		try {
			instance->setOutlierRejector(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_outlierRejector_const(const cv::videostab::KeypointBasedMotionEstimator* instance, Result<cv::Ptr<cv::videostab::IOutlierRejector>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IOutlierRejector> ret = instance->outlierRejector();
			Ok(new cv::Ptr<cv::videostab::IOutlierRejector>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::IOutlierRejector>*>, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_setFrameMask_const__InputArrayR(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::_InputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->setFrameMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_estimate_const_MatR_const_MatR_boolX(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_KeypointBasedMotionEstimator_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::KeypointBasedMotionEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_LogToStdout_delete(cv::videostab::LogToStdout* instance) {
			delete instance;
	}
	
	void cv_videostab_LogToStdout_print_const_charX(cv::videostab::LogToStdout* instance, const char* format, Result_void* ocvrs_return) {
		try {
			instance->print(format);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_LpMotionStabilizer_delete(cv::videostab::LpMotionStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_LpMotionStabilizer_LpMotionStabilizer_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::LpMotionStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::LpMotionStabilizer* ret = new cv::videostab::LpMotionStabilizer(model);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::LpMotionStabilizer*>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setMotionModel_MotionModel(cv::videostab::LpMotionStabilizer* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_motionModel_const(const cv::videostab::LpMotionStabilizer* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionModel>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setFrameSize_Size(cv::videostab::LpMotionStabilizer* instance, cv::Size* val, Result_void* ocvrs_return) {
		try {
			instance->setFrameSize(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_frameSize_const(const cv::videostab::LpMotionStabilizer* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->frameSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setTrimRatio_float(cv::videostab::LpMotionStabilizer* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setTrimRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_trimRatio_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->trimRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight1_float(cv::videostab::LpMotionStabilizer* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setWeight1(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight1_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight1();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight2_float(cv::videostab::LpMotionStabilizer* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setWeight2(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight2_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight2();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight3_float(cv::videostab::LpMotionStabilizer* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setWeight3(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight3_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight3();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_setWeight4_float(cv::videostab::LpMotionStabilizer* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setWeight4(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_weight4_const(const cv::videostab::LpMotionStabilizer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->weight4();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_LpMotionStabilizer_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::LpMotionStabilizer* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, Result_void* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_MaskFrameSource_delete(cv::videostab::MaskFrameSource* instance) {
			delete instance;
	}
	
	void cv_videostab_MaskFrameSource_MaskFrameSource_const_PtrLIFrameSourceGR(const cv::Ptr<cv::videostab::IFrameSource>* source, Result<cv::videostab::MaskFrameSource*>* ocvrs_return) {
		try {
			cv::videostab::MaskFrameSource* ret = new cv::videostab::MaskFrameSource(*source);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MaskFrameSource*>, ocvrs_return);
	}
	
	void cv_videostab_MaskFrameSource_reset(cv::videostab::MaskFrameSource* instance, Result_void* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MaskFrameSource_nextFrame(cv::videostab::MaskFrameSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_MoreAccurateMotionWobbleSuppressor_delete(cv::videostab::MoreAccurateMotionWobbleSuppressor* instance) {
			delete instance;
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressor_suppress_int_const_MatR_MatR(cv::videostab::MoreAccurateMotionWobbleSuppressor* instance, int idx, const cv::Mat* frame, cv::Mat* result, Result_void* ocvrs_return) {
		try {
			instance->suppress(idx, *frame, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressorBase_setPeriod_int(cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setPeriod(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MoreAccurateMotionWobbleSuppressorBase_period_const(const cv::videostab::MoreAccurateMotionWobbleSuppressorBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->period();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorBase_setMotionModel_MotionModel(cv::videostab::MotionEstimatorBase* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorBase_motionModel_const(const cv::videostab::MotionEstimatorBase* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionModel>, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorBase_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::MotionEstimatorBase* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_MotionEstimatorL1_delete(cv::videostab::MotionEstimatorL1* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionEstimatorL1_MotionEstimatorL1_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::MotionEstimatorL1*>* ocvrs_return) {
		try {
			cv::videostab::MotionEstimatorL1* ret = new cv::videostab::MotionEstimatorL1(model);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionEstimatorL1*>, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorL1_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::MotionEstimatorL1* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_MotionEstimatorRansacL2_delete(cv::videostab::MotionEstimatorRansacL2* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionEstimatorRansacL2_MotionEstimatorRansacL2_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::MotionEstimatorRansacL2*>* ocvrs_return) {
		try {
			cv::videostab::MotionEstimatorRansacL2* ret = new cv::videostab::MotionEstimatorRansacL2(model);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionEstimatorRansacL2*>, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_setRansacParams_const_RansacParamsR(cv::videostab::MotionEstimatorRansacL2* instance, const cv::videostab::RansacParams* val, Result_void* ocvrs_return) {
		try {
			instance->setRansacParams(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_ransacParams_const(const cv::videostab::MotionEstimatorRansacL2* instance, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams ret = instance->ransacParams();
			Ok(new cv::videostab::RansacParams(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::RansacParams*>, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_setMinInlierRatio_float(cv::videostab::MotionEstimatorRansacL2* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setMinInlierRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_minInlierRatio_const(const cv::videostab::MotionEstimatorRansacL2* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->minInlierRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_MotionEstimatorRansacL2_estimate_const__InputArrayR_const__InputArrayR_boolX(cv::videostab::MotionEstimatorRansacL2* instance, const cv::_InputArray* points0, const cv::_InputArray* points1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*points0, *points1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_MotionFilterBase_stabilize_int_const_vectorLMatGR_const_RangeR(cv::videostab::MotionFilterBase* instance, int idx, const std::vector<cv::Mat>* motions, const cv::Range* range, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->stabilize(idx, *motions, *range);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_MotionFilterBase_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::MotionFilterBase* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, Result_void* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_MotionInpainter_delete(cv::videostab::MotionInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionInpainter_MotionInpainter(Result<cv::videostab::MotionInpainter*>* ocvrs_return) {
		try {
			cv::videostab::MotionInpainter* ret = new cv::videostab::MotionInpainter();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionInpainter*>, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setOptFlowEstimator_PtrLIDenseOptFlowEstimatorG(cv::videostab::MotionInpainter* instance, cv::Ptr<cv::videostab::IDenseOptFlowEstimator>* val, Result_void* ocvrs_return) {
		try {
			instance->setOptFlowEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_optFlowEstimator_const(const cv::videostab::MotionInpainter* instance, Result<cv::Ptr<cv::videostab::IDenseOptFlowEstimator>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IDenseOptFlowEstimator> ret = instance->optFlowEstimator();
			Ok(new cv::Ptr<cv::videostab::IDenseOptFlowEstimator>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::IDenseOptFlowEstimator>*>, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setFlowErrorThreshold_float(cv::videostab::MotionInpainter* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setFlowErrorThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_flowErrorThreshold_const(const cv::videostab::MotionInpainter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->flowErrorThreshold();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setDistThreshold_float(cv::videostab::MotionInpainter* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setDistThreshold(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_distThresh_const(const cv::videostab::MotionInpainter* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->distThresh();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_setBorderMode_int(cv::videostab::MotionInpainter* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setBorderMode(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_borderMode_const(const cv::videostab::MotionInpainter* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->borderMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_MotionInpainter_inpaint_int_MatR_MatR(cv::videostab::MotionInpainter* instance, int idx, cv::Mat* frame, cv::Mat* mask, Result_void* ocvrs_return) {
		try {
			instance->inpaint(idx, *frame, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_MotionStabilizationPipeline_delete(cv::videostab::MotionStabilizationPipeline* instance) {
			delete instance;
	}
	
	void cv_videostab_MotionStabilizationPipeline_pushBack_PtrLIMotionStabilizerG(cv::videostab::MotionStabilizationPipeline* instance, cv::Ptr<cv::videostab::IMotionStabilizer>* stabilizer, Result_void* ocvrs_return) {
		try {
			instance->pushBack(*stabilizer);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_MotionStabilizationPipeline_empty_const(const cv::videostab::MotionStabilizationPipeline* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->empty();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_videostab_MotionStabilizationPipeline_stabilize_int_const_vectorLMatGR_const_RangeR_MatX(cv::videostab::MotionStabilizationPipeline* instance, int size, const std::vector<cv::Mat>* motions, const cv::Range* range, cv::Mat* stabilizationMotions, Result_void* ocvrs_return) {
		try {
			instance->stabilize(size, *motions, *range, stabilizationMotions);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_NullDeblurer_delete(cv::videostab::NullDeblurer* instance) {
			delete instance;
	}
	
	void cv_videostab_NullDeblurer_deblur_int_MatR_const_RangeR(cv::videostab::NullDeblurer* instance, int unnamed, cv::Mat* unnamed_1, const cv::Range* unnamed_2, Result_void* ocvrs_return) {
		try {
			instance->deblur(unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_NullFrameSource_delete(cv::videostab::NullFrameSource* instance) {
			delete instance;
	}
	
	void cv_videostab_NullFrameSource_reset(cv::videostab::NullFrameSource* instance, Result_void* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_NullFrameSource_nextFrame(cv::videostab::NullFrameSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_NullInpainter_delete(cv::videostab::NullInpainter* instance) {
			delete instance;
	}
	
	void cv_videostab_NullInpainter_inpaint_int_MatR_MatR(cv::videostab::NullInpainter* instance, int unnamed, cv::Mat* unnamed_1, cv::Mat* unnamed_2, Result_void* ocvrs_return) {
		try {
			instance->inpaint(unnamed, *unnamed_1, *unnamed_2);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_NullLog_delete(cv::videostab::NullLog* instance) {
			delete instance;
	}
	
	void cv_videostab_NullLog_print_const_charX(cv::videostab::NullLog* instance, const char* unnamed, Result_void* ocvrs_return) {
		try {
			instance->print(unnamed);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_NullOutlierRejector_delete(cv::videostab::NullOutlierRejector* instance) {
			delete instance;
	}
	
	void cv_videostab_NullOutlierRejector_process_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::videostab::NullOutlierRejector* instance, cv::Size* frameSize, const cv::_InputArray* points0, const cv::_InputArray* points1, const cv::_OutputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->process(*frameSize, *points0, *points1, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_NullWobbleSuppressor_delete(cv::videostab::NullWobbleSuppressor* instance) {
			delete instance;
	}
	
	void cv_videostab_NullWobbleSuppressor_suppress_int_const_MatR_MatR(cv::videostab::NullWobbleSuppressor* instance, int idx, const cv::Mat* frame, cv::Mat* result, Result_void* ocvrs_return) {
		try {
			instance->suppress(idx, *frame, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_OnePassStabilizer_delete(cv::videostab::OnePassStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_OnePassStabilizer_OnePassStabilizer(Result<cv::videostab::OnePassStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::OnePassStabilizer* ret = new cv::videostab::OnePassStabilizer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::OnePassStabilizer*>, ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_setMotionFilter_PtrLMotionFilterBaseG(cv::videostab::OnePassStabilizer* instance, cv::Ptr<cv::videostab::MotionFilterBase>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotionFilter(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_motionFilter_const(const cv::videostab::OnePassStabilizer* instance, Result<cv::Ptr<cv::videostab::MotionFilterBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::MotionFilterBase> ret = instance->motionFilter();
			Ok(new cv::Ptr<cv::videostab::MotionFilterBase>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::MotionFilterBase>*>, ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_reset(cv::videostab::OnePassStabilizer* instance, Result_void* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_OnePassStabilizer_nextFrame(cv::videostab::OnePassStabilizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	cv::videostab::SparsePyrLkOptFlowEstimator* cv_PyrLkOptFlowEstimatorBase_to_SparsePyrLkOptFlowEstimator(cv::videostab::PyrLkOptFlowEstimatorBase* instance) {
		return dynamic_cast<cv::videostab::SparsePyrLkOptFlowEstimator*>(instance);
	}
	
	void cv_PyrLkOptFlowEstimatorBase_delete(cv::videostab::PyrLkOptFlowEstimatorBase* instance) {
			delete instance;
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_PyrLkOptFlowEstimatorBase(Result<cv::videostab::PyrLkOptFlowEstimatorBase*>* ocvrs_return) {
		try {
			cv::videostab::PyrLkOptFlowEstimatorBase* ret = new cv::videostab::PyrLkOptFlowEstimatorBase();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::PyrLkOptFlowEstimatorBase*>, ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_setWinSize_Size(cv::videostab::PyrLkOptFlowEstimatorBase* instance, cv::Size* val, Result_void* ocvrs_return) {
		try {
			instance->setWinSize(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_winSize_const(const cv::videostab::PyrLkOptFlowEstimatorBase* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->winSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_setMaxLevel_int(cv::videostab::PyrLkOptFlowEstimatorBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setMaxLevel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_PyrLkOptFlowEstimatorBase_maxLevel_const(const cv::videostab::PyrLkOptFlowEstimatorBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->maxLevel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	int cv_videostab_RansacParams_getPropSize_const(const cv::videostab::RansacParams* instance) {
			int ret = instance->size;
			return ret;
	}
	
	void cv_videostab_RansacParams_setPropSize_int(cv::videostab::RansacParams* instance, int val) {
			instance->size = val;
	}
	
	float cv_videostab_RansacParams_getPropThresh_const(const cv::videostab::RansacParams* instance) {
			float ret = instance->thresh;
			return ret;
	}
	
	void cv_videostab_RansacParams_setPropThresh_float(cv::videostab::RansacParams* instance, float val) {
			instance->thresh = val;
	}
	
	float cv_videostab_RansacParams_getPropEps_const(const cv::videostab::RansacParams* instance) {
			float ret = instance->eps;
			return ret;
	}
	
	void cv_videostab_RansacParams_setPropEps_float(cv::videostab::RansacParams* instance, float val) {
			instance->eps = val;
	}
	
	float cv_videostab_RansacParams_getPropProb_const(const cv::videostab::RansacParams* instance) {
			float ret = instance->prob;
			return ret;
	}
	
	void cv_videostab_RansacParams_setPropProb_float(cv::videostab::RansacParams* instance, float val) {
			instance->prob = val;
	}
	
	void cv_RansacParams_delete(cv::videostab::RansacParams* instance) {
			delete instance;
	}
	
	void cv_videostab_RansacParams_RansacParams(Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams* ret = new cv::videostab::RansacParams();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::RansacParams*>, ocvrs_return);
	}
	
	void cv_videostab_RansacParams_RansacParams_int_float_float_float(int size, float thresh, float eps, float prob, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams* ret = new cv::videostab::RansacParams(size, thresh, eps, prob);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::RansacParams*>, ocvrs_return);
	}
	
	void cv_videostab_RansacParams_niters_const(const cv::videostab::RansacParams* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->niters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_RansacParams_default2dMotion_MotionModel(cv::videostab::MotionModel model, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams ret = cv::videostab::RansacParams::default2dMotion(model);
			Ok(new cv::videostab::RansacParams(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::RansacParams*>, ocvrs_return);
	}
	
	cv::videostab::PyrLkOptFlowEstimatorBase* cv_SparsePyrLkOptFlowEstimator_to_PyrLkOptFlowEstimatorBase(cv::videostab::SparsePyrLkOptFlowEstimator* instance) {
		return dynamic_cast<cv::videostab::PyrLkOptFlowEstimatorBase*>(instance);
	}
	
	void cv_SparsePyrLkOptFlowEstimator_delete(cv::videostab::SparsePyrLkOptFlowEstimator* instance) {
			delete instance;
	}
	
	void cv_videostab_SparsePyrLkOptFlowEstimator_run_const__InputArrayR_const__InputArrayR_const__InputArrayR_const__InputOutputArrayR_const__OutputArrayR_const__OutputArrayR(cv::videostab::SparsePyrLkOptFlowEstimator* instance, const cv::_InputArray* frame0, const cv::_InputArray* frame1, const cv::_InputArray* points0, const cv::_InputOutputArray* points1, const cv::_OutputArray* status, const cv::_OutputArray* errors, Result_void* ocvrs_return) {
		try {
			instance->run(*frame0, *frame1, *points0, *points1, *status, *errors);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setLog_PtrLILogG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::ILog>* ilog, Result_void* ocvrs_return) {
		try {
			instance->setLog(*ilog);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_log_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::ILog>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ILog> ret = instance->log();
			Ok(new cv::Ptr<cv::videostab::ILog>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::ILog>*>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setRadius_int(cv::videostab::StabilizerBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setRadius(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_radius_const(const cv::videostab::StabilizerBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->radius();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setFrameSource_PtrLIFrameSourceG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::IFrameSource>* val, Result_void* ocvrs_return) {
		try {
			instance->setFrameSource(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_frameSource_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::IFrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IFrameSource> ret = instance->frameSource();
			Ok(new cv::Ptr<cv::videostab::IFrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::IFrameSource>*>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setMaskSource_const_PtrLIFrameSourceGR(cv::videostab::StabilizerBase* instance, const cv::Ptr<cv::videostab::IFrameSource>* val, Result_void* ocvrs_return) {
		try {
			instance->setMaskSource(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_maskSource_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::IFrameSource>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IFrameSource> ret = instance->maskSource();
			Ok(new cv::Ptr<cv::videostab::IFrameSource>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::IFrameSource>*>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setMotionEstimator_PtrLImageMotionEstimatorBaseG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotionEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_motionEstimator_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::ImageMotionEstimatorBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ImageMotionEstimatorBase> ret = instance->motionEstimator();
			Ok(new cv::Ptr<cv::videostab::ImageMotionEstimatorBase>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::ImageMotionEstimatorBase>*>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setDeblurer_PtrLDeblurerBaseG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::DeblurerBase>* val, Result_void* ocvrs_return) {
		try {
			instance->setDeblurer(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_deblurrer_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::DeblurerBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::DeblurerBase> ret = instance->deblurrer();
			Ok(new cv::Ptr<cv::videostab::DeblurerBase>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::DeblurerBase>*>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setTrimRatio_float(cv::videostab::StabilizerBase* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setTrimRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_trimRatio_const(const cv::videostab::StabilizerBase* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->trimRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setCorrectionForInclusion_bool(cv::videostab::StabilizerBase* instance, bool val, Result_void* ocvrs_return) {
		try {
			instance->setCorrectionForInclusion(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_doCorrectionForInclusion_const(const cv::videostab::StabilizerBase* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->doCorrectionForInclusion();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setBorderMode_int(cv::videostab::StabilizerBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setBorderMode(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_borderMode_const(const cv::videostab::StabilizerBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->borderMode();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_setInpainter_PtrLInpainterBaseG(cv::videostab::StabilizerBase* instance, cv::Ptr<cv::videostab::InpainterBase>* val, Result_void* ocvrs_return) {
		try {
			instance->setInpainter(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_StabilizerBase_inpainter_const(const cv::videostab::StabilizerBase* instance, Result<cv::Ptr<cv::videostab::InpainterBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::InpainterBase> ret = instance->inpainter();
			Ok(new cv::Ptr<cv::videostab::InpainterBase>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::InpainterBase>*>, ocvrs_return);
	}
	
	void cv_ToFileMotionWriter_delete(cv::videostab::ToFileMotionWriter* instance) {
			delete instance;
	}
	
	void cv_videostab_ToFileMotionWriter_ToFileMotionWriter_const_StringR_PtrLImageMotionEstimatorBaseG(const char* path, cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* estimator, Result<cv::videostab::ToFileMotionWriter*>* ocvrs_return) {
		try {
			cv::videostab::ToFileMotionWriter* ret = new cv::videostab::ToFileMotionWriter(std::string(path), *estimator);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::ToFileMotionWriter*>, ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_setMotionModel_MotionModel(cv::videostab::ToFileMotionWriter* instance, cv::videostab::MotionModel val, Result_void* ocvrs_return) {
		try {
			instance->setMotionModel(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_motionModel_const(const cv::videostab::ToFileMotionWriter* instance, Result<cv::videostab::MotionModel>* ocvrs_return) {
		try {
			cv::videostab::MotionModel ret = instance->motionModel();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::MotionModel>, ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_setFrameMask_const__InputArrayR(cv::videostab::ToFileMotionWriter* instance, const cv::_InputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->setFrameMask(*mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_ToFileMotionWriter_estimate_const_MatR_const_MatR_boolX(cv::videostab::ToFileMotionWriter* instance, const cv::Mat* frame0, const cv::Mat* frame1, bool* ok, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->estimate(*frame0, *frame1, ok);
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_TranslationBasedLocalOutlierRejector_delete(cv::videostab::TranslationBasedLocalOutlierRejector* instance) {
			delete instance;
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_TranslationBasedLocalOutlierRejector(Result<cv::videostab::TranslationBasedLocalOutlierRejector*>* ocvrs_return) {
		try {
			cv::videostab::TranslationBasedLocalOutlierRejector* ret = new cv::videostab::TranslationBasedLocalOutlierRejector();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::TranslationBasedLocalOutlierRejector*>, ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_setCellSize_Size(cv::videostab::TranslationBasedLocalOutlierRejector* instance, cv::Size* val, Result_void* ocvrs_return) {
		try {
			instance->setCellSize(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_cellSize_const(const cv::videostab::TranslationBasedLocalOutlierRejector* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->cellSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_setRansacParams_RansacParams(cv::videostab::TranslationBasedLocalOutlierRejector* instance, cv::videostab::RansacParams* val, Result_void* ocvrs_return) {
		try {
			instance->setRansacParams(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_ransacParams_const(const cv::videostab::TranslationBasedLocalOutlierRejector* instance, Result<cv::videostab::RansacParams*>* ocvrs_return) {
		try {
			cv::videostab::RansacParams ret = instance->ransacParams();
			Ok(new cv::videostab::RansacParams(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::RansacParams*>, ocvrs_return);
	}
	
	void cv_videostab_TranslationBasedLocalOutlierRejector_process_Size_const__InputArrayR_const__InputArrayR_const__OutputArrayR(cv::videostab::TranslationBasedLocalOutlierRejector* instance, cv::Size* frameSize, const cv::_InputArray* points0, const cv::_InputArray* points1, const cv::_OutputArray* mask, Result_void* ocvrs_return) {
		try {
			instance->process(*frameSize, *points0, *points1, *mask);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_TwoPassStabilizer_delete(cv::videostab::TwoPassStabilizer* instance) {
			delete instance;
	}
	
	void cv_videostab_TwoPassStabilizer_TwoPassStabilizer(Result<cv::videostab::TwoPassStabilizer*>* ocvrs_return) {
		try {
			cv::videostab::TwoPassStabilizer* ret = new cv::videostab::TwoPassStabilizer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::TwoPassStabilizer*>, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_setMotionStabilizer_PtrLIMotionStabilizerG(cv::videostab::TwoPassStabilizer* instance, cv::Ptr<cv::videostab::IMotionStabilizer>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotionStabilizer(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_motionStabilizer_const(const cv::videostab::TwoPassStabilizer* instance, Result<cv::Ptr<cv::videostab::IMotionStabilizer>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::IMotionStabilizer> ret = instance->motionStabilizer();
			Ok(new cv::Ptr<cv::videostab::IMotionStabilizer>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::IMotionStabilizer>*>, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_setWobbleSuppressor_PtrLWobbleSuppressorBaseG(cv::videostab::TwoPassStabilizer* instance, cv::Ptr<cv::videostab::WobbleSuppressorBase>* val, Result_void* ocvrs_return) {
		try {
			instance->setWobbleSuppressor(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_wobbleSuppressor_const(const cv::videostab::TwoPassStabilizer* instance, Result<cv::Ptr<cv::videostab::WobbleSuppressorBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::WobbleSuppressorBase> ret = instance->wobbleSuppressor();
			Ok(new cv::Ptr<cv::videostab::WobbleSuppressorBase>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::WobbleSuppressorBase>*>, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_setEstimateTrimRatio_bool(cv::videostab::TwoPassStabilizer* instance, bool val, Result_void* ocvrs_return) {
		try {
			instance->setEstimateTrimRatio(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_mustEstimateTrimaRatio_const(const cv::videostab::TwoPassStabilizer* instance, Result<bool>* ocvrs_return) {
		try {
			bool ret = instance->mustEstimateTrimaRatio();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<bool>, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_reset(cv::videostab::TwoPassStabilizer* instance, Result_void* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_TwoPassStabilizer_nextFrame(cv::videostab::TwoPassStabilizer* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_VideoFileSource_delete(cv::videostab::VideoFileSource* instance) {
			delete instance;
	}
	
	void cv_videostab_VideoFileSource_VideoFileSource_const_StringR_bool(const char* path, bool volatileFrame, Result<cv::videostab::VideoFileSource*>* ocvrs_return) {
		try {
			cv::videostab::VideoFileSource* ret = new cv::videostab::VideoFileSource(std::string(path), volatileFrame);
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::VideoFileSource*>, ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_reset(cv::videostab::VideoFileSource* instance, Result_void* ocvrs_return) {
		try {
			instance->reset();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_nextFrame(cv::videostab::VideoFileSource* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			cv::Mat ret = instance->nextFrame();
			Ok(new cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_width(cv::videostab::VideoFileSource* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->width();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_height(cv::videostab::VideoFileSource* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->height();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_count(cv::videostab::VideoFileSource* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->count();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_VideoFileSource_fps(cv::videostab::VideoFileSource* instance, Result<double>* ocvrs_return) {
		try {
			double ret = instance->fps();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<double>, ocvrs_return);
	}
	
	void cv_WeightingDeblurer_delete(cv::videostab::WeightingDeblurer* instance) {
			delete instance;
	}
	
	void cv_videostab_WeightingDeblurer_WeightingDeblurer(Result<cv::videostab::WeightingDeblurer*>* ocvrs_return) {
		try {
			cv::videostab::WeightingDeblurer* ret = new cv::videostab::WeightingDeblurer();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::videostab::WeightingDeblurer*>, ocvrs_return);
	}
	
	void cv_videostab_WeightingDeblurer_setSensitivity_float(cv::videostab::WeightingDeblurer* instance, float val, Result_void* ocvrs_return) {
		try {
			instance->setSensitivity(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WeightingDeblurer_sensitivity_const(const cv::videostab::WeightingDeblurer* instance, Result<float>* ocvrs_return) {
		try {
			float ret = instance->sensitivity();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<float>, ocvrs_return);
	}
	
	void cv_videostab_WeightingDeblurer_deblur_int_MatR_const_RangeR(cv::videostab::WeightingDeblurer* instance, int idx, cv::Mat* frame, const cv::Range* range, Result_void* ocvrs_return) {
		try {
			instance->deblur(idx, *frame, *range);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setMotionEstimator_PtrLImageMotionEstimatorBaseG(cv::videostab::WobbleSuppressorBase* instance, cv::Ptr<cv::videostab::ImageMotionEstimatorBase>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotionEstimator(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_motionEstimator_const(const cv::videostab::WobbleSuppressorBase* instance, Result<cv::Ptr<cv::videostab::ImageMotionEstimatorBase>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::videostab::ImageMotionEstimatorBase> ret = instance->motionEstimator();
			Ok(new cv::Ptr<cv::videostab::ImageMotionEstimatorBase>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::videostab::ImageMotionEstimatorBase>*>, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_suppress_int_const_MatR_MatR(cv::videostab::WobbleSuppressorBase* instance, int idx, const cv::Mat* frame, cv::Mat* result, Result_void* ocvrs_return) {
		try {
			instance->suppress(idx, *frame, *result);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setFrameCount_int(cv::videostab::WobbleSuppressorBase* instance, int val, Result_void* ocvrs_return) {
		try {
			instance->setFrameCount(val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_frameCount_const(const cv::videostab::WobbleSuppressorBase* instance, Result<int>* ocvrs_return) {
		try {
			int ret = instance->frameCount();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<int>, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setMotions_const_vectorLMatGR(cv::videostab::WobbleSuppressorBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_motions_const(const cv::videostab::WobbleSuppressorBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setMotions2_const_vectorLMatGR(cv::videostab::WobbleSuppressorBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setMotions2(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_motions2_const(const cv::videostab::WobbleSuppressorBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->motions2();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_setStabilizationMotions_const_vectorLMatGR(cv::videostab::WobbleSuppressorBase* instance, const std::vector<cv::Mat>* val, Result_void* ocvrs_return) {
		try {
			instance->setStabilizationMotions(*val);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_videostab_WobbleSuppressorBase_stabilizationMotions_const(const cv::videostab::WobbleSuppressorBase* instance, Result<std::vector<cv::Mat>*>* ocvrs_return) {
		try {
			const std::vector<cv::Mat> ret = instance->stabilizationMotions();
			Ok(new const std::vector<cv::Mat>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<std::vector<cv::Mat>*>, ocvrs_return);
	}
	
}
