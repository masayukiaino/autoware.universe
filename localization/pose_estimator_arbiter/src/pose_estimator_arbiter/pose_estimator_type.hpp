// Copyright 2023 Autoware Foundation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef POSE_ESTIMATOR_ARBITER__POSE_ESTIMATOR_TYPE_HPP_
#define POSE_ESTIMATOR_ARBITER__POSE_ESTIMATOR_TYPE_HPP_

namespace pose_estimator_arbiter
{
enum class PoseEstimatorType : int { ndt = 1, yabloc = 2, eagleye = 4, artag = 8 };
}

#endif  // POSE_ESTIMATOR_ARBITER__POSE_ESTIMATOR_TYPE_HPP_
