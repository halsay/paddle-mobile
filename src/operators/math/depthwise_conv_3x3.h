/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include <algorithm>
#include <vector>
#include "framework/tensor.h"
#include "operators/math/conv_func.h"

namespace paddle_mobile {
namespace operators {
namespace math {
using framework::Tensor;
using std::max;
using std::min;
using std::vector;

void DepthwiseConv3x3(const Tensor *input, vector<int> strides,
                      vector<int> paddings, const Tensor *filter, Tensor *bias,
                      Tensor *output, bool if_bias);
void DepthwiseConv3x3s1p1(const Tensor *input, const Tensor *filter,
                          Tensor *output, Tensor *bias, bool if_bias);
void DepthwiseConvAddBNRelu3x3s1p1(const Tensor *input, const Tensor *filter,
                                   Tensor *output, Tensor *bias, bool if_bias,
                                   const Tensor *new_scale,
                                   const Tensor *new_bias, bool if_bn,
                                   bool if_relu);
}  // namespace math
}  // namespace operators
}  // namespace paddle_mobile
