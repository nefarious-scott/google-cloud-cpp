// Copyright 2022 Google LLC
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
// source: generator/integration_tests/test.proto

#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_rest_connection_impl.h"
#include "generator/integration_tests/golden/v1/internal/golden_kitchen_sink_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_retry_loop.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace golden_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GoldenKitchenSinkRestConnectionImpl::GoldenKitchenSinkRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<golden_v1_internal::GoldenKitchenSinkRestStub> stub,
    Options options)
  : background_(std::move(background)), stub_(std::move(stub)),
    options_(internal::MergeOptions(
        std::move(options),
        GoldenKitchenSinkConnection::options())) {}

StatusOr<google::test::admin::database::v1::GenerateAccessTokenResponse>
GoldenKitchenSinkRestConnectionImpl::GenerateAccessToken(google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateAccessToken(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::test::admin::database::v1::GenerateAccessTokenRequest const& request) {
        return stub_->GenerateAccessToken(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::test::admin::database::v1::GenerateIdTokenResponse>
GoldenKitchenSinkRestConnectionImpl::GenerateIdToken(google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GenerateIdToken(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::test::admin::database::v1::GenerateIdTokenRequest const& request) {
        return stub_->GenerateIdToken(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::test::admin::database::v1::WriteLogEntriesResponse>
GoldenKitchenSinkRestConnectionImpl::WriteLogEntries(google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->WriteLogEntries(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::test::admin::database::v1::WriteLogEntriesRequest const& request) {
        return stub_->WriteLogEntries(rest_context, options, request);
      },
      *current, request, __func__);
}

StreamRange<std::string>
GoldenKitchenSinkRestConnectionImpl::ListLogs(google::test::admin::database::v1::ListLogsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLogs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<std::string>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<golden_v1::GoldenKitchenSinkRetryPolicy>(retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::test::admin::database::v1::ListLogsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::test::admin::database::v1::ListLogsRequest const& request) {
              return stub->ListLogs(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::test::admin::database::v1::ListLogsResponse r) {
        std::vector<std::string> result(r.log_names().size());
        auto& messages = *r.mutable_log_names();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::test::admin::database::v1::ListServiceAccountKeysResponse>
GoldenKitchenSinkRestConnectionImpl::ListServiceAccountKeys(google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ListServiceAccountKeys(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::test::admin::database::v1::ListServiceAccountKeysRequest const& request) {
        return stub_->ListServiceAccountKeys(rest_context, options, request);
      },
      *current, request, __func__);
}

Status
GoldenKitchenSinkRestConnectionImpl::DoNothing(google::protobuf::Empty const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DoNothing(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::protobuf::Empty const& request) {
        return stub_->DoNothing(rest_context, options, request);
      },
      *current, request, __func__);
}

Status
GoldenKitchenSinkRestConnectionImpl::ExplicitRouting1(google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExplicitRouting1(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
        return stub_->ExplicitRouting1(rest_context, options, request);
      },
      *current, request, __func__);
}

Status
GoldenKitchenSinkRestConnectionImpl::ExplicitRouting2(google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExplicitRouting2(request),
      [this](rest_internal::RestContext& rest_context,
             Options const& options, google::test::admin::database::v1::ExplicitRoutingRequest const& request) {
        return stub_->ExplicitRouting2(rest_context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace golden_v1_internal
}  // namespace cloud
}  // namespace google
