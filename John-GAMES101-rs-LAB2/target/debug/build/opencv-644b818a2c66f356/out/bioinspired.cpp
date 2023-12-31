#include "bioinspired.hpp"
#include "bioinspired_types.hpp"

extern "C" {
	void cv_bioinspired_Retina_getInputSize(cv::bioinspired::Retina* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getInputSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getOutputSize(cv::bioinspired::Retina* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getOutputSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_setup_String_const_bool(cv::bioinspired::Retina* instance, char* retinaParameterFile, const bool applyDefaultSetupOnFailure, Result_void* ocvrs_return) {
		try {
			instance->setup(std::string(retinaParameterFile), applyDefaultSetupOnFailure);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_setup_FileStorageR_const_bool(cv::bioinspired::Retina* instance, cv::FileStorage* fs, const bool applyDefaultSetupOnFailure, Result_void* ocvrs_return) {
		try {
			instance->setup(*fs, applyDefaultSetupOnFailure);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_setup_RetinaParameters(cv::bioinspired::Retina* instance, cv::bioinspired::RetinaParameters* newParameters, Result_void* ocvrs_return) {
		try {
			instance->setup(*newParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getParameters(cv::bioinspired::Retina* instance, Result<cv::bioinspired::RetinaParameters*>* ocvrs_return) {
		try {
			cv::bioinspired::RetinaParameters ret = instance->getParameters();
			Ok(new cv::bioinspired::RetinaParameters(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::bioinspired::RetinaParameters*>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_printSetup(cv::bioinspired::Retina* instance, Result<void*>* ocvrs_return) {
		try {
			const cv::String ret = instance->printSetup();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_write_const_String(const cv::bioinspired::Retina* instance, char* fs, Result_void* ocvrs_return) {
		try {
			instance->write(std::string(fs));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_write_const_FileStorageR(const cv::bioinspired::Retina* instance, cv::FileStorage* fs, Result_void* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_setupOPLandIPLParvoChannel_const_bool_const_bool_const_float_const_float_const_float_const_float_const_float_const_float_const_float(cv::bioinspired::Retina* instance, const bool colorMode, const bool normaliseOutput, const float photoreceptorsLocalAdaptationSensitivity, const float photoreceptorsTemporalConstant, const float photoreceptorsSpatialConstant, const float horizontalCellsGain, const float HcellsTemporalConstant, const float HcellsSpatialConstant, const float ganglionCellsSensitivity, Result_void* ocvrs_return) {
		try {
			instance->setupOPLandIPLParvoChannel(colorMode, normaliseOutput, photoreceptorsLocalAdaptationSensitivity, photoreceptorsTemporalConstant, photoreceptorsSpatialConstant, horizontalCellsGain, HcellsTemporalConstant, HcellsSpatialConstant, ganglionCellsSensitivity);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_setupIPLMagnoChannel_const_bool_const_float_const_float_const_float_const_float_const_float_const_float_const_float(cv::bioinspired::Retina* instance, const bool normaliseOutput, const float parasolCells_beta, const float parasolCells_tau, const float parasolCells_k, const float amacrinCellsTemporalCutFrequency, const float V0CompressionParameter, const float localAdaptintegration_tau, const float localAdaptintegration_k, Result_void* ocvrs_return) {
		try {
			instance->setupIPLMagnoChannel(normaliseOutput, parasolCells_beta, parasolCells_tau, parasolCells_k, amacrinCellsTemporalCutFrequency, V0CompressionParameter, localAdaptintegration_tau, localAdaptintegration_k);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_run_const__InputArrayR(cv::bioinspired::Retina* instance, const cv::_InputArray* inputImage, Result_void* ocvrs_return) {
		try {
			instance->run(*inputImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_applyFastToneMapping_const__InputArrayR_const__OutputArrayR(cv::bioinspired::Retina* instance, const cv::_InputArray* inputImage, const cv::_OutputArray* outputToneMappedImage, Result_void* ocvrs_return) {
		try {
			instance->applyFastToneMapping(*inputImage, *outputToneMappedImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getParvo_const__OutputArrayR(cv::bioinspired::Retina* instance, const cv::_OutputArray* retinaOutput_parvo, Result_void* ocvrs_return) {
		try {
			instance->getParvo(*retinaOutput_parvo);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getParvoRAW_const__OutputArrayR(cv::bioinspired::Retina* instance, const cv::_OutputArray* retinaOutput_parvo, Result_void* ocvrs_return) {
		try {
			instance->getParvoRAW(*retinaOutput_parvo);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getMagno_const__OutputArrayR(cv::bioinspired::Retina* instance, const cv::_OutputArray* retinaOutput_magno, Result_void* ocvrs_return) {
		try {
			instance->getMagno(*retinaOutput_magno);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getMagnoRAW_const__OutputArrayR(cv::bioinspired::Retina* instance, const cv::_OutputArray* retinaOutput_magno, Result_void* ocvrs_return) {
		try {
			instance->getMagnoRAW(*retinaOutput_magno);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getMagnoRAW_const(const cv::bioinspired::Retina* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->getMagnoRAW();
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_getParvoRAW_const(const cv::bioinspired::Retina* instance, Result<cv::Mat*>* ocvrs_return) {
		try {
			const cv::Mat ret = instance->getParvoRAW();
			Ok(new const cv::Mat(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Mat*>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_setColorSaturation_const_bool_const_float(cv::bioinspired::Retina* instance, const bool saturateColors, const float colorSaturationValue, Result_void* ocvrs_return) {
		try {
			instance->setColorSaturation(saturateColors, colorSaturationValue);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_clearBuffers(cv::bioinspired::Retina* instance, Result_void* ocvrs_return) {
		try {
			instance->clearBuffers();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_activateMovingContoursProcessing_const_bool(cv::bioinspired::Retina* instance, const bool activate, Result_void* ocvrs_return) {
		try {
			instance->activateMovingContoursProcessing(activate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_activateContoursProcessing_const_bool(cv::bioinspired::Retina* instance, const bool activate, Result_void* ocvrs_return) {
		try {
			instance->activateContoursProcessing(activate);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_create_Size(cv::Size* inputSize, Result<cv::Ptr<cv::bioinspired::Retina>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bioinspired::Retina> ret = cv::bioinspired::Retina::create(*inputSize);
			Ok(new cv::Ptr<cv::bioinspired::Retina>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::bioinspired::Retina>*>, ocvrs_return);
	}
	
	void cv_bioinspired_Retina_create_Size_const_bool_int_const_bool_const_float_const_float(cv::Size* inputSize, const bool colorMode, int colorSamplingMethod, const bool useRetinaLogSampling, const float reductionFactor, const float samplingStrength, Result<cv::Ptr<cv::bioinspired::Retina>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bioinspired::Retina> ret = cv::bioinspired::Retina::create(*inputSize, colorMode, colorSamplingMethod, useRetinaLogSampling, reductionFactor, samplingStrength);
			Ok(new cv::Ptr<cv::bioinspired::Retina>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::bioinspired::Retina>*>, ocvrs_return);
	}
	
	void cv_bioinspired_RetinaFastToneMapping_applyFastToneMapping_const__InputArrayR_const__OutputArrayR(cv::bioinspired::RetinaFastToneMapping* instance, const cv::_InputArray* inputImage, const cv::_OutputArray* outputToneMappedImage, Result_void* ocvrs_return) {
		try {
			instance->applyFastToneMapping(*inputImage, *outputToneMappedImage);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_RetinaFastToneMapping_setup_const_float_const_float_const_float(cv::bioinspired::RetinaFastToneMapping* instance, const float photoreceptorsNeighborhoodRadius, const float ganglioncellsNeighborhoodRadius, const float meanLuminanceModulatorK, Result_void* ocvrs_return) {
		try {
			instance->setup(photoreceptorsNeighborhoodRadius, ganglioncellsNeighborhoodRadius, meanLuminanceModulatorK);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_RetinaFastToneMapping_create_Size(cv::Size* inputSize, Result<cv::Ptr<cv::bioinspired::RetinaFastToneMapping>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bioinspired::RetinaFastToneMapping> ret = cv::bioinspired::RetinaFastToneMapping::create(*inputSize);
			Ok(new cv::Ptr<cv::bioinspired::RetinaFastToneMapping>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::bioinspired::RetinaFastToneMapping>*>, ocvrs_return);
	}
	
	void cv_bioinspired_RetinaParameters_getPropOPLandIplParvo_const(const cv::bioinspired::RetinaParameters* instance, cv::bioinspired::RetinaParameters::OPLandIplParvoParameters* ocvrs_return) {
			cv::bioinspired::RetinaParameters::OPLandIplParvoParameters ret = instance->OPLandIplParvo;
			*ocvrs_return = ret;
	}
	
	void cv_bioinspired_RetinaParameters_setPropOPLandIplParvo_OPLandIplParvoParameters(cv::bioinspired::RetinaParameters* instance, cv::bioinspired::RetinaParameters::OPLandIplParvoParameters* val) {
			instance->OPLandIplParvo = *val;
	}
	
	void cv_bioinspired_RetinaParameters_getPropIplMagno_const(const cv::bioinspired::RetinaParameters* instance, cv::bioinspired::RetinaParameters::IplMagnoParameters* ocvrs_return) {
			cv::bioinspired::RetinaParameters::IplMagnoParameters ret = instance->IplMagno;
			*ocvrs_return = ret;
	}
	
	void cv_bioinspired_RetinaParameters_setPropIplMagno_IplMagnoParameters(cv::bioinspired::RetinaParameters* instance, cv::bioinspired::RetinaParameters::IplMagnoParameters* val) {
			instance->IplMagno = *val;
	}
	
	void cv_RetinaParameters_delete(cv::bioinspired::RetinaParameters* instance) {
			delete instance;
	}
	
	void cv_bioinspired_RetinaParameters_IplMagnoParameters_IplMagnoParameters(Result<cv::bioinspired::RetinaParameters::IplMagnoParameters>* ocvrs_return) {
		try {
			cv::bioinspired::RetinaParameters::IplMagnoParameters ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::bioinspired::RetinaParameters::IplMagnoParameters>, ocvrs_return);
	}
	
	void cv_bioinspired_RetinaParameters_OPLandIplParvoParameters_OPLandIplParvoParameters(Result<cv::bioinspired::RetinaParameters::OPLandIplParvoParameters>* ocvrs_return) {
		try {
			cv::bioinspired::RetinaParameters::OPLandIplParvoParameters ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::bioinspired::RetinaParameters::OPLandIplParvoParameters>, ocvrs_return);
	}
	
	void cv_bioinspired_SegmentationParameters_SegmentationParameters(Result<cv::bioinspired::SegmentationParameters>* ocvrs_return) {
		try {
			cv::bioinspired::SegmentationParameters ret;
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::bioinspired::SegmentationParameters>, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_getSize(cv::bioinspired::TransientAreasSegmentationModule* instance, Result<cv::Size>* ocvrs_return) {
		try {
			cv::Size ret = instance->getSize();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::Size>, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_setup_String_const_bool(cv::bioinspired::TransientAreasSegmentationModule* instance, char* segmentationParameterFile, const bool applyDefaultSetupOnFailure, Result_void* ocvrs_return) {
		try {
			instance->setup(std::string(segmentationParameterFile), applyDefaultSetupOnFailure);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_setup_FileStorageR_const_bool(cv::bioinspired::TransientAreasSegmentationModule* instance, cv::FileStorage* fs, const bool applyDefaultSetupOnFailure, Result_void* ocvrs_return) {
		try {
			instance->setup(*fs, applyDefaultSetupOnFailure);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_setup_SegmentationParameters(cv::bioinspired::TransientAreasSegmentationModule* instance, cv::bioinspired::SegmentationParameters* newParameters, Result_void* ocvrs_return) {
		try {
			instance->setup(*newParameters);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_getParameters(cv::bioinspired::TransientAreasSegmentationModule* instance, Result<cv::bioinspired::SegmentationParameters>* ocvrs_return) {
		try {
			cv::bioinspired::SegmentationParameters ret = instance->getParameters();
			Ok(ret, ocvrs_return);
		} OCVRS_CATCH(Result<cv::bioinspired::SegmentationParameters>, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_printSetup(cv::bioinspired::TransientAreasSegmentationModule* instance, Result<void*>* ocvrs_return) {
		try {
			const cv::String ret = instance->printSetup();
			Ok(ocvrs_create_string(ret.c_str()), ocvrs_return);
		} OCVRS_CATCH(Result<void*>, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_write_const_String(const cv::bioinspired::TransientAreasSegmentationModule* instance, char* fs, Result_void* ocvrs_return) {
		try {
			instance->write(std::string(fs));
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_write_const_FileStorageR(const cv::bioinspired::TransientAreasSegmentationModule* instance, cv::FileStorage* fs, Result_void* ocvrs_return) {
		try {
			instance->write(*fs);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_run_const__InputArrayR_const_int(cv::bioinspired::TransientAreasSegmentationModule* instance, const cv::_InputArray* inputToSegment, const int channelIndex, Result_void* ocvrs_return) {
		try {
			instance->run(*inputToSegment, channelIndex);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_getSegmentationPicture_const__OutputArrayR(cv::bioinspired::TransientAreasSegmentationModule* instance, const cv::_OutputArray* transientAreas, Result_void* ocvrs_return) {
		try {
			instance->getSegmentationPicture(*transientAreas);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_clearAllBuffers(cv::bioinspired::TransientAreasSegmentationModule* instance, Result_void* ocvrs_return) {
		try {
			instance->clearAllBuffers();
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_bioinspired_TransientAreasSegmentationModule_create_Size(cv::Size* inputSize, Result<cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule> ret = cv::bioinspired::TransientAreasSegmentationModule::create(*inputSize);
			Ok(new cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::bioinspired::TransientAreasSegmentationModule>*>, ocvrs_return);
	}
	
}
