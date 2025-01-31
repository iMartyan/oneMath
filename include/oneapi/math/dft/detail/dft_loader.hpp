/*******************************************************************************
* Copyright 2023 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions
* and limitations under the License.
*
*
* SPDX-License-Identifier: Apache-2.0
*******************************************************************************/

#ifndef _ONEMATH_DFT_LOADER_HPP_
#define _ONEMATH_DFT_LOADER_HPP_

#if __has_include(<sycl/sycl.hpp>)
#include <sycl/sycl.hpp>
#else
#include <CL/sycl.hpp>
#endif

#include "oneapi/math/detail/export.hpp"
#include "oneapi/math/dft/detail/types_impl.hpp"

namespace oneapi {
namespace math {
namespace dft {
namespace detail {

template <precision prec, domain dom>
class commit_impl;

template <precision prec, domain dom>
class descriptor;

template <precision prec, domain dom>
ONEMATH_EXPORT commit_impl<prec, dom>* create_commit(const descriptor<prec, dom>& desc,
                                                     sycl::queue& queue);

} // namespace detail
} // namespace dft
} // namespace math
} // namespace oneapi

#endif //_ONEMATH_DFT_LOADER_HPP_
