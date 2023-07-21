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
// source: google/logging/v2/logging_config.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_CONNECTION_IMPL_H

#include "google/cloud/logging/v2/config_service_v2_connection.h"
#include "google/cloud/logging/v2/config_service_v2_connection_idempotency_policy.h"
#include "google/cloud/logging/v2/config_service_v2_options.h"
#include "google/cloud/logging/v2/internal/config_service_v2_retry_traits.h"
#include "google/cloud/logging/v2/internal/config_service_v2_stub.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ConfigServiceV2ConnectionImpl
    : public logging_v2::ConfigServiceV2Connection {
 public:
  ~ConfigServiceV2ConnectionImpl() override = default;

  ConfigServiceV2ConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<logging_v2_internal::ConfigServiceV2Stub> stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::logging::v2::LogBucket> ListBuckets(
      google::logging::v2::ListBucketsRequest request) override;

  StatusOr<google::logging::v2::LogBucket> GetBucket(
      google::logging::v2::GetBucketRequest const& request) override;

  future<StatusOr<google::logging::v2::LogBucket>> CreateBucketAsync(
      google::logging::v2::CreateBucketRequest const& request) override;

  future<StatusOr<google::logging::v2::LogBucket>> UpdateBucketAsync(
      google::logging::v2::UpdateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> CreateBucket(
      google::logging::v2::CreateBucketRequest const& request) override;

  StatusOr<google::logging::v2::LogBucket> UpdateBucket(
      google::logging::v2::UpdateBucketRequest const& request) override;

  Status DeleteBucket(
      google::logging::v2::DeleteBucketRequest const& request) override;

  Status UndeleteBucket(
      google::logging::v2::UndeleteBucketRequest const& request) override;

  StreamRange<google::logging::v2::LogView> ListViews(
      google::logging::v2::ListViewsRequest request) override;

  StatusOr<google::logging::v2::LogView> GetView(
      google::logging::v2::GetViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> CreateView(
      google::logging::v2::CreateViewRequest const& request) override;

  StatusOr<google::logging::v2::LogView> UpdateView(
      google::logging::v2::UpdateViewRequest const& request) override;

  Status DeleteView(
      google::logging::v2::DeleteViewRequest const& request) override;

  StreamRange<google::logging::v2::LogSink> ListSinks(
      google::logging::v2::ListSinksRequest request) override;

  StatusOr<google::logging::v2::LogSink> GetSink(
      google::logging::v2::GetSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> CreateSink(
      google::logging::v2::CreateSinkRequest const& request) override;

  StatusOr<google::logging::v2::LogSink> UpdateSink(
      google::logging::v2::UpdateSinkRequest const& request) override;

  Status DeleteSink(
      google::logging::v2::DeleteSinkRequest const& request) override;

  future<StatusOr<google::logging::v2::Link>> CreateLink(
      google::logging::v2::CreateLinkRequest const& request) override;

  future<StatusOr<google::logging::v2::LinkMetadata>> DeleteLink(
      google::logging::v2::DeleteLinkRequest const& request) override;

  StreamRange<google::logging::v2::Link> ListLinks(
      google::logging::v2::ListLinksRequest request) override;

  StatusOr<google::logging::v2::Link> GetLink(
      google::logging::v2::GetLinkRequest const& request) override;

  StreamRange<google::logging::v2::LogExclusion> ListExclusions(
      google::logging::v2::ListExclusionsRequest request) override;

  StatusOr<google::logging::v2::LogExclusion> GetExclusion(
      google::logging::v2::GetExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> CreateExclusion(
      google::logging::v2::CreateExclusionRequest const& request) override;

  StatusOr<google::logging::v2::LogExclusion> UpdateExclusion(
      google::logging::v2::UpdateExclusionRequest const& request) override;

  Status DeleteExclusion(
      google::logging::v2::DeleteExclusionRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> GetCmekSettings(
      google::logging::v2::GetCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::CmekSettings> UpdateCmekSettings(
      google::logging::v2::UpdateCmekSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> GetSettings(
      google::logging::v2::GetSettingsRequest const& request) override;

  StatusOr<google::logging::v2::Settings> UpdateSettings(
      google::logging::v2::UpdateSettingsRequest const& request) override;

  future<StatusOr<google::logging::v2::CopyLogEntriesResponse>> CopyLogEntries(
      google::logging::v2::CopyLogEntriesRequest const& request) override;

 private:
  std::unique_ptr<logging_v2::ConfigServiceV2RetryPolicy> retry_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<logging_v2::ConfigServiceV2RetryPolicyOption>()) {
      return options.get<logging_v2::ConfigServiceV2RetryPolicyOption>()
          ->clone();
    }
    return options_.get<logging_v2::ConfigServiceV2RetryPolicyOption>()
        ->clone();
  }

  std::unique_ptr<BackoffPolicy> backoff_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<logging_v2::ConfigServiceV2BackoffPolicyOption>()) {
      return options.get<logging_v2::ConfigServiceV2BackoffPolicyOption>()
          ->clone();
    }
    return options_.get<logging_v2::ConfigServiceV2BackoffPolicyOption>()
        ->clone();
  }

  std::unique_ptr<logging_v2::ConfigServiceV2ConnectionIdempotencyPolicy>
  idempotency_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<
            logging_v2::ConfigServiceV2ConnectionIdempotencyPolicyOption>()) {
      return options
          .get<logging_v2::ConfigServiceV2ConnectionIdempotencyPolicyOption>()
          ->clone();
    }
    return options_
        .get<logging_v2::ConfigServiceV2ConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<PollingPolicy> polling_policy() {
    auto const& options = internal::CurrentOptions();
    if (options.has<logging_v2::ConfigServiceV2PollingPolicyOption>()) {
      return options.get<logging_v2::ConfigServiceV2PollingPolicyOption>()
          ->clone();
    }
    return options_.get<logging_v2::ConfigServiceV2PollingPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<logging_v2_internal::ConfigServiceV2Stub> stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_CONFIG_SERVICE_V2_CONNECTION_IMPL_H
