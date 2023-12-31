#include "ocvrs_common.hpp"
#include <opencv2/plot.hpp>
#include "plot_types.hpp"

extern "C" {
	void cv_plot_Plot2d_setMinX_double(cv::plot::Plot2d* instance, double _plotMinX, Result_void* ocvrs_return) {
		try {
			instance->setMinX(_plotMinX);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setMinY_double(cv::plot::Plot2d* instance, double _plotMinY, Result_void* ocvrs_return) {
		try {
			instance->setMinY(_plotMinY);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setMaxX_double(cv::plot::Plot2d* instance, double _plotMaxX, Result_void* ocvrs_return) {
		try {
			instance->setMaxX(_plotMaxX);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setMaxY_double(cv::plot::Plot2d* instance, double _plotMaxY, Result_void* ocvrs_return) {
		try {
			instance->setMaxY(_plotMaxY);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotLineWidth_int(cv::plot::Plot2d* instance, int _plotLineWidth, Result_void* ocvrs_return) {
		try {
			instance->setPlotLineWidth(_plotLineWidth);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setNeedPlotLine_bool(cv::plot::Plot2d* instance, bool _needPlotLine, Result_void* ocvrs_return) {
		try {
			instance->setNeedPlotLine(_needPlotLine);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotLineColor_Scalar(cv::plot::Plot2d* instance, cv::Scalar* _plotLineColor, Result_void* ocvrs_return) {
		try {
			instance->setPlotLineColor(*_plotLineColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotBackgroundColor_Scalar(cv::plot::Plot2d* instance, cv::Scalar* _plotBackgroundColor, Result_void* ocvrs_return) {
		try {
			instance->setPlotBackgroundColor(*_plotBackgroundColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotAxisColor_Scalar(cv::plot::Plot2d* instance, cv::Scalar* _plotAxisColor, Result_void* ocvrs_return) {
		try {
			instance->setPlotAxisColor(*_plotAxisColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotGridColor_Scalar(cv::plot::Plot2d* instance, cv::Scalar* _plotGridColor, Result_void* ocvrs_return) {
		try {
			instance->setPlotGridColor(*_plotGridColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotTextColor_Scalar(cv::plot::Plot2d* instance, cv::Scalar* _plotTextColor, Result_void* ocvrs_return) {
		try {
			instance->setPlotTextColor(*_plotTextColor);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPlotSize_int_int(cv::plot::Plot2d* instance, int _plotSizeWidth, int _plotSizeHeight, Result_void* ocvrs_return) {
		try {
			instance->setPlotSize(_plotSizeWidth, _plotSizeHeight);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setShowGrid_bool(cv::plot::Plot2d* instance, bool needShowGrid, Result_void* ocvrs_return) {
		try {
			instance->setShowGrid(needShowGrid);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setShowText_bool(cv::plot::Plot2d* instance, bool needShowText, Result_void* ocvrs_return) {
		try {
			instance->setShowText(needShowText);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setGridLinesNumber_int(cv::plot::Plot2d* instance, int gridLinesNumber, Result_void* ocvrs_return) {
		try {
			instance->setGridLinesNumber(gridLinesNumber);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setInvertOrientation_bool(cv::plot::Plot2d* instance, bool _invertOrientation, Result_void* ocvrs_return) {
		try {
			instance->setInvertOrientation(_invertOrientation);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_setPointIdxToPrint_int(cv::plot::Plot2d* instance, int pointIdx, Result_void* ocvrs_return) {
		try {
			instance->setPointIdxToPrint(pointIdx);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_render_const__OutputArrayR(cv::plot::Plot2d* instance, const cv::_OutputArray* _plotResult, Result_void* ocvrs_return) {
		try {
			instance->render(*_plotResult);
			Ok(ocvrs_return);
		} OCVRS_CATCH(Result_void, ocvrs_return);
	}
	
	void cv_plot_Plot2d_create_const__InputArrayR(const cv::_InputArray* data, Result<cv::Ptr<cv::plot::Plot2d>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::plot::Plot2d> ret = cv::plot::Plot2d::create(*data);
			Ok(new cv::Ptr<cv::plot::Plot2d>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::plot::Plot2d>*>, ocvrs_return);
	}
	
	void cv_plot_Plot2d_create_const__InputArrayR_const__InputArrayR(const cv::_InputArray* dataX, const cv::_InputArray* dataY, Result<cv::Ptr<cv::plot::Plot2d>*>* ocvrs_return) {
		try {
			cv::Ptr<cv::plot::Plot2d> ret = cv::plot::Plot2d::create(*dataX, *dataY);
			Ok(new cv::Ptr<cv::plot::Plot2d>(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::Ptr<cv::plot::Plot2d>*>, ocvrs_return);
	}
	
}
