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
// source: google/cloud/compute/node_types/v1/node_types.proto

#include "google/cloud/compute/node_types/v1/internal/node_types_rest_connection_impl.h"
#include "google/cloud/compute/node_types/v1/internal/node_types_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_node_types_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

NodeTypesRestConnectionImpl::NodeTypesRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<compute_node_types_v1_internal::NodeTypesRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      NodeTypesConnection::options())) {}

StreamRange<std::pair<std::string,
                      google::cloud::cpp::compute::v1::NodeTypesScopedList>>
NodeTypesRestConnectionImpl::AggregatedListNodeTypes(
    google::cloud::cpp::compute::node_types::v1::AggregatedListNodeTypesRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->AggregatedListNodeTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<StreamRange<std::pair<
      std::string, google::cloud::cpp::compute::v1::NodeTypesScopedList>>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_node_types_v1::NodeTypesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::cpp::compute::node_types::v1::
                                      AggregatedListNodeTypesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::node_types::v1::
                       AggregatedListNodeTypesRequest const& request) {
              return stub->AggregatedListNodeTypes(rest_context, options,
                                                   request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::NodeTypeAggregatedList r) {
        std::vector<std::pair<
            std::string, google::cloud::cpp::compute::v1::NodeTypesScopedList>>
            result(r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::cpp::compute::v1::NodeType>
NodeTypesRestConnectionImpl::GetNodeType(
    google::cloud::cpp::compute::node_types::v1::GetNodeTypeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetNodeType(request),
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::cpp::compute::node_types::v1::GetNodeTypeRequest const&
              request) {
        return stub_->GetNodeType(rest_context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::cpp::compute::v1::NodeType>
NodeTypesRestConnectionImpl::ListNodeTypes(
    google::cloud::cpp::compute::node_types::v1::ListNodeTypesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListNodeTypes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::cpp::compute::v1::NodeType>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<compute_node_types_v1::NodeTypesRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::cloud::cpp::compute::node_types::v1::
                                      ListNodeTypesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::cpp::compute::node_types::v1::
                       ListNodeTypesRequest const& request) {
              return stub->ListNodeTypes(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::cpp::compute::v1::NodeTypeList r) {
        std::vector<google::cloud::cpp::compute::v1::NodeType> result(
            r.items().size());
        auto& messages = *r.mutable_items();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_node_types_v1_internal
}  // namespace cloud
}  // namespace google
