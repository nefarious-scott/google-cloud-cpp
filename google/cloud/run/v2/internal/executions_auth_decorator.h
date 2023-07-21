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
// source: google/cloud/run/v2/execution.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_AUTH_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_AUTH_DECORATOR_H

#include "google/cloud/run/v2/internal/executions_stub.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace run_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ExecutionsAuth : public ExecutionsStub {
 public:
  ~ExecutionsAuth() override = default;
  ExecutionsAuth(
      std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
      std::shared_ptr<ExecutionsStub> child);

  StatusOr<google::cloud::run::v2::Execution> GetExecution(
      grpc::ClientContext& context,
      google::cloud::run::v2::GetExecutionRequest const& request) override;

  StatusOr<google::cloud::run::v2::ListExecutionsResponse> ListExecutions(
      grpc::ClientContext& context,
      google::cloud::run::v2::ListExecutionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteExecution(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::run::v2::DeleteExecutionRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth_;
  std::shared_ptr<ExecutionsStub> child_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_INTERNAL_EXECUTIONS_AUTH_DECORATOR_H
