/***************************************************************************
*  Copyright (C) Codeplay Software Limited
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  For your convenience, a copy of the License has been included in this
*  repository.
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
**************************************************************************/
#ifndef _ONEMATH_BLAS_CUBLAS_HPP_
#define _ONEMATH_BLAS_CUBLAS_HPP_
#if __has_include(<sycl/sycl.hpp>)
#include <sycl/sycl.hpp>
#else
#include <CL/sycl.hpp>
#endif
#include <complex>
#include <cstdint>
#include <string>
#include "oneapi/math/types.hpp"

namespace oneapi {
namespace math {
using oneapi::math::diag;
using oneapi::math::offset;
using oneapi::math::side;
using oneapi::math::transpose;
using oneapi::math::uplo;
namespace blas {
namespace cublas {
namespace column_major {

#include "onemath_blas_cublas.hxx"

} //namespace column_major
namespace row_major {

#include "onemath_blas_cublas.hxx"

} //namespace row_major
} //namespace cublas
} //namespace blas
} //namespace math
} //namespace oneapi

#endif //_ONEMATH_BLAS_CUBLAS_HPP_
