extern "C" {
	void cv_PtrOfConjGradSolver_delete(cv::Ptr<cv::ConjGradSolver>* instance) {
			delete instance;
	}
	
	const cv::ConjGradSolver* cv_PtrOfConjGradSolver_get_inner_ptr(const cv::Ptr<cv::ConjGradSolver>* instance) {
		return instance->get();
	}

	cv::ConjGradSolver* cv_PtrOfConjGradSolver_get_inner_ptr_mut(cv::Ptr<cv::ConjGradSolver>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfDownhillSolver_delete(cv::Ptr<cv::DownhillSolver>* instance) {
			delete instance;
	}
	
	const cv::DownhillSolver* cv_PtrOfDownhillSolver_get_inner_ptr(const cv::Ptr<cv::DownhillSolver>* instance) {
		return instance->get();
	}

	cv::DownhillSolver* cv_PtrOfDownhillSolver_get_inner_ptr_mut(cv::Ptr<cv::DownhillSolver>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<cv::FileStorage>* cv_PtrOfFileStorage_new(cv::FileStorage* val) {
			cv::Ptr<cv::FileStorage> ret = cv::Ptr<cv::FileStorage>(val);
			return new cv::Ptr<cv::FileStorage>(ret);
	}
	
	void cv_PtrOfFileStorage_delete(cv::Ptr<cv::FileStorage>* instance) {
			delete instance;
	}
	
	const cv::FileStorage* cv_PtrOfFileStorage_get_inner_ptr(const cv::Ptr<cv::FileStorage>* instance) {
		return instance->get();
	}

	cv::FileStorage* cv_PtrOfFileStorage_get_inner_ptr_mut(cv::Ptr<cv::FileStorage>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFormatted_delete(cv::Ptr<cv::Formatted>* instance) {
			delete instance;
	}
	
	const cv::Formatted* cv_PtrOfFormatted_get_inner_ptr(const cv::Ptr<cv::Formatted>* instance) {
		return instance->get();
	}

	cv::Formatted* cv_PtrOfFormatted_get_inner_ptr_mut(cv::Ptr<cv::Formatted>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfFormatter_delete(cv::Ptr<cv::Formatter>* instance) {
			delete instance;
	}
	
	const cv::Formatter* cv_PtrOfFormatter_get_inner_ptr(const cv::Ptr<cv::Formatter>* instance) {
		return instance->get();
	}

	cv::Formatter* cv_PtrOfFormatter_get_inner_ptr_mut(cv::Ptr<cv::Formatter>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfGpuMat_Allocator_delete(cv::Ptr<cv::cuda::GpuMat::Allocator>* instance) {
			delete instance;
	}
	
	const cv::cuda::GpuMat::Allocator* cv_PtrOfGpuMat_Allocator_get_inner_ptr(const cv::Ptr<cv::cuda::GpuMat::Allocator>* instance) {
		return instance->get();
	}

	cv::cuda::GpuMat::Allocator* cv_PtrOfGpuMat_Allocator_get_inner_ptr_mut(cv::Ptr<cv::cuda::GpuMat::Allocator>* instance) {
		return instance->get();
	}
}

extern "C" {
	void cv_PtrOfMinProblemSolver_Function_delete(cv::Ptr<cv::MinProblemSolver::Function>* instance) {
			delete instance;
	}
	
	const cv::MinProblemSolver::Function* cv_PtrOfMinProblemSolver_Function_get_inner_ptr(const cv::Ptr<cv::MinProblemSolver::Function>* instance) {
		return instance->get();
	}

	cv::MinProblemSolver::Function* cv_PtrOfMinProblemSolver_Function_get_inner_ptr_mut(cv::Ptr<cv::MinProblemSolver::Function>* instance) {
		return instance->get();
	}
}

extern "C" {
	cv::Ptr<float>* cv_PtrOff32_new(float val) {
			cv::Ptr<float> ret = cv::Ptr<float>(new float(val));
			return new cv::Ptr<float>(ret);
	}
	
	void cv_PtrOff32_delete(cv::Ptr<float>* instance) {
			delete instance;
	}
	
	const float* cv_PtrOff32_get_inner_ptr(const cv::Ptr<float>* instance) {
		return instance->get();
	}

	float* cv_PtrOff32_get_inner_ptr_mut(cv::Ptr<float>* instance) {
		return instance->get();
	}
}

extern "C" {
	std::pair<cv::Point2i, cv::Point2i>* cv_TupleOfPoint2i_Point2i_new(cv::Point2i* arg, cv::Point2i* arg_1) {
			std::pair<cv::Point2i, cv::Point2i> ret = std::make_pair(*arg, *arg_1);
			return new std::pair<cv::Point2i, cv::Point2i>(ret);
	}
	
	void cv_TupleOfPoint2i_Point2i_delete(std::pair<cv::Point2i, cv::Point2i>* instance) {
			delete instance;
	}
	
	void cv_TupleOfPoint2i_Point2i_get_0(const std::pair<cv::Point2i, cv::Point2i>* instance, cv::Point2i* ocvrs_return) {
			cv::Point2i ret = std::get<0>(*instance);
			*ocvrs_return = ret;
	}
	
	void cv_TupleOfPoint2i_Point2i_get_1(const std::pair<cv::Point2i, cv::Point2i>* instance, cv::Point2i* ocvrs_return) {
			cv::Point2i ret = std::get<1>(*instance);
			*ocvrs_return = ret;
	}
	
}

extern "C" {
	std::pair<cv::Rect, int>* cv_TupleOfRect_i32_new(cv::Rect* arg, int arg_1) {
			std::pair<cv::Rect, int> ret = std::make_pair(*arg, arg_1);
			return new std::pair<cv::Rect, int>(ret);
	}
	
	void cv_TupleOfRect_i32_delete(std::pair<cv::Rect, int>* instance) {
			delete instance;
	}
	
	void cv_TupleOfRect_i32_get_0(const std::pair<cv::Rect, int>* instance, cv::Rect* ocvrs_return) {
			cv::Rect ret = std::get<0>(*instance);
			*ocvrs_return = ret;
	}
	
	void cv_TupleOfRect_i32_get_1(const std::pair<cv::Rect, int>* instance, int* ocvrs_return) {
			int ret = std::get<1>(*instance);
			*ocvrs_return = ret;
	}
	
}

extern "C" {
	std::pair<cv::UMat, unsigned char>* cv_TupleOfUMat_u8_new(cv::UMat* arg, unsigned char arg_1) {
			std::pair<cv::UMat, unsigned char> ret = std::make_pair(*arg, arg_1);
			return new std::pair<cv::UMat, unsigned char>(ret);
	}
	
	void cv_TupleOfUMat_u8_delete(std::pair<cv::UMat, unsigned char>* instance) {
			delete instance;
	}
	
	void cv_TupleOfUMat_u8_get_0(const std::pair<cv::UMat, unsigned char>* instance, cv::UMat** ocvrs_return) {
			cv::UMat ret = std::get<0>(*instance);
			*ocvrs_return = new cv::UMat(ret);
	}
	
	void cv_TupleOfUMat_u8_get_1(const std::pair<cv::UMat, unsigned char>* instance, unsigned char* ocvrs_return) {
			unsigned char ret = std::get<1>(*instance);
			*ocvrs_return = ret;
	}
	
}

extern "C" {
	std::pair<int, float>* cv_TupleOfi32_f32_new(int arg, float arg_1) {
			std::pair<int, float> ret = std::make_pair(arg, arg_1);
			return new std::pair<int, float>(ret);
	}
	
	void cv_TupleOfi32_f32_delete(std::pair<int, float>* instance) {
			delete instance;
	}
	
	void cv_TupleOfi32_f32_get_0(const std::pair<int, float>* instance, int* ocvrs_return) {
			int ret = std::get<0>(*instance);
			*ocvrs_return = ret;
	}
	
	void cv_TupleOfi32_f32_get_1(const std::pair<int, float>* instance, float* ocvrs_return) {
			float ret = std::get<1>(*instance);
			*ocvrs_return = ret;
	}
	
}

extern "C" {
	std::pair<int, double>* cv_TupleOfi32_f64_new(int arg, double arg_1) {
			std::pair<int, double> ret = std::make_pair(arg, arg_1);
			return new std::pair<int, double>(ret);
	}
	
	void cv_TupleOfi32_f64_delete(std::pair<int, double>* instance) {
			delete instance;
	}
	
	void cv_TupleOfi32_f64_get_0(const std::pair<int, double>* instance, int* ocvrs_return) {
			int ret = std::get<0>(*instance);
			*ocvrs_return = ret;
	}
	
	void cv_TupleOfi32_f64_get_1(const std::pair<int, double>* instance, double* ocvrs_return) {
			double ret = std::get<1>(*instance);
			*ocvrs_return = ret;
	}
	
}

extern "C" {
	std::vector<cv::DMatch>* cv_VectorOfDMatch_new() {
			std::vector<cv::DMatch>* ret = new std::vector<cv::DMatch>();
			return ret;
	}
	
	void cv_VectorOfDMatch_delete(std::vector<cv::DMatch>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfDMatch_len(const std::vector<cv::DMatch>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfDMatch_is_empty(const std::vector<cv::DMatch>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfDMatch_capacity(const std::vector<cv::DMatch>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfDMatch_shrink_to_fit(std::vector<cv::DMatch>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfDMatch_reserve(std::vector<cv::DMatch>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfDMatch_remove(std::vector<cv::DMatch>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfDMatch_swap(std::vector<cv::DMatch>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfDMatch_clear(std::vector<cv::DMatch>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfDMatch_push(std::vector<cv::DMatch>* instance, cv::DMatch* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfDMatch_insert(std::vector<cv::DMatch>* instance, size_t index, cv::DMatch* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfDMatch_get(const std::vector<cv::DMatch>* instance, size_t index, cv::DMatch* ocvrs_return) {
			cv::DMatch ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfDMatch_set(std::vector<cv::DMatch>* instance, size_t index, cv::DMatch* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::DMatch>* cv_VectorOfDMatch_clone(const std::vector<cv::DMatch>* instance) {
			std::vector<cv::DMatch> ret = std::vector<cv::DMatch>(*instance);
			return new std::vector<cv::DMatch>(ret);
	}
	
	const cv::DMatch* cv_VectorOfDMatch_data(const std::vector<cv::DMatch>* instance) {
		return instance->data();
	}
	
	cv::DMatch* cv_VectorOfDMatch_data_mut(std::vector<cv::DMatch>* instance) {
		return instance->data();
	}
	
	std::vector<cv::DMatch>* cv_VectorOfDMatch_from_slice(const cv::DMatch* data, size_t len) {
		return new std::vector<cv::DMatch>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::cuda::GpuMat>* cv_VectorOfGpuMat_new() {
			std::vector<cv::cuda::GpuMat>* ret = new std::vector<cv::cuda::GpuMat>();
			return ret;
	}
	
	void cv_VectorOfGpuMat_delete(std::vector<cv::cuda::GpuMat>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfGpuMat_len(const std::vector<cv::cuda::GpuMat>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfGpuMat_is_empty(const std::vector<cv::cuda::GpuMat>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfGpuMat_capacity(const std::vector<cv::cuda::GpuMat>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfGpuMat_shrink_to_fit(std::vector<cv::cuda::GpuMat>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfGpuMat_reserve(std::vector<cv::cuda::GpuMat>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfGpuMat_remove(std::vector<cv::cuda::GpuMat>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfGpuMat_swap(std::vector<cv::cuda::GpuMat>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfGpuMat_clear(std::vector<cv::cuda::GpuMat>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfGpuMat_push(std::vector<cv::cuda::GpuMat>* instance, cv::cuda::GpuMat* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfGpuMat_insert(std::vector<cv::cuda::GpuMat>* instance, size_t index, cv::cuda::GpuMat* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfGpuMat_get(const std::vector<cv::cuda::GpuMat>* instance, size_t index, cv::cuda::GpuMat** ocvrs_return) {
			cv::cuda::GpuMat ret = (*instance)[index];
			*ocvrs_return = new cv::cuda::GpuMat(ret);
	}
	
	void cv_VectorOfGpuMat_set(std::vector<cv::cuda::GpuMat>* instance, size_t index, cv::cuda::GpuMat* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::KeyPoint>* cv_VectorOfKeyPoint_new() {
			std::vector<cv::KeyPoint>* ret = new std::vector<cv::KeyPoint>();
			return ret;
	}
	
	void cv_VectorOfKeyPoint_delete(std::vector<cv::KeyPoint>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfKeyPoint_len(const std::vector<cv::KeyPoint>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfKeyPoint_is_empty(const std::vector<cv::KeyPoint>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfKeyPoint_capacity(const std::vector<cv::KeyPoint>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfKeyPoint_shrink_to_fit(std::vector<cv::KeyPoint>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfKeyPoint_reserve(std::vector<cv::KeyPoint>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfKeyPoint_remove(std::vector<cv::KeyPoint>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfKeyPoint_swap(std::vector<cv::KeyPoint>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfKeyPoint_clear(std::vector<cv::KeyPoint>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfKeyPoint_push(std::vector<cv::KeyPoint>* instance, cv::KeyPoint* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfKeyPoint_insert(std::vector<cv::KeyPoint>* instance, size_t index, cv::KeyPoint* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfKeyPoint_get(const std::vector<cv::KeyPoint>* instance, size_t index, cv::KeyPoint** ocvrs_return) {
			cv::KeyPoint ret = (*instance)[index];
			*ocvrs_return = new cv::KeyPoint(ret);
	}
	
	void cv_VectorOfKeyPoint_set(std::vector<cv::KeyPoint>* instance, size_t index, cv::KeyPoint* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::Mat>* cv_VectorOfMat_new() {
			std::vector<cv::Mat>* ret = new std::vector<cv::Mat>();
			return ret;
	}
	
	void cv_VectorOfMat_delete(std::vector<cv::Mat>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfMat_len(const std::vector<cv::Mat>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfMat_is_empty(const std::vector<cv::Mat>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfMat_capacity(const std::vector<cv::Mat>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfMat_shrink_to_fit(std::vector<cv::Mat>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfMat_reserve(std::vector<cv::Mat>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfMat_remove(std::vector<cv::Mat>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfMat_swap(std::vector<cv::Mat>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfMat_clear(std::vector<cv::Mat>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfMat_push(std::vector<cv::Mat>* instance, cv::Mat* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfMat_insert(std::vector<cv::Mat>* instance, size_t index, cv::Mat* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfMat_get(const std::vector<cv::Mat>* instance, size_t index, cv::Mat** ocvrs_return) {
			cv::Mat ret = (*instance)[index];
			*ocvrs_return = new cv::Mat(ret);
	}
	
	void cv_VectorOfMat_set(std::vector<cv::Mat>* instance, size_t index, cv::Mat* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::ocl::PlatformInfo>* cv_VectorOfPlatformInfo_new() {
			std::vector<cv::ocl::PlatformInfo>* ret = new std::vector<cv::ocl::PlatformInfo>();
			return ret;
	}
	
	void cv_VectorOfPlatformInfo_delete(std::vector<cv::ocl::PlatformInfo>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPlatformInfo_len(const std::vector<cv::ocl::PlatformInfo>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPlatformInfo_is_empty(const std::vector<cv::ocl::PlatformInfo>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPlatformInfo_capacity(const std::vector<cv::ocl::PlatformInfo>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPlatformInfo_shrink_to_fit(std::vector<cv::ocl::PlatformInfo>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPlatformInfo_reserve(std::vector<cv::ocl::PlatformInfo>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPlatformInfo_remove(std::vector<cv::ocl::PlatformInfo>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPlatformInfo_swap(std::vector<cv::ocl::PlatformInfo>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPlatformInfo_clear(std::vector<cv::ocl::PlatformInfo>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPlatformInfo_push(std::vector<cv::ocl::PlatformInfo>* instance, cv::ocl::PlatformInfo* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPlatformInfo_insert(std::vector<cv::ocl::PlatformInfo>* instance, size_t index, cv::ocl::PlatformInfo* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPlatformInfo_get(const std::vector<cv::ocl::PlatformInfo>* instance, size_t index, cv::ocl::PlatformInfo** ocvrs_return) {
			cv::ocl::PlatformInfo ret = (*instance)[index];
			*ocvrs_return = new cv::ocl::PlatformInfo(ret);
	}
	
	void cv_VectorOfPlatformInfo_set(std::vector<cv::ocl::PlatformInfo>* instance, size_t index, cv::ocl::PlatformInfo* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::Point>* cv_VectorOfPoint_new() {
			std::vector<cv::Point>* ret = new std::vector<cv::Point>();
			return ret;
	}
	
	void cv_VectorOfPoint_delete(std::vector<cv::Point>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPoint_len(const std::vector<cv::Point>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPoint_is_empty(const std::vector<cv::Point>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPoint_capacity(const std::vector<cv::Point>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPoint_shrink_to_fit(std::vector<cv::Point>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPoint_reserve(std::vector<cv::Point>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPoint_remove(std::vector<cv::Point>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPoint_swap(std::vector<cv::Point>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPoint_clear(std::vector<cv::Point>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPoint_push(std::vector<cv::Point>* instance, cv::Point* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPoint_insert(std::vector<cv::Point>* instance, size_t index, cv::Point* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPoint_get(const std::vector<cv::Point>* instance, size_t index, cv::Point* ocvrs_return) {
			cv::Point ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfPoint_set(std::vector<cv::Point>* instance, size_t index, cv::Point* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Point>* cv_VectorOfPoint_clone(const std::vector<cv::Point>* instance) {
			std::vector<cv::Point> ret = std::vector<cv::Point>(*instance);
			return new std::vector<cv::Point>(ret);
	}
	
	void cv_VectorOfPoint_input_array(std::vector<cv::Point>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint_output_array(std::vector<cv::Point>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint_input_output_array(std::vector<cv::Point>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Point* cv_VectorOfPoint_data(const std::vector<cv::Point>* instance) {
		return instance->data();
	}
	
	cv::Point* cv_VectorOfPoint_data_mut(std::vector<cv::Point>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point>* cv_VectorOfPoint_from_slice(const cv::Point* data, size_t len) {
		return new std::vector<cv::Point>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Point2d>* cv_VectorOfPoint2d_new() {
			std::vector<cv::Point2d>* ret = new std::vector<cv::Point2d>();
			return ret;
	}
	
	void cv_VectorOfPoint2d_delete(std::vector<cv::Point2d>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPoint2d_len(const std::vector<cv::Point2d>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPoint2d_is_empty(const std::vector<cv::Point2d>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPoint2d_capacity(const std::vector<cv::Point2d>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPoint2d_shrink_to_fit(std::vector<cv::Point2d>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPoint2d_reserve(std::vector<cv::Point2d>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPoint2d_remove(std::vector<cv::Point2d>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPoint2d_swap(std::vector<cv::Point2d>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPoint2d_clear(std::vector<cv::Point2d>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPoint2d_push(std::vector<cv::Point2d>* instance, cv::Point2d* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPoint2d_insert(std::vector<cv::Point2d>* instance, size_t index, cv::Point2d* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPoint2d_get(const std::vector<cv::Point2d>* instance, size_t index, cv::Point2d* ocvrs_return) {
			cv::Point2d ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfPoint2d_set(std::vector<cv::Point2d>* instance, size_t index, cv::Point2d* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Point2d>* cv_VectorOfPoint2d_clone(const std::vector<cv::Point2d>* instance) {
			std::vector<cv::Point2d> ret = std::vector<cv::Point2d>(*instance);
			return new std::vector<cv::Point2d>(ret);
	}
	
	void cv_VectorOfPoint2d_input_array(std::vector<cv::Point2d>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint2d_output_array(std::vector<cv::Point2d>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint2d_input_output_array(std::vector<cv::Point2d>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Point2d* cv_VectorOfPoint2d_data(const std::vector<cv::Point2d>* instance) {
		return instance->data();
	}
	
	cv::Point2d* cv_VectorOfPoint2d_data_mut(std::vector<cv::Point2d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point2d>* cv_VectorOfPoint2d_from_slice(const cv::Point2d* data, size_t len) {
		return new std::vector<cv::Point2d>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Point2f>* cv_VectorOfPoint2f_new() {
			std::vector<cv::Point2f>* ret = new std::vector<cv::Point2f>();
			return ret;
	}
	
	void cv_VectorOfPoint2f_delete(std::vector<cv::Point2f>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPoint2f_len(const std::vector<cv::Point2f>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPoint2f_is_empty(const std::vector<cv::Point2f>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPoint2f_capacity(const std::vector<cv::Point2f>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPoint2f_shrink_to_fit(std::vector<cv::Point2f>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPoint2f_reserve(std::vector<cv::Point2f>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPoint2f_remove(std::vector<cv::Point2f>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPoint2f_swap(std::vector<cv::Point2f>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPoint2f_clear(std::vector<cv::Point2f>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPoint2f_push(std::vector<cv::Point2f>* instance, cv::Point2f* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPoint2f_insert(std::vector<cv::Point2f>* instance, size_t index, cv::Point2f* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPoint2f_get(const std::vector<cv::Point2f>* instance, size_t index, cv::Point2f* ocvrs_return) {
			cv::Point2f ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfPoint2f_set(std::vector<cv::Point2f>* instance, size_t index, cv::Point2f* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Point2f>* cv_VectorOfPoint2f_clone(const std::vector<cv::Point2f>* instance) {
			std::vector<cv::Point2f> ret = std::vector<cv::Point2f>(*instance);
			return new std::vector<cv::Point2f>(ret);
	}
	
	void cv_VectorOfPoint2f_input_array(std::vector<cv::Point2f>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint2f_output_array(std::vector<cv::Point2f>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint2f_input_output_array(std::vector<cv::Point2f>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Point2f* cv_VectorOfPoint2f_data(const std::vector<cv::Point2f>* instance) {
		return instance->data();
	}
	
	cv::Point2f* cv_VectorOfPoint2f_data_mut(std::vector<cv::Point2f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point2f>* cv_VectorOfPoint2f_from_slice(const cv::Point2f* data, size_t len) {
		return new std::vector<cv::Point2f>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Point3d>* cv_VectorOfPoint3d_new() {
			std::vector<cv::Point3d>* ret = new std::vector<cv::Point3d>();
			return ret;
	}
	
	void cv_VectorOfPoint3d_delete(std::vector<cv::Point3d>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPoint3d_len(const std::vector<cv::Point3d>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPoint3d_is_empty(const std::vector<cv::Point3d>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPoint3d_capacity(const std::vector<cv::Point3d>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPoint3d_shrink_to_fit(std::vector<cv::Point3d>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPoint3d_reserve(std::vector<cv::Point3d>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPoint3d_remove(std::vector<cv::Point3d>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPoint3d_swap(std::vector<cv::Point3d>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPoint3d_clear(std::vector<cv::Point3d>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPoint3d_push(std::vector<cv::Point3d>* instance, cv::Point3d* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPoint3d_insert(std::vector<cv::Point3d>* instance, size_t index, cv::Point3d* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPoint3d_get(const std::vector<cv::Point3d>* instance, size_t index, cv::Point3d* ocvrs_return) {
			cv::Point3d ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfPoint3d_set(std::vector<cv::Point3d>* instance, size_t index, cv::Point3d* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Point3d>* cv_VectorOfPoint3d_clone(const std::vector<cv::Point3d>* instance) {
			std::vector<cv::Point3d> ret = std::vector<cv::Point3d>(*instance);
			return new std::vector<cv::Point3d>(ret);
	}
	
	void cv_VectorOfPoint3d_input_array(std::vector<cv::Point3d>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint3d_output_array(std::vector<cv::Point3d>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint3d_input_output_array(std::vector<cv::Point3d>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Point3d* cv_VectorOfPoint3d_data(const std::vector<cv::Point3d>* instance) {
		return instance->data();
	}
	
	cv::Point3d* cv_VectorOfPoint3d_data_mut(std::vector<cv::Point3d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point3d>* cv_VectorOfPoint3d_from_slice(const cv::Point3d* data, size_t len) {
		return new std::vector<cv::Point3d>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Point3f>* cv_VectorOfPoint3f_new() {
			std::vector<cv::Point3f>* ret = new std::vector<cv::Point3f>();
			return ret;
	}
	
	void cv_VectorOfPoint3f_delete(std::vector<cv::Point3f>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPoint3f_len(const std::vector<cv::Point3f>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPoint3f_is_empty(const std::vector<cv::Point3f>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPoint3f_capacity(const std::vector<cv::Point3f>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPoint3f_shrink_to_fit(std::vector<cv::Point3f>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPoint3f_reserve(std::vector<cv::Point3f>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPoint3f_remove(std::vector<cv::Point3f>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPoint3f_swap(std::vector<cv::Point3f>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPoint3f_clear(std::vector<cv::Point3f>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPoint3f_push(std::vector<cv::Point3f>* instance, cv::Point3f* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPoint3f_insert(std::vector<cv::Point3f>* instance, size_t index, cv::Point3f* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPoint3f_get(const std::vector<cv::Point3f>* instance, size_t index, cv::Point3f* ocvrs_return) {
			cv::Point3f ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfPoint3f_set(std::vector<cv::Point3f>* instance, size_t index, cv::Point3f* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Point3f>* cv_VectorOfPoint3f_clone(const std::vector<cv::Point3f>* instance) {
			std::vector<cv::Point3f> ret = std::vector<cv::Point3f>(*instance);
			return new std::vector<cv::Point3f>(ret);
	}
	
	void cv_VectorOfPoint3f_input_array(std::vector<cv::Point3f>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint3f_output_array(std::vector<cv::Point3f>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint3f_input_output_array(std::vector<cv::Point3f>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Point3f* cv_VectorOfPoint3f_data(const std::vector<cv::Point3f>* instance) {
		return instance->data();
	}
	
	cv::Point3f* cv_VectorOfPoint3f_data_mut(std::vector<cv::Point3f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point3f>* cv_VectorOfPoint3f_from_slice(const cv::Point3f* data, size_t len) {
		return new std::vector<cv::Point3f>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Point3i>* cv_VectorOfPoint3i_new() {
			std::vector<cv::Point3i>* ret = new std::vector<cv::Point3i>();
			return ret;
	}
	
	void cv_VectorOfPoint3i_delete(std::vector<cv::Point3i>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfPoint3i_len(const std::vector<cv::Point3i>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfPoint3i_is_empty(const std::vector<cv::Point3i>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfPoint3i_capacity(const std::vector<cv::Point3i>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfPoint3i_shrink_to_fit(std::vector<cv::Point3i>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfPoint3i_reserve(std::vector<cv::Point3i>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfPoint3i_remove(std::vector<cv::Point3i>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfPoint3i_swap(std::vector<cv::Point3i>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfPoint3i_clear(std::vector<cv::Point3i>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfPoint3i_push(std::vector<cv::Point3i>* instance, cv::Point3i* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfPoint3i_insert(std::vector<cv::Point3i>* instance, size_t index, cv::Point3i* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfPoint3i_get(const std::vector<cv::Point3i>* instance, size_t index, cv::Point3i* ocvrs_return) {
			cv::Point3i ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfPoint3i_set(std::vector<cv::Point3i>* instance, size_t index, cv::Point3i* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Point3i>* cv_VectorOfPoint3i_clone(const std::vector<cv::Point3i>* instance) {
			std::vector<cv::Point3i> ret = std::vector<cv::Point3i>(*instance);
			return new std::vector<cv::Point3i>(ret);
	}
	
	void cv_VectorOfPoint3i_input_array(std::vector<cv::Point3i>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint3i_output_array(std::vector<cv::Point3i>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfPoint3i_input_output_array(std::vector<cv::Point3i>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Point3i* cv_VectorOfPoint3i_data(const std::vector<cv::Point3i>* instance) {
		return instance->data();
	}
	
	cv::Point3i* cv_VectorOfPoint3i_data_mut(std::vector<cv::Point3i>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Point3i>* cv_VectorOfPoint3i_from_slice(const cv::Point3i* data, size_t len) {
		return new std::vector<cv::Point3i>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Range>* cv_VectorOfRange_new() {
			std::vector<cv::Range>* ret = new std::vector<cv::Range>();
			return ret;
	}
	
	void cv_VectorOfRange_delete(std::vector<cv::Range>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfRange_len(const std::vector<cv::Range>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfRange_is_empty(const std::vector<cv::Range>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfRange_capacity(const std::vector<cv::Range>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfRange_shrink_to_fit(std::vector<cv::Range>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfRange_reserve(std::vector<cv::Range>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfRange_remove(std::vector<cv::Range>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfRange_swap(std::vector<cv::Range>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfRange_clear(std::vector<cv::Range>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfRange_push(std::vector<cv::Range>* instance, cv::Range* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfRange_insert(std::vector<cv::Range>* instance, size_t index, cv::Range* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfRange_get(const std::vector<cv::Range>* instance, size_t index, cv::Range** ocvrs_return) {
			cv::Range ret = (*instance)[index];
			*ocvrs_return = new cv::Range(ret);
	}
	
	void cv_VectorOfRange_set(std::vector<cv::Range>* instance, size_t index, cv::Range* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::Rect>* cv_VectorOfRect_new() {
			std::vector<cv::Rect>* ret = new std::vector<cv::Rect>();
			return ret;
	}
	
	void cv_VectorOfRect_delete(std::vector<cv::Rect>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfRect_len(const std::vector<cv::Rect>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfRect_is_empty(const std::vector<cv::Rect>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfRect_capacity(const std::vector<cv::Rect>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfRect_shrink_to_fit(std::vector<cv::Rect>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfRect_reserve(std::vector<cv::Rect>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfRect_remove(std::vector<cv::Rect>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfRect_swap(std::vector<cv::Rect>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfRect_clear(std::vector<cv::Rect>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfRect_push(std::vector<cv::Rect>* instance, cv::Rect* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfRect_insert(std::vector<cv::Rect>* instance, size_t index, cv::Rect* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfRect_get(const std::vector<cv::Rect>* instance, size_t index, cv::Rect* ocvrs_return) {
			cv::Rect ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfRect_set(std::vector<cv::Rect>* instance, size_t index, cv::Rect* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Rect>* cv_VectorOfRect_clone(const std::vector<cv::Rect>* instance) {
			std::vector<cv::Rect> ret = std::vector<cv::Rect>(*instance);
			return new std::vector<cv::Rect>(ret);
	}
	
	void cv_VectorOfRect_input_array(std::vector<cv::Rect>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfRect_output_array(std::vector<cv::Rect>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfRect_input_output_array(std::vector<cv::Rect>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Rect* cv_VectorOfRect_data(const std::vector<cv::Rect>* instance) {
		return instance->data();
	}
	
	cv::Rect* cv_VectorOfRect_data_mut(std::vector<cv::Rect>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Rect>* cv_VectorOfRect_from_slice(const cv::Rect* data, size_t len) {
		return new std::vector<cv::Rect>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Rect2d>* cv_VectorOfRect2d_new() {
			std::vector<cv::Rect2d>* ret = new std::vector<cv::Rect2d>();
			return ret;
	}
	
	void cv_VectorOfRect2d_delete(std::vector<cv::Rect2d>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfRect2d_len(const std::vector<cv::Rect2d>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfRect2d_is_empty(const std::vector<cv::Rect2d>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfRect2d_capacity(const std::vector<cv::Rect2d>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfRect2d_shrink_to_fit(std::vector<cv::Rect2d>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfRect2d_reserve(std::vector<cv::Rect2d>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfRect2d_remove(std::vector<cv::Rect2d>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfRect2d_swap(std::vector<cv::Rect2d>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfRect2d_clear(std::vector<cv::Rect2d>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfRect2d_push(std::vector<cv::Rect2d>* instance, cv::Rect2d* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfRect2d_insert(std::vector<cv::Rect2d>* instance, size_t index, cv::Rect2d* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfRect2d_get(const std::vector<cv::Rect2d>* instance, size_t index, cv::Rect2d* ocvrs_return) {
			cv::Rect2d ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfRect2d_set(std::vector<cv::Rect2d>* instance, size_t index, cv::Rect2d* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Rect2d>* cv_VectorOfRect2d_clone(const std::vector<cv::Rect2d>* instance) {
			std::vector<cv::Rect2d> ret = std::vector<cv::Rect2d>(*instance);
			return new std::vector<cv::Rect2d>(ret);
	}
	
	void cv_VectorOfRect2d_input_array(std::vector<cv::Rect2d>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfRect2d_output_array(std::vector<cv::Rect2d>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfRect2d_input_output_array(std::vector<cv::Rect2d>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Rect2d* cv_VectorOfRect2d_data(const std::vector<cv::Rect2d>* instance) {
		return instance->data();
	}
	
	cv::Rect2d* cv_VectorOfRect2d_data_mut(std::vector<cv::Rect2d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Rect2d>* cv_VectorOfRect2d_from_slice(const cv::Rect2d* data, size_t len) {
		return new std::vector<cv::Rect2d>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::RotatedRect>* cv_VectorOfRotatedRect_new() {
			std::vector<cv::RotatedRect>* ret = new std::vector<cv::RotatedRect>();
			return ret;
	}
	
	void cv_VectorOfRotatedRect_delete(std::vector<cv::RotatedRect>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfRotatedRect_len(const std::vector<cv::RotatedRect>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfRotatedRect_is_empty(const std::vector<cv::RotatedRect>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfRotatedRect_capacity(const std::vector<cv::RotatedRect>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfRotatedRect_shrink_to_fit(std::vector<cv::RotatedRect>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfRotatedRect_reserve(std::vector<cv::RotatedRect>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfRotatedRect_remove(std::vector<cv::RotatedRect>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfRotatedRect_swap(std::vector<cv::RotatedRect>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfRotatedRect_clear(std::vector<cv::RotatedRect>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfRotatedRect_push(std::vector<cv::RotatedRect>* instance, cv::RotatedRect* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfRotatedRect_insert(std::vector<cv::RotatedRect>* instance, size_t index, cv::RotatedRect* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfRotatedRect_get(const std::vector<cv::RotatedRect>* instance, size_t index, cv::RotatedRect** ocvrs_return) {
			cv::RotatedRect ret = (*instance)[index];
			*ocvrs_return = new cv::RotatedRect(ret);
	}
	
	void cv_VectorOfRotatedRect_set(std::vector<cv::RotatedRect>* instance, size_t index, cv::RotatedRect* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::Scalar>* cv_VectorOfScalar_new() {
			std::vector<cv::Scalar>* ret = new std::vector<cv::Scalar>();
			return ret;
	}
	
	void cv_VectorOfScalar_delete(std::vector<cv::Scalar>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfScalar_len(const std::vector<cv::Scalar>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfScalar_is_empty(const std::vector<cv::Scalar>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfScalar_capacity(const std::vector<cv::Scalar>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfScalar_shrink_to_fit(std::vector<cv::Scalar>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfScalar_reserve(std::vector<cv::Scalar>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfScalar_remove(std::vector<cv::Scalar>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfScalar_swap(std::vector<cv::Scalar>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfScalar_clear(std::vector<cv::Scalar>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfScalar_push(std::vector<cv::Scalar>* instance, cv::Scalar* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfScalar_insert(std::vector<cv::Scalar>* instance, size_t index, cv::Scalar* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfScalar_get(const std::vector<cv::Scalar>* instance, size_t index, cv::Scalar* ocvrs_return) {
			cv::Scalar ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfScalar_set(std::vector<cv::Scalar>* instance, size_t index, cv::Scalar* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Scalar>* cv_VectorOfScalar_clone(const std::vector<cv::Scalar>* instance) {
			std::vector<cv::Scalar> ret = std::vector<cv::Scalar>(*instance);
			return new std::vector<cv::Scalar>(ret);
	}
	
	void cv_VectorOfScalar_input_array(std::vector<cv::Scalar>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfScalar_output_array(std::vector<cv::Scalar>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfScalar_input_output_array(std::vector<cv::Scalar>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Scalar* cv_VectorOfScalar_data(const std::vector<cv::Scalar>* instance) {
		return instance->data();
	}
	
	cv::Scalar* cv_VectorOfScalar_data_mut(std::vector<cv::Scalar>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Scalar>* cv_VectorOfScalar_from_slice(const cv::Scalar* data, size_t len) {
		return new std::vector<cv::Scalar>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Size>* cv_VectorOfSize_new() {
			std::vector<cv::Size>* ret = new std::vector<cv::Size>();
			return ret;
	}
	
	void cv_VectorOfSize_delete(std::vector<cv::Size>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfSize_len(const std::vector<cv::Size>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfSize_is_empty(const std::vector<cv::Size>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfSize_capacity(const std::vector<cv::Size>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfSize_shrink_to_fit(std::vector<cv::Size>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfSize_reserve(std::vector<cv::Size>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfSize_remove(std::vector<cv::Size>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfSize_swap(std::vector<cv::Size>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfSize_clear(std::vector<cv::Size>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfSize_push(std::vector<cv::Size>* instance, cv::Size* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfSize_insert(std::vector<cv::Size>* instance, size_t index, cv::Size* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfSize_get(const std::vector<cv::Size>* instance, size_t index, cv::Size* ocvrs_return) {
			cv::Size ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfSize_set(std::vector<cv::Size>* instance, size_t index, cv::Size* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Size>* cv_VectorOfSize_clone(const std::vector<cv::Size>* instance) {
			std::vector<cv::Size> ret = std::vector<cv::Size>(*instance);
			return new std::vector<cv::Size>(ret);
	}
	
	void cv_VectorOfSize_input_array(std::vector<cv::Size>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfSize_output_array(std::vector<cv::Size>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfSize_input_output_array(std::vector<cv::Size>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Size* cv_VectorOfSize_data(const std::vector<cv::Size>* instance) {
		return instance->data();
	}
	
	cv::Size* cv_VectorOfSize_data_mut(std::vector<cv::Size>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Size>* cv_VectorOfSize_from_slice(const cv::Size* data, size_t len) {
		return new std::vector<cv::Size>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::String>* cv_VectorOfString_new() {
			std::vector<cv::String>* ret = new std::vector<cv::String>();
			return ret;
	}
	
	void cv_VectorOfString_delete(std::vector<cv::String>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfString_len(const std::vector<cv::String>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfString_is_empty(const std::vector<cv::String>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfString_capacity(const std::vector<cv::String>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfString_shrink_to_fit(std::vector<cv::String>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfString_reserve(std::vector<cv::String>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfString_remove(std::vector<cv::String>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfString_swap(std::vector<cv::String>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfString_clear(std::vector<cv::String>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfString_push(std::vector<cv::String>* instance, char* val) {
			instance->push_back(std::string(val));
	}
	
	void cv_VectorOfString_insert(std::vector<cv::String>* instance, size_t index, char* val) {
			instance->insert(instance->begin() + index, std::string(val));
	}
	
	void cv_VectorOfString_get(const std::vector<cv::String>* instance, size_t index, void** ocvrs_return) {
			cv::String ret = (*instance)[index];
			*ocvrs_return = ocvrs_create_string(ret.c_str());
	}
	
	void cv_VectorOfString_set(std::vector<cv::String>* instance, size_t index, char* val) {
			(*instance)[index] = std::string(val);
	}
	
}


extern "C" {
	std::vector<std::pair<cv::Point2i, cv::Point2i>>* cv_VectorOfTupleOfPoint2i_Point2i_new() {
			std::vector<std::pair<cv::Point2i, cv::Point2i>>* ret = new std::vector<std::pair<cv::Point2i, cv::Point2i>>();
			return ret;
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_delete(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfTupleOfPoint2i_Point2i_len(const std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfTupleOfPoint2i_Point2i_is_empty(const std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfTupleOfPoint2i_Point2i_capacity(const std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_shrink_to_fit(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_reserve(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_remove(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_swap(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_clear(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_push(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, std::pair<cv::Point2i, cv::Point2i>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_insert(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, size_t index, std::pair<cv::Point2i, cv::Point2i>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_get(const std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, size_t index, std::pair<cv::Point2i, cv::Point2i>** ocvrs_return) {
			std::pair<cv::Point2i, cv::Point2i> ret = (*instance)[index];
			*ocvrs_return = new std::pair<cv::Point2i, cv::Point2i>(ret);
	}
	
	void cv_VectorOfTupleOfPoint2i_Point2i_set(std::vector<std::pair<cv::Point2i, cv::Point2i>>* instance, size_t index, std::pair<cv::Point2i, cv::Point2i>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::pair<cv::UMat, unsigned char>>* cv_VectorOfTupleOfUMat_u8_new() {
			std::vector<std::pair<cv::UMat, unsigned char>>* ret = new std::vector<std::pair<cv::UMat, unsigned char>>();
			return ret;
	}
	
	void cv_VectorOfTupleOfUMat_u8_delete(std::vector<std::pair<cv::UMat, unsigned char>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfTupleOfUMat_u8_len(const std::vector<std::pair<cv::UMat, unsigned char>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfTupleOfUMat_u8_is_empty(const std::vector<std::pair<cv::UMat, unsigned char>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfTupleOfUMat_u8_capacity(const std::vector<std::pair<cv::UMat, unsigned char>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfTupleOfUMat_u8_shrink_to_fit(std::vector<std::pair<cv::UMat, unsigned char>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfTupleOfUMat_u8_reserve(std::vector<std::pair<cv::UMat, unsigned char>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfTupleOfUMat_u8_remove(std::vector<std::pair<cv::UMat, unsigned char>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfTupleOfUMat_u8_swap(std::vector<std::pair<cv::UMat, unsigned char>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfTupleOfUMat_u8_clear(std::vector<std::pair<cv::UMat, unsigned char>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfTupleOfUMat_u8_push(std::vector<std::pair<cv::UMat, unsigned char>>* instance, std::pair<cv::UMat, unsigned char>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfTupleOfUMat_u8_insert(std::vector<std::pair<cv::UMat, unsigned char>>* instance, size_t index, std::pair<cv::UMat, unsigned char>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfTupleOfUMat_u8_get(const std::vector<std::pair<cv::UMat, unsigned char>>* instance, size_t index, std::pair<cv::UMat, unsigned char>** ocvrs_return) {
			std::pair<cv::UMat, unsigned char> ret = (*instance)[index];
			*ocvrs_return = new std::pair<cv::UMat, unsigned char>(ret);
	}
	
	void cv_VectorOfTupleOfUMat_u8_set(std::vector<std::pair<cv::UMat, unsigned char>>* instance, size_t index, std::pair<cv::UMat, unsigned char>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::pair<int, double>>* cv_VectorOfTupleOfi32_f64_new() {
			std::vector<std::pair<int, double>>* ret = new std::vector<std::pair<int, double>>();
			return ret;
	}
	
	void cv_VectorOfTupleOfi32_f64_delete(std::vector<std::pair<int, double>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfTupleOfi32_f64_len(const std::vector<std::pair<int, double>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfTupleOfi32_f64_is_empty(const std::vector<std::pair<int, double>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfTupleOfi32_f64_capacity(const std::vector<std::pair<int, double>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfTupleOfi32_f64_shrink_to_fit(std::vector<std::pair<int, double>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfTupleOfi32_f64_reserve(std::vector<std::pair<int, double>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfTupleOfi32_f64_remove(std::vector<std::pair<int, double>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfTupleOfi32_f64_swap(std::vector<std::pair<int, double>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfTupleOfi32_f64_clear(std::vector<std::pair<int, double>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfTupleOfi32_f64_push(std::vector<std::pair<int, double>>* instance, std::pair<int, double>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfTupleOfi32_f64_insert(std::vector<std::pair<int, double>>* instance, size_t index, std::pair<int, double>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfTupleOfi32_f64_get(const std::vector<std::pair<int, double>>* instance, size_t index, std::pair<int, double>** ocvrs_return) {
			std::pair<int, double> ret = (*instance)[index];
			*ocvrs_return = new std::pair<int, double>(ret);
	}
	
	void cv_VectorOfTupleOfi32_f64_set(std::vector<std::pair<int, double>>* instance, size_t index, std::pair<int, double>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::UMat>* cv_VectorOfUMat_new() {
			std::vector<cv::UMat>* ret = new std::vector<cv::UMat>();
			return ret;
	}
	
	void cv_VectorOfUMat_delete(std::vector<cv::UMat>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfUMat_len(const std::vector<cv::UMat>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfUMat_is_empty(const std::vector<cv::UMat>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfUMat_capacity(const std::vector<cv::UMat>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfUMat_shrink_to_fit(std::vector<cv::UMat>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfUMat_reserve(std::vector<cv::UMat>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfUMat_remove(std::vector<cv::UMat>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfUMat_swap(std::vector<cv::UMat>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfUMat_clear(std::vector<cv::UMat>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfUMat_push(std::vector<cv::UMat>* instance, cv::UMat* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfUMat_insert(std::vector<cv::UMat>* instance, size_t index, cv::UMat* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfUMat_get(const std::vector<cv::UMat>* instance, size_t index, cv::UMat** ocvrs_return) {
			cv::UMat ret = (*instance)[index];
			*ocvrs_return = new cv::UMat(ret);
	}
	
	void cv_VectorOfUMat_set(std::vector<cv::UMat>* instance, size_t index, cv::UMat* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<cv::Vec2d>* cv_VectorOfVec2d_new() {
			std::vector<cv::Vec2d>* ret = new std::vector<cv::Vec2d>();
			return ret;
	}
	
	void cv_VectorOfVec2d_delete(std::vector<cv::Vec2d>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec2d_len(const std::vector<cv::Vec2d>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec2d_is_empty(const std::vector<cv::Vec2d>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec2d_capacity(const std::vector<cv::Vec2d>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec2d_shrink_to_fit(std::vector<cv::Vec2d>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec2d_reserve(std::vector<cv::Vec2d>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec2d_remove(std::vector<cv::Vec2d>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec2d_swap(std::vector<cv::Vec2d>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec2d_clear(std::vector<cv::Vec2d>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec2d_push(std::vector<cv::Vec2d>* instance, cv::Vec2d* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec2d_insert(std::vector<cv::Vec2d>* instance, size_t index, cv::Vec2d* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec2d_get(const std::vector<cv::Vec2d>* instance, size_t index, cv::Vec2d* ocvrs_return) {
			cv::Vec2d ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec2d_set(std::vector<cv::Vec2d>* instance, size_t index, cv::Vec2d* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec2d>* cv_VectorOfVec2d_clone(const std::vector<cv::Vec2d>* instance) {
			std::vector<cv::Vec2d> ret = std::vector<cv::Vec2d>(*instance);
			return new std::vector<cv::Vec2d>(ret);
	}
	
	void cv_VectorOfVec2d_input_array(std::vector<cv::Vec2d>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec2d_output_array(std::vector<cv::Vec2d>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec2d_input_output_array(std::vector<cv::Vec2d>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec2d* cv_VectorOfVec2d_data(const std::vector<cv::Vec2d>* instance) {
		return instance->data();
	}
	
	cv::Vec2d* cv_VectorOfVec2d_data_mut(std::vector<cv::Vec2d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec2d>* cv_VectorOfVec2d_from_slice(const cv::Vec2d* data, size_t len) {
		return new std::vector<cv::Vec2d>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec2f>* cv_VectorOfVec2f_new() {
			std::vector<cv::Vec2f>* ret = new std::vector<cv::Vec2f>();
			return ret;
	}
	
	void cv_VectorOfVec2f_delete(std::vector<cv::Vec2f>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec2f_len(const std::vector<cv::Vec2f>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec2f_is_empty(const std::vector<cv::Vec2f>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec2f_capacity(const std::vector<cv::Vec2f>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec2f_shrink_to_fit(std::vector<cv::Vec2f>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec2f_reserve(std::vector<cv::Vec2f>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec2f_remove(std::vector<cv::Vec2f>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec2f_swap(std::vector<cv::Vec2f>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec2f_clear(std::vector<cv::Vec2f>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec2f_push(std::vector<cv::Vec2f>* instance, cv::Vec2f* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec2f_insert(std::vector<cv::Vec2f>* instance, size_t index, cv::Vec2f* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec2f_get(const std::vector<cv::Vec2f>* instance, size_t index, cv::Vec2f* ocvrs_return) {
			cv::Vec2f ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec2f_set(std::vector<cv::Vec2f>* instance, size_t index, cv::Vec2f* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec2f>* cv_VectorOfVec2f_clone(const std::vector<cv::Vec2f>* instance) {
			std::vector<cv::Vec2f> ret = std::vector<cv::Vec2f>(*instance);
			return new std::vector<cv::Vec2f>(ret);
	}
	
	void cv_VectorOfVec2f_input_array(std::vector<cv::Vec2f>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec2f_output_array(std::vector<cv::Vec2f>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec2f_input_output_array(std::vector<cv::Vec2f>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec2f* cv_VectorOfVec2f_data(const std::vector<cv::Vec2f>* instance) {
		return instance->data();
	}
	
	cv::Vec2f* cv_VectorOfVec2f_data_mut(std::vector<cv::Vec2f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec2f>* cv_VectorOfVec2f_from_slice(const cv::Vec2f* data, size_t len) {
		return new std::vector<cv::Vec2f>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec2i>* cv_VectorOfVec2i_new() {
			std::vector<cv::Vec2i>* ret = new std::vector<cv::Vec2i>();
			return ret;
	}
	
	void cv_VectorOfVec2i_delete(std::vector<cv::Vec2i>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec2i_len(const std::vector<cv::Vec2i>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec2i_is_empty(const std::vector<cv::Vec2i>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec2i_capacity(const std::vector<cv::Vec2i>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec2i_shrink_to_fit(std::vector<cv::Vec2i>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec2i_reserve(std::vector<cv::Vec2i>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec2i_remove(std::vector<cv::Vec2i>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec2i_swap(std::vector<cv::Vec2i>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec2i_clear(std::vector<cv::Vec2i>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec2i_push(std::vector<cv::Vec2i>* instance, cv::Vec2i* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec2i_insert(std::vector<cv::Vec2i>* instance, size_t index, cv::Vec2i* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec2i_get(const std::vector<cv::Vec2i>* instance, size_t index, cv::Vec2i* ocvrs_return) {
			cv::Vec2i ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec2i_set(std::vector<cv::Vec2i>* instance, size_t index, cv::Vec2i* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec2i>* cv_VectorOfVec2i_clone(const std::vector<cv::Vec2i>* instance) {
			std::vector<cv::Vec2i> ret = std::vector<cv::Vec2i>(*instance);
			return new std::vector<cv::Vec2i>(ret);
	}
	
	void cv_VectorOfVec2i_input_array(std::vector<cv::Vec2i>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec2i_output_array(std::vector<cv::Vec2i>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec2i_input_output_array(std::vector<cv::Vec2i>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec2i* cv_VectorOfVec2i_data(const std::vector<cv::Vec2i>* instance) {
		return instance->data();
	}
	
	cv::Vec2i* cv_VectorOfVec2i_data_mut(std::vector<cv::Vec2i>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec2i>* cv_VectorOfVec2i_from_slice(const cv::Vec2i* data, size_t len) {
		return new std::vector<cv::Vec2i>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec3d>* cv_VectorOfVec3d_new() {
			std::vector<cv::Vec3d>* ret = new std::vector<cv::Vec3d>();
			return ret;
	}
	
	void cv_VectorOfVec3d_delete(std::vector<cv::Vec3d>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec3d_len(const std::vector<cv::Vec3d>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec3d_is_empty(const std::vector<cv::Vec3d>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec3d_capacity(const std::vector<cv::Vec3d>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec3d_shrink_to_fit(std::vector<cv::Vec3d>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec3d_reserve(std::vector<cv::Vec3d>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec3d_remove(std::vector<cv::Vec3d>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec3d_swap(std::vector<cv::Vec3d>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec3d_clear(std::vector<cv::Vec3d>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec3d_push(std::vector<cv::Vec3d>* instance, cv::Vec3d* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec3d_insert(std::vector<cv::Vec3d>* instance, size_t index, cv::Vec3d* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec3d_get(const std::vector<cv::Vec3d>* instance, size_t index, cv::Vec3d* ocvrs_return) {
			cv::Vec3d ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec3d_set(std::vector<cv::Vec3d>* instance, size_t index, cv::Vec3d* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec3d>* cv_VectorOfVec3d_clone(const std::vector<cv::Vec3d>* instance) {
			std::vector<cv::Vec3d> ret = std::vector<cv::Vec3d>(*instance);
			return new std::vector<cv::Vec3d>(ret);
	}
	
	void cv_VectorOfVec3d_input_array(std::vector<cv::Vec3d>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec3d_output_array(std::vector<cv::Vec3d>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec3d_input_output_array(std::vector<cv::Vec3d>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec3d* cv_VectorOfVec3d_data(const std::vector<cv::Vec3d>* instance) {
		return instance->data();
	}
	
	cv::Vec3d* cv_VectorOfVec3d_data_mut(std::vector<cv::Vec3d>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec3d>* cv_VectorOfVec3d_from_slice(const cv::Vec3d* data, size_t len) {
		return new std::vector<cv::Vec3d>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec3f>* cv_VectorOfVec3f_new() {
			std::vector<cv::Vec3f>* ret = new std::vector<cv::Vec3f>();
			return ret;
	}
	
	void cv_VectorOfVec3f_delete(std::vector<cv::Vec3f>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec3f_len(const std::vector<cv::Vec3f>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec3f_is_empty(const std::vector<cv::Vec3f>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec3f_capacity(const std::vector<cv::Vec3f>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec3f_shrink_to_fit(std::vector<cv::Vec3f>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec3f_reserve(std::vector<cv::Vec3f>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec3f_remove(std::vector<cv::Vec3f>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec3f_swap(std::vector<cv::Vec3f>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec3f_clear(std::vector<cv::Vec3f>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec3f_push(std::vector<cv::Vec3f>* instance, cv::Vec3f* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec3f_insert(std::vector<cv::Vec3f>* instance, size_t index, cv::Vec3f* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec3f_get(const std::vector<cv::Vec3f>* instance, size_t index, cv::Vec3f* ocvrs_return) {
			cv::Vec3f ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec3f_set(std::vector<cv::Vec3f>* instance, size_t index, cv::Vec3f* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec3f>* cv_VectorOfVec3f_clone(const std::vector<cv::Vec3f>* instance) {
			std::vector<cv::Vec3f> ret = std::vector<cv::Vec3f>(*instance);
			return new std::vector<cv::Vec3f>(ret);
	}
	
	void cv_VectorOfVec3f_input_array(std::vector<cv::Vec3f>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec3f_output_array(std::vector<cv::Vec3f>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec3f_input_output_array(std::vector<cv::Vec3f>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec3f* cv_VectorOfVec3f_data(const std::vector<cv::Vec3f>* instance) {
		return instance->data();
	}
	
	cv::Vec3f* cv_VectorOfVec3f_data_mut(std::vector<cv::Vec3f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec3f>* cv_VectorOfVec3f_from_slice(const cv::Vec3f* data, size_t len) {
		return new std::vector<cv::Vec3f>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec3i>* cv_VectorOfVec3i_new() {
			std::vector<cv::Vec3i>* ret = new std::vector<cv::Vec3i>();
			return ret;
	}
	
	void cv_VectorOfVec3i_delete(std::vector<cv::Vec3i>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec3i_len(const std::vector<cv::Vec3i>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec3i_is_empty(const std::vector<cv::Vec3i>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec3i_capacity(const std::vector<cv::Vec3i>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec3i_shrink_to_fit(std::vector<cv::Vec3i>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec3i_reserve(std::vector<cv::Vec3i>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec3i_remove(std::vector<cv::Vec3i>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec3i_swap(std::vector<cv::Vec3i>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec3i_clear(std::vector<cv::Vec3i>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec3i_push(std::vector<cv::Vec3i>* instance, cv::Vec3i* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec3i_insert(std::vector<cv::Vec3i>* instance, size_t index, cv::Vec3i* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec3i_get(const std::vector<cv::Vec3i>* instance, size_t index, cv::Vec3i* ocvrs_return) {
			cv::Vec3i ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec3i_set(std::vector<cv::Vec3i>* instance, size_t index, cv::Vec3i* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec3i>* cv_VectorOfVec3i_clone(const std::vector<cv::Vec3i>* instance) {
			std::vector<cv::Vec3i> ret = std::vector<cv::Vec3i>(*instance);
			return new std::vector<cv::Vec3i>(ret);
	}
	
	void cv_VectorOfVec3i_input_array(std::vector<cv::Vec3i>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec3i_output_array(std::vector<cv::Vec3i>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec3i_input_output_array(std::vector<cv::Vec3i>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec3i* cv_VectorOfVec3i_data(const std::vector<cv::Vec3i>* instance) {
		return instance->data();
	}
	
	cv::Vec3i* cv_VectorOfVec3i_data_mut(std::vector<cv::Vec3i>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec3i>* cv_VectorOfVec3i_from_slice(const cv::Vec3i* data, size_t len) {
		return new std::vector<cv::Vec3i>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec4f>* cv_VectorOfVec4f_new() {
			std::vector<cv::Vec4f>* ret = new std::vector<cv::Vec4f>();
			return ret;
	}
	
	void cv_VectorOfVec4f_delete(std::vector<cv::Vec4f>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec4f_len(const std::vector<cv::Vec4f>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec4f_is_empty(const std::vector<cv::Vec4f>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec4f_capacity(const std::vector<cv::Vec4f>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec4f_shrink_to_fit(std::vector<cv::Vec4f>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec4f_reserve(std::vector<cv::Vec4f>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec4f_remove(std::vector<cv::Vec4f>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec4f_swap(std::vector<cv::Vec4f>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec4f_clear(std::vector<cv::Vec4f>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec4f_push(std::vector<cv::Vec4f>* instance, cv::Vec4f* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec4f_insert(std::vector<cv::Vec4f>* instance, size_t index, cv::Vec4f* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec4f_get(const std::vector<cv::Vec4f>* instance, size_t index, cv::Vec4f* ocvrs_return) {
			cv::Vec4f ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec4f_set(std::vector<cv::Vec4f>* instance, size_t index, cv::Vec4f* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec4f>* cv_VectorOfVec4f_clone(const std::vector<cv::Vec4f>* instance) {
			std::vector<cv::Vec4f> ret = std::vector<cv::Vec4f>(*instance);
			return new std::vector<cv::Vec4f>(ret);
	}
	
	void cv_VectorOfVec4f_input_array(std::vector<cv::Vec4f>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec4f_output_array(std::vector<cv::Vec4f>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec4f_input_output_array(std::vector<cv::Vec4f>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec4f* cv_VectorOfVec4f_data(const std::vector<cv::Vec4f>* instance) {
		return instance->data();
	}
	
	cv::Vec4f* cv_VectorOfVec4f_data_mut(std::vector<cv::Vec4f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec4f>* cv_VectorOfVec4f_from_slice(const cv::Vec4f* data, size_t len) {
		return new std::vector<cv::Vec4f>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec4i>* cv_VectorOfVec4i_new() {
			std::vector<cv::Vec4i>* ret = new std::vector<cv::Vec4i>();
			return ret;
	}
	
	void cv_VectorOfVec4i_delete(std::vector<cv::Vec4i>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec4i_len(const std::vector<cv::Vec4i>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec4i_is_empty(const std::vector<cv::Vec4i>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec4i_capacity(const std::vector<cv::Vec4i>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec4i_shrink_to_fit(std::vector<cv::Vec4i>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec4i_reserve(std::vector<cv::Vec4i>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec4i_remove(std::vector<cv::Vec4i>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec4i_swap(std::vector<cv::Vec4i>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec4i_clear(std::vector<cv::Vec4i>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec4i_push(std::vector<cv::Vec4i>* instance, cv::Vec4i* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec4i_insert(std::vector<cv::Vec4i>* instance, size_t index, cv::Vec4i* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec4i_get(const std::vector<cv::Vec4i>* instance, size_t index, cv::Vec4i* ocvrs_return) {
			cv::Vec4i ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec4i_set(std::vector<cv::Vec4i>* instance, size_t index, cv::Vec4i* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec4i>* cv_VectorOfVec4i_clone(const std::vector<cv::Vec4i>* instance) {
			std::vector<cv::Vec4i> ret = std::vector<cv::Vec4i>(*instance);
			return new std::vector<cv::Vec4i>(ret);
	}
	
	void cv_VectorOfVec4i_input_array(std::vector<cv::Vec4i>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec4i_output_array(std::vector<cv::Vec4i>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec4i_input_output_array(std::vector<cv::Vec4i>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec4i* cv_VectorOfVec4i_data(const std::vector<cv::Vec4i>* instance) {
		return instance->data();
	}
	
	cv::Vec4i* cv_VectorOfVec4i_data_mut(std::vector<cv::Vec4i>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec4i>* cv_VectorOfVec4i_from_slice(const cv::Vec4i* data, size_t len) {
		return new std::vector<cv::Vec4i>(data, data + len);
	}
}


extern "C" {
	std::vector<cv::Vec6f>* cv_VectorOfVec6f_new() {
			std::vector<cv::Vec6f>* ret = new std::vector<cv::Vec6f>();
			return ret;
	}
	
	void cv_VectorOfVec6f_delete(std::vector<cv::Vec6f>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVec6f_len(const std::vector<cv::Vec6f>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVec6f_is_empty(const std::vector<cv::Vec6f>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVec6f_capacity(const std::vector<cv::Vec6f>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVec6f_shrink_to_fit(std::vector<cv::Vec6f>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVec6f_reserve(std::vector<cv::Vec6f>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVec6f_remove(std::vector<cv::Vec6f>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVec6f_swap(std::vector<cv::Vec6f>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVec6f_clear(std::vector<cv::Vec6f>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVec6f_push(std::vector<cv::Vec6f>* instance, cv::Vec6f* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVec6f_insert(std::vector<cv::Vec6f>* instance, size_t index, cv::Vec6f* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVec6f_get(const std::vector<cv::Vec6f>* instance, size_t index, cv::Vec6f* ocvrs_return) {
			cv::Vec6f ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfVec6f_set(std::vector<cv::Vec6f>* instance, size_t index, cv::Vec6f* val) {
			(*instance)[index] = *val;
	}
	
	std::vector<cv::Vec6f>* cv_VectorOfVec6f_clone(const std::vector<cv::Vec6f>* instance) {
			std::vector<cv::Vec6f> ret = std::vector<cv::Vec6f>(*instance);
			return new std::vector<cv::Vec6f>(ret);
	}
	
	void cv_VectorOfVec6f_input_array(std::vector<cv::Vec6f>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec6f_output_array(std::vector<cv::Vec6f>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVec6f_input_output_array(std::vector<cv::Vec6f>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const cv::Vec6f* cv_VectorOfVec6f_data(const std::vector<cv::Vec6f>* instance) {
		return instance->data();
	}
	
	cv::Vec6f* cv_VectorOfVec6f_data_mut(std::vector<cv::Vec6f>* instance) {
		return instance->data();
	}
	
	std::vector<cv::Vec6f>* cv_VectorOfVec6f_from_slice(const cv::Vec6f* data, size_t len) {
		return new std::vector<cv::Vec6f>(data, data + len);
	}
}


extern "C" {
	std::vector<std::vector<cv::DMatch>>* cv_VectorOfVectorOfDMatch_new() {
			std::vector<std::vector<cv::DMatch>>* ret = new std::vector<std::vector<cv::DMatch>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfDMatch_delete(std::vector<std::vector<cv::DMatch>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfDMatch_len(const std::vector<std::vector<cv::DMatch>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfDMatch_is_empty(const std::vector<std::vector<cv::DMatch>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfDMatch_capacity(const std::vector<std::vector<cv::DMatch>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfDMatch_shrink_to_fit(std::vector<std::vector<cv::DMatch>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfDMatch_reserve(std::vector<std::vector<cv::DMatch>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfDMatch_remove(std::vector<std::vector<cv::DMatch>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfDMatch_swap(std::vector<std::vector<cv::DMatch>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfDMatch_clear(std::vector<std::vector<cv::DMatch>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfDMatch_push(std::vector<std::vector<cv::DMatch>>* instance, std::vector<cv::DMatch>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfDMatch_insert(std::vector<std::vector<cv::DMatch>>* instance, size_t index, std::vector<cv::DMatch>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfDMatch_get(const std::vector<std::vector<cv::DMatch>>* instance, size_t index, std::vector<cv::DMatch>** ocvrs_return) {
			std::vector<cv::DMatch> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::DMatch>(ret);
	}
	
	void cv_VectorOfVectorOfDMatch_set(std::vector<std::vector<cv::DMatch>>* instance, size_t index, std::vector<cv::DMatch>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::vector<cv::KeyPoint>>* cv_VectorOfVectorOfKeyPoint_new() {
			std::vector<std::vector<cv::KeyPoint>>* ret = new std::vector<std::vector<cv::KeyPoint>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfKeyPoint_delete(std::vector<std::vector<cv::KeyPoint>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfKeyPoint_len(const std::vector<std::vector<cv::KeyPoint>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfKeyPoint_is_empty(const std::vector<std::vector<cv::KeyPoint>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfKeyPoint_capacity(const std::vector<std::vector<cv::KeyPoint>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfKeyPoint_shrink_to_fit(std::vector<std::vector<cv::KeyPoint>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfKeyPoint_reserve(std::vector<std::vector<cv::KeyPoint>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfKeyPoint_remove(std::vector<std::vector<cv::KeyPoint>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfKeyPoint_swap(std::vector<std::vector<cv::KeyPoint>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfKeyPoint_clear(std::vector<std::vector<cv::KeyPoint>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfKeyPoint_push(std::vector<std::vector<cv::KeyPoint>>* instance, std::vector<cv::KeyPoint>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfKeyPoint_insert(std::vector<std::vector<cv::KeyPoint>>* instance, size_t index, std::vector<cv::KeyPoint>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfKeyPoint_get(const std::vector<std::vector<cv::KeyPoint>>* instance, size_t index, std::vector<cv::KeyPoint>** ocvrs_return) {
			std::vector<cv::KeyPoint> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::KeyPoint>(ret);
	}
	
	void cv_VectorOfVectorOfKeyPoint_set(std::vector<std::vector<cv::KeyPoint>>* instance, size_t index, std::vector<cv::KeyPoint>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Mat>>* cv_VectorOfVectorOfMat_new() {
			std::vector<std::vector<cv::Mat>>* ret = new std::vector<std::vector<cv::Mat>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfMat_delete(std::vector<std::vector<cv::Mat>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfMat_len(const std::vector<std::vector<cv::Mat>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfMat_is_empty(const std::vector<std::vector<cv::Mat>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfMat_capacity(const std::vector<std::vector<cv::Mat>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfMat_shrink_to_fit(std::vector<std::vector<cv::Mat>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfMat_reserve(std::vector<std::vector<cv::Mat>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfMat_remove(std::vector<std::vector<cv::Mat>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfMat_swap(std::vector<std::vector<cv::Mat>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfMat_clear(std::vector<std::vector<cv::Mat>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfMat_push(std::vector<std::vector<cv::Mat>>* instance, std::vector<cv::Mat>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfMat_insert(std::vector<std::vector<cv::Mat>>* instance, size_t index, std::vector<cv::Mat>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfMat_get(const std::vector<std::vector<cv::Mat>>* instance, size_t index, std::vector<cv::Mat>** ocvrs_return) {
			std::vector<cv::Mat> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Mat>(ret);
	}
	
	void cv_VectorOfVectorOfMat_set(std::vector<std::vector<cv::Mat>>* instance, size_t index, std::vector<cv::Mat>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Point>>* cv_VectorOfVectorOfPoint_new() {
			std::vector<std::vector<cv::Point>>* ret = new std::vector<std::vector<cv::Point>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint_delete(std::vector<std::vector<cv::Point>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfPoint_len(const std::vector<std::vector<cv::Point>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfPoint_is_empty(const std::vector<std::vector<cv::Point>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfPoint_capacity(const std::vector<std::vector<cv::Point>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint_shrink_to_fit(std::vector<std::vector<cv::Point>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfPoint_reserve(std::vector<std::vector<cv::Point>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfPoint_remove(std::vector<std::vector<cv::Point>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfPoint_swap(std::vector<std::vector<cv::Point>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfPoint_clear(std::vector<std::vector<cv::Point>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfPoint_push(std::vector<std::vector<cv::Point>>* instance, std::vector<cv::Point>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfPoint_insert(std::vector<std::vector<cv::Point>>* instance, size_t index, std::vector<cv::Point>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfPoint_get(const std::vector<std::vector<cv::Point>>* instance, size_t index, std::vector<cv::Point>** ocvrs_return) {
			std::vector<cv::Point> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Point>(ret);
	}
	
	void cv_VectorOfVectorOfPoint_set(std::vector<std::vector<cv::Point>>* instance, size_t index, std::vector<cv::Point>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfPoint_input_array(std::vector<std::vector<cv::Point>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint_output_array(std::vector<std::vector<cv::Point>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint_input_output_array(std::vector<std::vector<cv::Point>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Point2f>>* cv_VectorOfVectorOfPoint2f_new() {
			std::vector<std::vector<cv::Point2f>>* ret = new std::vector<std::vector<cv::Point2f>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint2f_delete(std::vector<std::vector<cv::Point2f>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfPoint2f_len(const std::vector<std::vector<cv::Point2f>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfPoint2f_is_empty(const std::vector<std::vector<cv::Point2f>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfPoint2f_capacity(const std::vector<std::vector<cv::Point2f>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint2f_shrink_to_fit(std::vector<std::vector<cv::Point2f>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfPoint2f_reserve(std::vector<std::vector<cv::Point2f>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfPoint2f_remove(std::vector<std::vector<cv::Point2f>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfPoint2f_swap(std::vector<std::vector<cv::Point2f>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfPoint2f_clear(std::vector<std::vector<cv::Point2f>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfPoint2f_push(std::vector<std::vector<cv::Point2f>>* instance, std::vector<cv::Point2f>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfPoint2f_insert(std::vector<std::vector<cv::Point2f>>* instance, size_t index, std::vector<cv::Point2f>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfPoint2f_get(const std::vector<std::vector<cv::Point2f>>* instance, size_t index, std::vector<cv::Point2f>** ocvrs_return) {
			std::vector<cv::Point2f> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Point2f>(ret);
	}
	
	void cv_VectorOfVectorOfPoint2f_set(std::vector<std::vector<cv::Point2f>>* instance, size_t index, std::vector<cv::Point2f>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfPoint2f_input_array(std::vector<std::vector<cv::Point2f>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint2f_output_array(std::vector<std::vector<cv::Point2f>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint2f_input_output_array(std::vector<std::vector<cv::Point2f>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Point3d>>* cv_VectorOfVectorOfPoint3d_new() {
			std::vector<std::vector<cv::Point3d>>* ret = new std::vector<std::vector<cv::Point3d>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint3d_delete(std::vector<std::vector<cv::Point3d>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfPoint3d_len(const std::vector<std::vector<cv::Point3d>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfPoint3d_is_empty(const std::vector<std::vector<cv::Point3d>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfPoint3d_capacity(const std::vector<std::vector<cv::Point3d>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint3d_shrink_to_fit(std::vector<std::vector<cv::Point3d>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfPoint3d_reserve(std::vector<std::vector<cv::Point3d>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfPoint3d_remove(std::vector<std::vector<cv::Point3d>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfPoint3d_swap(std::vector<std::vector<cv::Point3d>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfPoint3d_clear(std::vector<std::vector<cv::Point3d>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfPoint3d_push(std::vector<std::vector<cv::Point3d>>* instance, std::vector<cv::Point3d>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfPoint3d_insert(std::vector<std::vector<cv::Point3d>>* instance, size_t index, std::vector<cv::Point3d>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfPoint3d_get(const std::vector<std::vector<cv::Point3d>>* instance, size_t index, std::vector<cv::Point3d>** ocvrs_return) {
			std::vector<cv::Point3d> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Point3d>(ret);
	}
	
	void cv_VectorOfVectorOfPoint3d_set(std::vector<std::vector<cv::Point3d>>* instance, size_t index, std::vector<cv::Point3d>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfPoint3d_input_array(std::vector<std::vector<cv::Point3d>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint3d_output_array(std::vector<std::vector<cv::Point3d>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint3d_input_output_array(std::vector<std::vector<cv::Point3d>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Point3f>>* cv_VectorOfVectorOfPoint3f_new() {
			std::vector<std::vector<cv::Point3f>>* ret = new std::vector<std::vector<cv::Point3f>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint3f_delete(std::vector<std::vector<cv::Point3f>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfPoint3f_len(const std::vector<std::vector<cv::Point3f>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfPoint3f_is_empty(const std::vector<std::vector<cv::Point3f>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfPoint3f_capacity(const std::vector<std::vector<cv::Point3f>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint3f_shrink_to_fit(std::vector<std::vector<cv::Point3f>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfPoint3f_reserve(std::vector<std::vector<cv::Point3f>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfPoint3f_remove(std::vector<std::vector<cv::Point3f>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfPoint3f_swap(std::vector<std::vector<cv::Point3f>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfPoint3f_clear(std::vector<std::vector<cv::Point3f>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfPoint3f_push(std::vector<std::vector<cv::Point3f>>* instance, std::vector<cv::Point3f>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfPoint3f_insert(std::vector<std::vector<cv::Point3f>>* instance, size_t index, std::vector<cv::Point3f>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfPoint3f_get(const std::vector<std::vector<cv::Point3f>>* instance, size_t index, std::vector<cv::Point3f>** ocvrs_return) {
			std::vector<cv::Point3f> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Point3f>(ret);
	}
	
	void cv_VectorOfVectorOfPoint3f_set(std::vector<std::vector<cv::Point3f>>* instance, size_t index, std::vector<cv::Point3f>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfPoint3f_input_array(std::vector<std::vector<cv::Point3f>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint3f_output_array(std::vector<std::vector<cv::Point3f>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint3f_input_output_array(std::vector<std::vector<cv::Point3f>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Point3i>>* cv_VectorOfVectorOfPoint3i_new() {
			std::vector<std::vector<cv::Point3i>>* ret = new std::vector<std::vector<cv::Point3i>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint3i_delete(std::vector<std::vector<cv::Point3i>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfPoint3i_len(const std::vector<std::vector<cv::Point3i>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfPoint3i_is_empty(const std::vector<std::vector<cv::Point3i>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfPoint3i_capacity(const std::vector<std::vector<cv::Point3i>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfPoint3i_shrink_to_fit(std::vector<std::vector<cv::Point3i>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfPoint3i_reserve(std::vector<std::vector<cv::Point3i>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfPoint3i_remove(std::vector<std::vector<cv::Point3i>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfPoint3i_swap(std::vector<std::vector<cv::Point3i>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfPoint3i_clear(std::vector<std::vector<cv::Point3i>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfPoint3i_push(std::vector<std::vector<cv::Point3i>>* instance, std::vector<cv::Point3i>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfPoint3i_insert(std::vector<std::vector<cv::Point3i>>* instance, size_t index, std::vector<cv::Point3i>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfPoint3i_get(const std::vector<std::vector<cv::Point3i>>* instance, size_t index, std::vector<cv::Point3i>** ocvrs_return) {
			std::vector<cv::Point3i> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Point3i>(ret);
	}
	
	void cv_VectorOfVectorOfPoint3i_set(std::vector<std::vector<cv::Point3i>>* instance, size_t index, std::vector<cv::Point3i>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfPoint3i_input_array(std::vector<std::vector<cv::Point3i>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint3i_output_array(std::vector<std::vector<cv::Point3i>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfPoint3i_input_output_array(std::vector<std::vector<cv::Point3i>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Range>>* cv_VectorOfVectorOfRange_new() {
			std::vector<std::vector<cv::Range>>* ret = new std::vector<std::vector<cv::Range>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfRange_delete(std::vector<std::vector<cv::Range>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfRange_len(const std::vector<std::vector<cv::Range>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfRange_is_empty(const std::vector<std::vector<cv::Range>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfRange_capacity(const std::vector<std::vector<cv::Range>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfRange_shrink_to_fit(std::vector<std::vector<cv::Range>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfRange_reserve(std::vector<std::vector<cv::Range>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfRange_remove(std::vector<std::vector<cv::Range>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfRange_swap(std::vector<std::vector<cv::Range>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfRange_clear(std::vector<std::vector<cv::Range>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfRange_push(std::vector<std::vector<cv::Range>>* instance, std::vector<cv::Range>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfRange_insert(std::vector<std::vector<cv::Range>>* instance, size_t index, std::vector<cv::Range>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfRange_get(const std::vector<std::vector<cv::Range>>* instance, size_t index, std::vector<cv::Range>** ocvrs_return) {
			std::vector<cv::Range> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Range>(ret);
	}
	
	void cv_VectorOfVectorOfRange_set(std::vector<std::vector<cv::Range>>* instance, size_t index, std::vector<cv::Range>* val) {
			(*instance)[index] = *val;
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Vec2i>>* cv_VectorOfVectorOfVec2i_new() {
			std::vector<std::vector<cv::Vec2i>>* ret = new std::vector<std::vector<cv::Vec2i>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfVec2i_delete(std::vector<std::vector<cv::Vec2i>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfVec2i_len(const std::vector<std::vector<cv::Vec2i>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfVec2i_is_empty(const std::vector<std::vector<cv::Vec2i>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfVec2i_capacity(const std::vector<std::vector<cv::Vec2i>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfVec2i_shrink_to_fit(std::vector<std::vector<cv::Vec2i>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfVec2i_reserve(std::vector<std::vector<cv::Vec2i>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfVec2i_remove(std::vector<std::vector<cv::Vec2i>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfVec2i_swap(std::vector<std::vector<cv::Vec2i>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfVec2i_clear(std::vector<std::vector<cv::Vec2i>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfVec2i_push(std::vector<std::vector<cv::Vec2i>>* instance, std::vector<cv::Vec2i>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfVec2i_insert(std::vector<std::vector<cv::Vec2i>>* instance, size_t index, std::vector<cv::Vec2i>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfVec2i_get(const std::vector<std::vector<cv::Vec2i>>* instance, size_t index, std::vector<cv::Vec2i>** ocvrs_return) {
			std::vector<cv::Vec2i> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Vec2i>(ret);
	}
	
	void cv_VectorOfVectorOfVec2i_set(std::vector<std::vector<cv::Vec2i>>* instance, size_t index, std::vector<cv::Vec2i>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfVec2i_input_array(std::vector<std::vector<cv::Vec2i>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfVec2i_output_array(std::vector<std::vector<cv::Vec2i>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfVec2i_input_output_array(std::vector<std::vector<cv::Vec2i>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<cv::Vec3f>>* cv_VectorOfVectorOfVec3f_new() {
			std::vector<std::vector<cv::Vec3f>>* ret = new std::vector<std::vector<cv::Vec3f>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfVec3f_delete(std::vector<std::vector<cv::Vec3f>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfVec3f_len(const std::vector<std::vector<cv::Vec3f>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfVec3f_is_empty(const std::vector<std::vector<cv::Vec3f>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfVec3f_capacity(const std::vector<std::vector<cv::Vec3f>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfVec3f_shrink_to_fit(std::vector<std::vector<cv::Vec3f>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfVec3f_reserve(std::vector<std::vector<cv::Vec3f>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfVec3f_remove(std::vector<std::vector<cv::Vec3f>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfVec3f_swap(std::vector<std::vector<cv::Vec3f>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfVec3f_clear(std::vector<std::vector<cv::Vec3f>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfVec3f_push(std::vector<std::vector<cv::Vec3f>>* instance, std::vector<cv::Vec3f>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfVec3f_insert(std::vector<std::vector<cv::Vec3f>>* instance, size_t index, std::vector<cv::Vec3f>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfVec3f_get(const std::vector<std::vector<cv::Vec3f>>* instance, size_t index, std::vector<cv::Vec3f>** ocvrs_return) {
			std::vector<cv::Vec3f> ret = (*instance)[index];
			*ocvrs_return = new std::vector<cv::Vec3f>(ret);
	}
	
	void cv_VectorOfVectorOfVec3f_set(std::vector<std::vector<cv::Vec3f>>* instance, size_t index, std::vector<cv::Vec3f>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfVec3f_input_array(std::vector<std::vector<cv::Vec3f>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfVec3f_output_array(std::vector<std::vector<cv::Vec3f>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfVec3f_input_output_array(std::vector<std::vector<cv::Vec3f>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<float>>* cv_VectorOfVectorOff32_new() {
			std::vector<std::vector<float>>* ret = new std::vector<std::vector<float>>();
			return ret;
	}
	
	void cv_VectorOfVectorOff32_delete(std::vector<std::vector<float>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOff32_len(const std::vector<std::vector<float>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOff32_is_empty(const std::vector<std::vector<float>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOff32_capacity(const std::vector<std::vector<float>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOff32_shrink_to_fit(std::vector<std::vector<float>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOff32_reserve(std::vector<std::vector<float>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOff32_remove(std::vector<std::vector<float>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOff32_swap(std::vector<std::vector<float>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOff32_clear(std::vector<std::vector<float>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOff32_push(std::vector<std::vector<float>>* instance, std::vector<float>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOff32_insert(std::vector<std::vector<float>>* instance, size_t index, std::vector<float>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOff32_get(const std::vector<std::vector<float>>* instance, size_t index, std::vector<float>** ocvrs_return) {
			std::vector<float> ret = (*instance)[index];
			*ocvrs_return = new std::vector<float>(ret);
	}
	
	void cv_VectorOfVectorOff32_set(std::vector<std::vector<float>>* instance, size_t index, std::vector<float>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOff32_input_array(std::vector<std::vector<float>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOff32_output_array(std::vector<std::vector<float>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOff32_input_output_array(std::vector<std::vector<float>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<double>>* cv_VectorOfVectorOff64_new() {
			std::vector<std::vector<double>>* ret = new std::vector<std::vector<double>>();
			return ret;
	}
	
	void cv_VectorOfVectorOff64_delete(std::vector<std::vector<double>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOff64_len(const std::vector<std::vector<double>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOff64_is_empty(const std::vector<std::vector<double>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOff64_capacity(const std::vector<std::vector<double>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOff64_shrink_to_fit(std::vector<std::vector<double>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOff64_reserve(std::vector<std::vector<double>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOff64_remove(std::vector<std::vector<double>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOff64_swap(std::vector<std::vector<double>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOff64_clear(std::vector<std::vector<double>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOff64_push(std::vector<std::vector<double>>* instance, std::vector<double>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOff64_insert(std::vector<std::vector<double>>* instance, size_t index, std::vector<double>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOff64_get(const std::vector<std::vector<double>>* instance, size_t index, std::vector<double>** ocvrs_return) {
			std::vector<double> ret = (*instance)[index];
			*ocvrs_return = new std::vector<double>(ret);
	}
	
	void cv_VectorOfVectorOff64_set(std::vector<std::vector<double>>* instance, size_t index, std::vector<double>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOff64_input_array(std::vector<std::vector<double>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOff64_output_array(std::vector<std::vector<double>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOff64_input_output_array(std::vector<std::vector<double>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<int>>* cv_VectorOfVectorOfi32_new() {
			std::vector<std::vector<int>>* ret = new std::vector<std::vector<int>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfi32_delete(std::vector<std::vector<int>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfi32_len(const std::vector<std::vector<int>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfi32_is_empty(const std::vector<std::vector<int>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfi32_capacity(const std::vector<std::vector<int>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfi32_shrink_to_fit(std::vector<std::vector<int>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfi32_reserve(std::vector<std::vector<int>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfi32_remove(std::vector<std::vector<int>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfi32_swap(std::vector<std::vector<int>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfi32_clear(std::vector<std::vector<int>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfi32_push(std::vector<std::vector<int>>* instance, std::vector<int>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfi32_insert(std::vector<std::vector<int>>* instance, size_t index, std::vector<int>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfi32_get(const std::vector<std::vector<int>>* instance, size_t index, std::vector<int>** ocvrs_return) {
			std::vector<int> ret = (*instance)[index];
			*ocvrs_return = new std::vector<int>(ret);
	}
	
	void cv_VectorOfVectorOfi32_set(std::vector<std::vector<int>>* instance, size_t index, std::vector<int>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfi32_input_array(std::vector<std::vector<int>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfi32_output_array(std::vector<std::vector<int>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfi32_input_output_array(std::vector<std::vector<int>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<char>>* cv_VectorOfVectorOfi8_new() {
			std::vector<std::vector<char>>* ret = new std::vector<std::vector<char>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfi8_delete(std::vector<std::vector<char>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfi8_len(const std::vector<std::vector<char>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfi8_is_empty(const std::vector<std::vector<char>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfi8_capacity(const std::vector<std::vector<char>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfi8_shrink_to_fit(std::vector<std::vector<char>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfi8_reserve(std::vector<std::vector<char>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfi8_remove(std::vector<std::vector<char>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfi8_swap(std::vector<std::vector<char>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfi8_clear(std::vector<std::vector<char>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfi8_push(std::vector<std::vector<char>>* instance, std::vector<char>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfi8_insert(std::vector<std::vector<char>>* instance, size_t index, std::vector<char>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfi8_get(const std::vector<std::vector<char>>* instance, size_t index, std::vector<char>** ocvrs_return) {
			std::vector<char> ret = (*instance)[index];
			*ocvrs_return = new std::vector<char>(ret);
	}
	
	void cv_VectorOfVectorOfi8_set(std::vector<std::vector<char>>* instance, size_t index, std::vector<char>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfi8_input_array(std::vector<std::vector<char>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfi8_output_array(std::vector<std::vector<char>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfi8_input_output_array(std::vector<std::vector<char>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<std::vector<unsigned char>>* cv_VectorOfVectorOfu8_new() {
			std::vector<std::vector<unsigned char>>* ret = new std::vector<std::vector<unsigned char>>();
			return ret;
	}
	
	void cv_VectorOfVectorOfu8_delete(std::vector<std::vector<unsigned char>>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfVectorOfu8_len(const std::vector<std::vector<unsigned char>>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfVectorOfu8_is_empty(const std::vector<std::vector<unsigned char>>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfVectorOfu8_capacity(const std::vector<std::vector<unsigned char>>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfVectorOfu8_shrink_to_fit(std::vector<std::vector<unsigned char>>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfVectorOfu8_reserve(std::vector<std::vector<unsigned char>>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfVectorOfu8_remove(std::vector<std::vector<unsigned char>>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfVectorOfu8_swap(std::vector<std::vector<unsigned char>>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfVectorOfu8_clear(std::vector<std::vector<unsigned char>>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfVectorOfu8_push(std::vector<std::vector<unsigned char>>* instance, std::vector<unsigned char>* val) {
			instance->push_back(*val);
	}
	
	void cv_VectorOfVectorOfu8_insert(std::vector<std::vector<unsigned char>>* instance, size_t index, std::vector<unsigned char>* val) {
			instance->insert(instance->begin() + index, *val);
	}
	
	void cv_VectorOfVectorOfu8_get(const std::vector<std::vector<unsigned char>>* instance, size_t index, std::vector<unsigned char>** ocvrs_return) {
			std::vector<unsigned char> ret = (*instance)[index];
			*ocvrs_return = new std::vector<unsigned char>(ret);
	}
	
	void cv_VectorOfVectorOfu8_set(std::vector<std::vector<unsigned char>>* instance, size_t index, std::vector<unsigned char>* val) {
			(*instance)[index] = *val;
	}
	
	void cv_VectorOfVectorOfu8_input_array(std::vector<std::vector<unsigned char>>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfu8_output_array(std::vector<std::vector<unsigned char>>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfVectorOfu8_input_output_array(std::vector<std::vector<unsigned char>>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
}


extern "C" {
	std::vector<bool>* cv_VectorOfbool_new() {
			std::vector<bool>* ret = new std::vector<bool>();
			return ret;
	}
	
	void cv_VectorOfbool_delete(std::vector<bool>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfbool_len(const std::vector<bool>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfbool_is_empty(const std::vector<bool>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfbool_capacity(const std::vector<bool>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfbool_shrink_to_fit(std::vector<bool>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfbool_reserve(std::vector<bool>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfbool_remove(std::vector<bool>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfbool_swap(std::vector<bool>* instance, size_t index1, size_t index2) {
			instance->swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfbool_clear(std::vector<bool>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfbool_push(std::vector<bool>* instance, bool val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfbool_insert(std::vector<bool>* instance, size_t index, bool val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfbool_get(const std::vector<bool>* instance, size_t index, bool* ocvrs_return) {
			bool ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfbool_set(std::vector<bool>* instance, size_t index, bool val) {
			(*instance)[index] = val;
	}
	
}


extern "C" {
	std::vector<float>* cv_VectorOff32_new() {
			std::vector<float>* ret = new std::vector<float>();
			return ret;
	}
	
	void cv_VectorOff32_delete(std::vector<float>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOff32_len(const std::vector<float>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOff32_is_empty(const std::vector<float>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOff32_capacity(const std::vector<float>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOff32_shrink_to_fit(std::vector<float>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOff32_reserve(std::vector<float>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOff32_remove(std::vector<float>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOff32_swap(std::vector<float>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOff32_clear(std::vector<float>* instance) {
			instance->clear();
	}
	
	void cv_VectorOff32_push(std::vector<float>* instance, float val) {
			instance->push_back(val);
	}
	
	void cv_VectorOff32_insert(std::vector<float>* instance, size_t index, float val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOff32_get(const std::vector<float>* instance, size_t index, float* ocvrs_return) {
			float ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOff32_set(std::vector<float>* instance, size_t index, float val) {
			(*instance)[index] = val;
	}
	
	std::vector<float>* cv_VectorOff32_clone(const std::vector<float>* instance) {
			std::vector<float> ret = std::vector<float>(*instance);
			return new std::vector<float>(ret);
	}
	
	void cv_VectorOff32_input_array(std::vector<float>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOff32_output_array(std::vector<float>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOff32_input_output_array(std::vector<float>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const float* cv_VectorOff32_data(const std::vector<float>* instance) {
		return instance->data();
	}
	
	float* cv_VectorOff32_data_mut(std::vector<float>* instance) {
		return instance->data();
	}
	
	std::vector<float>* cv_VectorOff32_from_slice(const float* data, size_t len) {
		return new std::vector<float>(data, data + len);
	}
}


extern "C" {
	std::vector<double>* cv_VectorOff64_new() {
			std::vector<double>* ret = new std::vector<double>();
			return ret;
	}
	
	void cv_VectorOff64_delete(std::vector<double>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOff64_len(const std::vector<double>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOff64_is_empty(const std::vector<double>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOff64_capacity(const std::vector<double>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOff64_shrink_to_fit(std::vector<double>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOff64_reserve(std::vector<double>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOff64_remove(std::vector<double>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOff64_swap(std::vector<double>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOff64_clear(std::vector<double>* instance) {
			instance->clear();
	}
	
	void cv_VectorOff64_push(std::vector<double>* instance, double val) {
			instance->push_back(val);
	}
	
	void cv_VectorOff64_insert(std::vector<double>* instance, size_t index, double val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOff64_get(const std::vector<double>* instance, size_t index, double* ocvrs_return) {
			double ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOff64_set(std::vector<double>* instance, size_t index, double val) {
			(*instance)[index] = val;
	}
	
	std::vector<double>* cv_VectorOff64_clone(const std::vector<double>* instance) {
			std::vector<double> ret = std::vector<double>(*instance);
			return new std::vector<double>(ret);
	}
	
	void cv_VectorOff64_input_array(std::vector<double>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOff64_output_array(std::vector<double>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOff64_input_output_array(std::vector<double>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const double* cv_VectorOff64_data(const std::vector<double>* instance) {
		return instance->data();
	}
	
	double* cv_VectorOff64_data_mut(std::vector<double>* instance) {
		return instance->data();
	}
	
	std::vector<double>* cv_VectorOff64_from_slice(const double* data, size_t len) {
		return new std::vector<double>(data, data + len);
	}
}


extern "C" {
	std::vector<int>* cv_VectorOfi32_new() {
			std::vector<int>* ret = new std::vector<int>();
			return ret;
	}
	
	void cv_VectorOfi32_delete(std::vector<int>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfi32_len(const std::vector<int>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfi32_is_empty(const std::vector<int>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfi32_capacity(const std::vector<int>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfi32_shrink_to_fit(std::vector<int>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfi32_reserve(std::vector<int>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfi32_remove(std::vector<int>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfi32_swap(std::vector<int>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfi32_clear(std::vector<int>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfi32_push(std::vector<int>* instance, int val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfi32_insert(std::vector<int>* instance, size_t index, int val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfi32_get(const std::vector<int>* instance, size_t index, int* ocvrs_return) {
			int ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfi32_set(std::vector<int>* instance, size_t index, int val) {
			(*instance)[index] = val;
	}
	
	std::vector<int>* cv_VectorOfi32_clone(const std::vector<int>* instance) {
			std::vector<int> ret = std::vector<int>(*instance);
			return new std::vector<int>(ret);
	}
	
	void cv_VectorOfi32_input_array(std::vector<int>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfi32_output_array(std::vector<int>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfi32_input_output_array(std::vector<int>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const int* cv_VectorOfi32_data(const std::vector<int>* instance) {
		return instance->data();
	}
	
	int* cv_VectorOfi32_data_mut(std::vector<int>* instance) {
		return instance->data();
	}
	
	std::vector<int>* cv_VectorOfi32_from_slice(const int* data, size_t len) {
		return new std::vector<int>(data, data + len);
	}
}


extern "C" {
	std::vector<char>* cv_VectorOfi8_new() {
			std::vector<char>* ret = new std::vector<char>();
			return ret;
	}
	
	void cv_VectorOfi8_delete(std::vector<char>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfi8_len(const std::vector<char>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfi8_is_empty(const std::vector<char>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfi8_capacity(const std::vector<char>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfi8_shrink_to_fit(std::vector<char>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfi8_reserve(std::vector<char>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfi8_remove(std::vector<char>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfi8_swap(std::vector<char>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfi8_clear(std::vector<char>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfi8_push(std::vector<char>* instance, char val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfi8_insert(std::vector<char>* instance, size_t index, char val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfi8_get(const std::vector<char>* instance, size_t index, char* ocvrs_return) {
			char ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfi8_set(std::vector<char>* instance, size_t index, char val) {
			(*instance)[index] = val;
	}
	
	std::vector<char>* cv_VectorOfi8_clone(const std::vector<char>* instance) {
			std::vector<char> ret = std::vector<char>(*instance);
			return new std::vector<char>(ret);
	}
	
	void cv_VectorOfi8_input_array(std::vector<char>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfi8_output_array(std::vector<char>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfi8_input_output_array(std::vector<char>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const char* cv_VectorOfi8_data(const std::vector<char>* instance) {
		return instance->data();
	}
	
	char* cv_VectorOfi8_data_mut(std::vector<char>* instance) {
		return instance->data();
	}
	
	std::vector<char>* cv_VectorOfi8_from_slice(const char* data, size_t len) {
		return new std::vector<char>(data, data + len);
	}
}


extern "C" {
	std::vector<size_t>* cv_VectorOfsize_t_new() {
			std::vector<size_t>* ret = new std::vector<size_t>();
			return ret;
	}
	
	void cv_VectorOfsize_t_delete(std::vector<size_t>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfsize_t_len(const std::vector<size_t>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfsize_t_is_empty(const std::vector<size_t>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfsize_t_capacity(const std::vector<size_t>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfsize_t_shrink_to_fit(std::vector<size_t>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfsize_t_reserve(std::vector<size_t>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfsize_t_remove(std::vector<size_t>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfsize_t_swap(std::vector<size_t>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfsize_t_clear(std::vector<size_t>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfsize_t_push(std::vector<size_t>* instance, size_t val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfsize_t_insert(std::vector<size_t>* instance, size_t index, size_t val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfsize_t_get(const std::vector<size_t>* instance, size_t index, size_t* ocvrs_return) {
			size_t ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfsize_t_set(std::vector<size_t>* instance, size_t index, size_t val) {
			(*instance)[index] = val;
	}
	
	std::vector<size_t>* cv_VectorOfsize_t_clone(const std::vector<size_t>* instance) {
			std::vector<size_t> ret = std::vector<size_t>(*instance);
			return new std::vector<size_t>(ret);
	}
	
	const size_t* cv_VectorOfsize_t_data(const std::vector<size_t>* instance) {
		return instance->data();
	}
	
	size_t* cv_VectorOfsize_t_data_mut(std::vector<size_t>* instance) {
		return instance->data();
	}
	
	std::vector<size_t>* cv_VectorOfsize_t_from_slice(const size_t* data, size_t len) {
		return new std::vector<size_t>(data, data + len);
	}
}


extern "C" {
	std::vector<unsigned char>* cv_VectorOfu8_new() {
			std::vector<unsigned char>* ret = new std::vector<unsigned char>();
			return ret;
	}
	
	void cv_VectorOfu8_delete(std::vector<unsigned char>* instance) {
			delete instance;
	}
	
	size_t cv_VectorOfu8_len(const std::vector<unsigned char>* instance) {
			size_t ret = instance->size();
			return ret;
	}
	
	bool cv_VectorOfu8_is_empty(const std::vector<unsigned char>* instance) {
			bool ret = instance->empty();
			return ret;
	}
	
	size_t cv_VectorOfu8_capacity(const std::vector<unsigned char>* instance) {
			size_t ret = instance->capacity();
			return ret;
	}
	
	void cv_VectorOfu8_shrink_to_fit(std::vector<unsigned char>* instance) {
			instance->shrink_to_fit();
	}
	
	void cv_VectorOfu8_reserve(std::vector<unsigned char>* instance, size_t additional) {
			instance->reserve(instance->size() + additional);
	}
	
	void cv_VectorOfu8_remove(std::vector<unsigned char>* instance, size_t index) {
			instance->erase(instance->begin() + index);
	}
	
	void cv_VectorOfu8_swap(std::vector<unsigned char>* instance, size_t index1, size_t index2) {
			std::swap((*instance)[index1], (*instance)[index2]);
	}
	
	void cv_VectorOfu8_clear(std::vector<unsigned char>* instance) {
			instance->clear();
	}
	
	void cv_VectorOfu8_push(std::vector<unsigned char>* instance, unsigned char val) {
			instance->push_back(val);
	}
	
	void cv_VectorOfu8_insert(std::vector<unsigned char>* instance, size_t index, unsigned char val) {
			instance->insert(instance->begin() + index, val);
	}
	
	void cv_VectorOfu8_get(const std::vector<unsigned char>* instance, size_t index, unsigned char* ocvrs_return) {
			unsigned char ret = (*instance)[index];
			*ocvrs_return = ret;
	}
	
	void cv_VectorOfu8_set(std::vector<unsigned char>* instance, size_t index, unsigned char val) {
			(*instance)[index] = val;
	}
	
	std::vector<unsigned char>* cv_VectorOfu8_clone(const std::vector<unsigned char>* instance) {
			std::vector<unsigned char> ret = std::vector<unsigned char>(*instance);
			return new std::vector<unsigned char>(ret);
	}
	
	void cv_VectorOfu8_input_array(std::vector<unsigned char>* instance, Result<cv::_InputArray*>* ocvrs_return) {
		try {
			cv::_InputArray ret = cv::_InputArray(*instance);
			Ok(new cv::_InputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfu8_output_array(std::vector<unsigned char>* instance, Result<cv::_OutputArray*>* ocvrs_return) {
		try {
			cv::_OutputArray ret = cv::_OutputArray(*instance);
			Ok(new cv::_OutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_OutputArray*>, ocvrs_return);
	}
	
	void cv_VectorOfu8_input_output_array(std::vector<unsigned char>* instance, Result<cv::_InputOutputArray*>* ocvrs_return) {
		try {
			cv::_InputOutputArray ret = cv::_InputOutputArray(*instance);
			Ok(new cv::_InputOutputArray(ret), ocvrs_return);
		} OCVRS_CATCH(Result<cv::_InputOutputArray*>, ocvrs_return);
	}
	
	const unsigned char* cv_VectorOfu8_data(const std::vector<unsigned char>* instance) {
		return instance->data();
	}
	
	unsigned char* cv_VectorOfu8_data_mut(std::vector<unsigned char>* instance) {
		return instance->data();
	}
	
	std::vector<unsigned char>* cv_VectorOfu8_from_slice(const unsigned char* data, size_t len) {
		return new std::vector<unsigned char>(data, data + len);
	}
}


