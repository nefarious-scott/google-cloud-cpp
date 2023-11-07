// Copyright 2021 Google LLC
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
// source: google/spanner/admin/database/v1/spanner_database_admin.proto

#include "google/cloud/spanner/admin/internal/database_admin_rest_connection_impl.h"
#include "google/cloud/spanner/admin/internal/database_admin_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/async_rest_long_running_operation.h"
#include "google/cloud/internal/extract_long_running_result.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>

namespace google {
namespace cloud {
namespace spanner_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatabaseAdminRestConnectionImpl::DatabaseAdminRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<spanner_admin_internal::DatabaseAdminRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DatabaseAdminConnection::options())) {}

StreamRange<google::spanner::admin::database::v1::Database>
DatabaseAdminRestConnectionImpl::ListDatabases(
    google::spanner::admin::database::v1::ListDatabasesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDatabases(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::spanner::admin::database::v1::Database>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<spanner_admin::DatabaseAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::spanner::admin::database::v1::ListDatabasesRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::spanner::admin::database::v1::
                       ListDatabasesRequest const& request) {
              return stub->ListDatabases(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::spanner::admin::database::v1::ListDatabasesResponse r) {
        std::vector<google::spanner::admin::database::v1::Database> result(
            r.databases().size());
        auto& messages = *r.mutable_databases();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminRestConnectionImpl::CreateDatabase(
    google::spanner::admin::database::v1::CreateDatabaseRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::database::v1::Database>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::spanner::admin::database::v1::CreateDatabaseRequest const&
              request) {
        return stub->AsyncCreateDatabase(cq, std::move(context), options,
                                         request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::database::v1::Database>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateDatabase(request),
      polling_policy(*current), __func__);
}

StatusOr<google::spanner::admin::database::v1::Database>
DatabaseAdminRestConnectionImpl::GetDatabase(
    google::spanner::admin::database::v1::GetDatabaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDatabase(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::spanner::admin::database::v1::GetDatabaseRequest const&
                 request) {
        return stub_->GetDatabase(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminRestConnectionImpl::UpdateDatabase(
    google::spanner::admin::database::v1::UpdateDatabaseRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::database::v1::Database>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::spanner::admin::database::v1::UpdateDatabaseRequest const&
              request) {
        return stub->AsyncUpdateDatabase(cq, std::move(context), options,
                                         request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::database::v1::Database>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDatabase(request),
      polling_policy(*current), __func__);
}

future<
    StatusOr<google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>>
DatabaseAdminRestConnectionImpl::UpdateDatabaseDdl(
    google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::spanner::admin::database::v1::UpdateDatabaseDdlRequest const&
              request) {
        return stub->AsyncUpdateDatabaseDdl(cq, std::move(context), options,
                                            request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::spanner::admin::database::v1::UpdateDatabaseDdlMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDatabaseDdl(request),
      polling_policy(*current), __func__);
}

Status DatabaseAdminRestConnectionImpl::DropDatabase(
    google::spanner::admin::database::v1::DropDatabaseRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DropDatabase(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::spanner::admin::database::v1::DropDatabaseRequest const&
                 request) {
        return stub_->DropDatabase(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::spanner::admin::database::v1::GetDatabaseDdlResponse>
DatabaseAdminRestConnectionImpl::GetDatabaseDdl(
    google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDatabaseDdl(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::spanner::admin::database::v1::GetDatabaseDdlRequest const&
                 request) {
        return stub_->GetDatabaseDdl(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminRestConnectionImpl::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->SetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::iam::v1::SetIamPolicyRequest const& request) {
        return stub_->SetIamPolicy(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::Policy> DatabaseAdminRestConnectionImpl::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIamPolicy(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::iam::v1::GetIamPolicyRequest const& request) {
        return stub_->GetIamPolicy(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DatabaseAdminRestConnectionImpl::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->TestIamPermissions(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::iam::v1::TestIamPermissionsRequest const& request) {
        return stub_->TestIamPermissions(rest_context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminRestConnectionImpl::CreateBackup(
    google::spanner::admin::database::v1::CreateBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::database::v1::Backup>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::spanner::admin::database::v1::CreateBackupRequest const&
              request) {
        return stub->AsyncCreateBackup(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::database::v1::Backup>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateBackup(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::spanner::admin::database::v1::Backup>>
DatabaseAdminRestConnectionImpl::CopyBackup(
    google::spanner::admin::database::v1::CopyBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::database::v1::Backup>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::spanner::admin::database::v1::CopyBackupRequest const&
              request) {
        return stub->AsyncCopyBackup(cq, std::move(context), options, request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::database::v1::Backup>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CopyBackup(request),
      polling_policy(*current), __func__);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminRestConnectionImpl::GetBackup(
    google::spanner::admin::database::v1::GetBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetBackup(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::spanner::admin::database::v1::GetBackupRequest const&
                 request) {
        return stub_->GetBackup(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::spanner::admin::database::v1::Backup>
DatabaseAdminRestConnectionImpl::UpdateBackup(
    google::spanner::admin::database::v1::UpdateBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateBackup(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::spanner::admin::database::v1::UpdateBackupRequest const&
                 request) {
        return stub_->UpdateBackup(rest_context, options, request);
      },
      *current, request, __func__);
}

Status DatabaseAdminRestConnectionImpl::DeleteBackup(
    google::spanner::admin::database::v1::DeleteBackupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteBackup(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::spanner::admin::database::v1::DeleteBackupRequest const&
                 request) {
        return stub_->DeleteBackup(rest_context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::spanner::admin::database::v1::Backup>
DatabaseAdminRestConnectionImpl::ListBackups(
    google::spanner::admin::database::v1::ListBackupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListBackups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::spanner::admin::database::v1::Backup>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<spanner_admin::DatabaseAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::spanner::admin::database::v1::ListBackupsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                rest_internal::RestContext& rest_context,
                Options const& options,
                google::spanner::admin::database::v1::ListBackupsRequest const&
                    request) {
              return stub->ListBackups(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::spanner::admin::database::v1::ListBackupsResponse r) {
        std::vector<google::spanner::admin::database::v1::Backup> result(
            r.backups().size());
        auto& messages = *r.mutable_backups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

future<StatusOr<google::spanner::admin::database::v1::Database>>
DatabaseAdminRestConnectionImpl::RestoreDatabase(
    google::spanner::admin::database::v1::RestoreDatabaseRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return rest_internal::AsyncRestLongRunningOperation<
      google::spanner::admin::database::v1::Database>(
      background_->cq(), current, request,
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::spanner::admin::database::v1::RestoreDatabaseRequest const&
              request) {
        return stub->AsyncRestoreDatabase(cq, std::move(context), options,
                                          request);
      },
      [stub = stub_](CompletionQueue& cq,
                     std::unique_ptr<rest_internal::RestContext> context,
                     Options const& options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), options,
                                       request);
      },
      [stub = stub_](
          CompletionQueue& cq,
          std::unique_ptr<rest_internal::RestContext> context,
          Options const& options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), options,
                                          request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::spanner::admin::database::v1::Database>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RestoreDatabase(request),
      polling_policy(*current), __func__);
}

StreamRange<google::longrunning::Operation>
DatabaseAdminRestConnectionImpl::ListDatabaseOperations(
    google::spanner::admin::database::v1::ListDatabaseOperationsRequest
        request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListDatabaseOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<spanner_admin::DatabaseAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::spanner::admin::database::v1::
                                      ListDatabaseOperationsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::spanner::admin::database::v1::
                       ListDatabaseOperationsRequest const& request) {
              return stub->ListDatabaseOperations(rest_context, options,
                                                  request);
            },
            options, r, function_name);
      },
      [](google::spanner::admin::database::v1::ListDatabaseOperationsResponse
             r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::longrunning::Operation>
DatabaseAdminRestConnectionImpl::ListBackupOperations(
    google::spanner::admin::database::v1::ListBackupOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency =
      idempotency_policy(*current)->ListBackupOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<spanner_admin::DatabaseAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options, google::spanner::admin::database::v1::
                                      ListBackupOperationsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::spanner::admin::database::v1::
                       ListBackupOperationsRequest const& request) {
              return stub->ListBackupOperations(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::spanner::admin::database::v1::ListBackupOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::spanner::admin::database::v1::DatabaseRole>
DatabaseAdminRestConnectionImpl::ListDatabaseRoles(
    google::spanner::admin::database::v1::ListDatabaseRolesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDatabaseRoles(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::spanner::admin::database::v1::DatabaseRole>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<spanner_admin::DatabaseAdminRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::spanner::admin::database::v1::ListDatabaseRolesRequest const&
              r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::spanner::admin::database::v1::
                       ListDatabaseRolesRequest const& request) {
              return stub->ListDatabaseRoles(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::spanner::admin::database::v1::ListDatabaseRolesResponse r) {
        std::vector<google::spanner::admin::database::v1::DatabaseRole> result(
            r.database_roles().size());
        auto& messages = *r.mutable_database_roles();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace spanner_admin_internal
}  // namespace cloud
}  // namespace google
