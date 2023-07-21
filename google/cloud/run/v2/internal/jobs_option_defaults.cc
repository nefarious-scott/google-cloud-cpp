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
// source: google/cloud/run/v2/job.proto

#include "google/cloud/run/v2/internal/jobs_option_defaults.h"
#include "google/cloud/run/v2/jobs_connection.h"
#include "google/cloud/run/v2/jobs_options.h"
#include "google/cloud/internal/populate_common_options.h"
#include "google/cloud/internal/populate_grpc_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

namespace {
auto constexpr kBackoffScaling = 2.0;
}  // namespace

Options JobsDefaultOptions(Options options) {
  options = google::cloud::internal::PopulateCommonOptions(
      std::move(options), "GOOGLE_CLOUD_CPP_JOBS_ENDPOINT", "",
      "GOOGLE_CLOUD_CPP_JOBS_AUTHORITY", "run.googleapis.com");
  options =
      google::cloud::internal::PopulateGrpcOptions(std::move(options), "");
  if (!options.has<run_v2::JobsRetryPolicyOption>()) {
    options.set<run_v2::JobsRetryPolicyOption>(
        run_v2::JobsLimitedTimeRetryPolicy(std::chrono::minutes(30)).clone());
  }
  if (!options.has<run_v2::JobsBackoffPolicyOption>()) {
    options.set<run_v2::JobsBackoffPolicyOption>(
        ExponentialBackoffPolicy(
            std::chrono::seconds(0), std::chrono::seconds(1),
            std::chrono::minutes(5), kBackoffScaling, kBackoffScaling)
            .clone());
  }
  if (!options.has<run_v2::JobsPollingPolicyOption>()) {
    options.set<run_v2::JobsPollingPolicyOption>(
        GenericPollingPolicy<run_v2::JobsRetryPolicyOption::Type,
                             run_v2::JobsBackoffPolicyOption::Type>(
            options.get<run_v2::JobsRetryPolicyOption>()->clone(),
            ExponentialBackoffPolicy(std::chrono::seconds(1),
                                     std::chrono::minutes(5), kBackoffScaling)
                .clone())
            .clone());
  }
  if (!options.has<run_v2::JobsConnectionIdempotencyPolicyOption>()) {
    options.set<run_v2::JobsConnectionIdempotencyPolicyOption>(
        run_v2::MakeDefaultJobsConnectionIdempotencyPolicy());
  }

  return options;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google
