#pragma once
#if !defined(_BASIC_OPERATIONS)
#define _BASIC_OPERATIONS

#include"sse_macros.h"

namespace __packed_sse_ {
	// packed double-precision floating-point multiplication
	extern "C" bool mul_sse_pd(double const* x_aligned_16, double const* y_aligned_16, int n2, double* out_aligned_16);
	// packed single-precision floating-point multiplication
	extern "C" bool mul_sse_ps(float const* x_aligned_16, float const* y_aligned_16, int n4, float* out_aligned_16);
	// packed double-precision floating-point division
	extern "C" bool div_sse_pd(double const* x_aligned_16, double const* y_aligned_16, int n2, double* out_aligned_16);
	// packed single-precision floating-point division
	extern "C" bool div_sse_ps(float const* x_aligned_16, float const* y_aligned_16, int n4, float* out_aligned_16);
	// packed double-precision floating-point addition
	extern "C" bool add_sse_pd(double const* x_aligned_16, double const* y_aligned_16, int n2, double* out_aligned_16);
	// packed single-precision floating-point addition
	extern "C" bool add_sse_ps(float const* x_aligned_16, float const* y_aligned_16, int n4, float* out_aligned_16);
	// packed double-precision floating-point subtraction
	extern "C" bool sub_sse_pd(double const* x_aligned_16, double const* y_aligned_16, int n2, double* out_aligned_16);
	// packed single-precision floating-point subtraction
	extern "C" bool sub_sse_ps(float const* x_aligned_16, float const* y_aligned_16, int n4, float* out_aligned_16);

}


namespace packed_sse {

	// packed double-precision floating-point multiplication
	bool mul_sse_packed(double const* x_aligned_16, double const* y_aligned_16, int size2, double* out_aligned_16) {
		return __packed_sse_::mul_sse_pd(x_aligned_16, y_aligned_16, size2, out_aligned_16);
	}
	// packed single-precision floating-point multiplication
	bool mul_sse_packed(float const* x_aligned_16, float const* y_aligned_16, int size4, float* out_aligned_16) {
		return __packed_sse_::mul_sse_ps(x_aligned_16, y_aligned_16, size4, out_aligned_16);
	}

	// packed double-precision floating-point division
	bool div_sse_packed(double const* x_aligned_16, double const* y_aligned_16, int size2, double* out_aligned_16) {
		return __packed_sse_::div_sse_pd(x_aligned_16, y_aligned_16, size2, out_aligned_16);
	}
	// packed single-precision floating-point division
	bool div_sse_packed(float const* x_aligned_16, float const* y_aligned_16, int size4, float* out_aligned_16) {
		return __packed_sse_::div_sse_ps(x_aligned_16, y_aligned_16, size4, out_aligned_16);
	}

	// packed double-precision floating-point addition
	bool add_sse_packed(double const* x_aligned_16, double const* y_aligned_16, int size2, double* out_aligned_16) {
		return __packed_sse_::add_sse_pd(x_aligned_16, y_aligned_16, size2, out_aligned_16);
	}
	// packed single-precision floating-point addition
	bool add_sse_packed(float const* x_aligned_16, float const* y_aligned_16, int size4, float* out_aligned_16) {
		return __packed_sse_::add_sse_ps(x_aligned_16, y_aligned_16, size4, out_aligned_16);
	}

	// packed double-precision floating-point subtraction
	bool sub_sse_packed(double const* x_aligned_16, double const* y_aligned_16, int size2, double* out_aligned_16) {
		return __packed_sse_::sub_sse_pd(x_aligned_16, y_aligned_16, size2, out_aligned_16);
	}
	// packed single-precision floating-point subtraction
	bool sub_sse_packed(float const* x_aligned_16, float const* y_aligned_16, int size4, float* out_aligned_16) {
		return __packed_sse_::sub_sse_ps(x_aligned_16, y_aligned_16, size4, out_aligned_16);
	}



}






#endif ///_BASIC_OPERATIONS