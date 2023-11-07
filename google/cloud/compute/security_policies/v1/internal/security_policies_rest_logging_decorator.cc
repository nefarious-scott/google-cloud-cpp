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
// source: google/cloud/compute/security_policies/v1/security_policies.proto

#include "google/cloud/compute/security_policies/v1/internal/security_policies_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_security_policies_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SecurityPoliciesRestLogging::SecurityPoliciesRestLogging(
    std::shared_ptr<SecurityPoliciesRestStub> child,
    TracingOptions tracing_options, std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncAddRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::AddRuleRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 AddRuleRequest const& request) {
        return child_->AsyncAddRule(cq, std::move(rest_context), options,
                                    request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPoliciesAggregatedList>
SecurityPoliciesRestLogging::AggregatedListSecurityPolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        AggregatedListSecurityPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 AggregatedListSecurityPoliciesRequest const& request) {
        return child_->AggregatedListSecurityPolicies(rest_context, options,
                                                      request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncDeleteSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        DeleteSecurityPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 DeleteSecurityPolicyRequest const& request) {
        return child_->AsyncDeleteSecurityPolicy(cq, std::move(rest_context),
                                                 options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
SecurityPoliciesRestLogging::GetSecurityPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        GetSecurityPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 GetSecurityPolicyRequest const& request) {
        return child_->GetSecurityPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyRule>
SecurityPoliciesRestLogging::GetRule(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::security_policies::v1::GetRuleRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 GetRuleRequest const& request) {
        return child_->GetRule(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncInsertSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        InsertSecurityPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 InsertSecurityPolicyRequest const& request) {
        return child_->AsyncInsertSecurityPolicy(cq, std::move(rest_context),
                                                 options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::SecurityPolicyList>
SecurityPoliciesRestLogging::ListSecurityPolicies(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        ListSecurityPoliciesRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 ListSecurityPoliciesRequest const& request) {
        return child_->ListSecurityPolicies(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::
             SecurityPoliciesListPreconfiguredExpressionSetsResponse>
SecurityPoliciesRestLogging::ListPreconfiguredExpressionSets(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        ListPreconfiguredExpressionSetsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 ListPreconfiguredExpressionSetsRequest const& request) {
        return child_->ListPreconfiguredExpressionSets(rest_context, options,
                                                       request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncPatchSecurityPolicy(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::
        PatchSecurityPolicyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 PatchSecurityPolicyRequest const& request) {
        return child_->AsyncPatchSecurityPolicy(cq, std::move(rest_context),
                                                options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncPatchRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::PatchRuleRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 PatchRuleRequest const& request) {
        return child_->AsyncPatchRule(cq, std::move(rest_context), options,
                                      request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncRemoveRule(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::RemoveRuleRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 RemoveRuleRequest const& request) {
        return child_->AsyncRemoveRule(cq, std::move(rest_context), options,
                                       request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncSetLabels(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::security_policies::v1::SetLabelsRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::security_policies::v1::
                 SetLabelsRequest const& request) {
        return child_->AsyncSetLabels(cq, std::move(rest_context), options,
                                      request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
SecurityPoliciesRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_operations::v1::
        GetOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context), options,
                                         request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

future<Status> SecurityPoliciesRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    Options const& options,
    google::cloud::cpp::compute::global_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             Options const& options,
             google::cloud::cpp::compute::global_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            options, request);
      },
      cq, std::move(rest_context), options, request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_security_policies_v1_internal
}  // namespace cloud
}  // namespace google
