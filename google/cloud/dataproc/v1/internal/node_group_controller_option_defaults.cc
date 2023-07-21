// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/dataproc/v1/node_groups.proto

#include "google/cloud/dataproc/v1/internal/node_group_controller_option_defaults.h"
#include "google/cloud/dataproc/v1/node_group_controller_connection.h"
#include "google/cloud/dataproc/v1/node_group_controller_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options NodeGroupControllerDefaultOptions(std::string const& location,
                                          Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_NODE_GROUP_CONTROLLER_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_NODE_GROUP_CONTROLLER_AUTHORITY",
      absl::StrCat(location, "-", "dataproc.googleapis.com"));
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<dataproc_v1::NodeGroupControllerRetryPolicyOption>()) {
    options.set<dataproc_v1::NodeGroupControllerRetryPolicyOption>(
        dataproc_v1::NodeGroupControllerLimitedTimeRetryPolicy(
            std::chrono::minutes(30))
            .clone());
  }
  if (!options.has<dataproc_v1::NodeGroupControllerBackoffPolicyOption>()) {
    options.set<dataproc_v1::NodeGroupControllerBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<dataproc_v1::NodeGroupControllerPollingPolicyOption>()) {
    options.set<dataproc_v1::NodeGroupControllerPollingPolicyOption>(
        GenericPollingPolicy<
            dataproc_v1::NodeGroupControllerRetryPolicyOption::Type,
            dataproc_v1::NodeGroupControllerBackoffPolicyOption::Type>(
            options.get<dataproc_v1::NodeGroupControllerRetryPolicyOption>()
                ->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options
           .has<dataproc_v1::
                    NodeGroupControllerConnectionIdempotencyPolicyOption>()) {
    options
        .set<dataproc_v1::NodeGroupControllerConnectionIdempotencyPolicyOption>(
            dataproc_v1::
                MakeDefaultNodeGroupControllerConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google
