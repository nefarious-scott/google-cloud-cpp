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
// source: google/cloud/sql/v1/cloud_sql_instances.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_INSTANCES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_INSTANCES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/sql/v1/cloud_sql_instances.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SqlInstancesServiceRestStub {
 public:
  virtual ~SqlInstancesServiceRestStub() = default;

  virtual StatusOr<google::cloud::sql::v1::Operation> AddServerCa(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesAddServerCaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Clone(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesCloneRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesDeleteRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> DemoteMaster(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Export(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesExportRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Failover(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesFailoverRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Reencrypt(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesReencryptRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::DatabaseInstance> Get(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesGetRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Import(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesImportRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesInsertRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::InstancesListResponse> List(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesListRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
  ListServerCas(google::cloud::rest_internal::RestContext& rest_context,
                Options const& options,
                google::cloud::sql::v1::SqlInstancesListServerCasRequest const&
                    request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesPatchRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> PromoteReplica(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> ResetSslConfig(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Restart(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRestartRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> RestoreBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> RotateServerCa(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> StartReplica(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesStartReplicaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> StopReplica(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesStopReplicaRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> TruncateLog(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesTruncateLogRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesUpdateRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::SslCert> CreateEphemeral(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> RescheduleMaintenance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
  VerifyExternalSyncSettings(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::
          SqlInstancesVerifyExternalSyncSettingsRequest const& request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> StartExternalSync(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> PerformDiskShrink(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
  GetDiskShrinkConfig(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::sql::v1::Operation> ResetReplicaSize(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>
  GetLatestRecoveryTime(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
          request) = 0;
};

class DefaultSqlInstancesServiceRestStub : public SqlInstancesServiceRestStub {
 public:
  ~DefaultSqlInstancesServiceRestStub() override = default;

  explicit DefaultSqlInstancesServiceRestStub(Options options);
  DefaultSqlInstancesServiceRestStub(
      std::shared_ptr<rest_internal::RestClient> service, Options options);

  StatusOr<google::cloud::sql::v1::Operation> AddServerCa(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesAddServerCaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Clone(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesCloneRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesDeleteRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> DemoteMaster(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesDemoteMasterRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Export(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesExportRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Failover(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesFailoverRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Reencrypt(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesReencryptRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::DatabaseInstance> Get(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesGetRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> Import(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesImportRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Insert(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesInsertRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::InstancesListResponse> List(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesListRequest const& request) override;

  StatusOr<google::cloud::sql::v1::InstancesListServerCasResponse>
  ListServerCas(google::cloud::rest_internal::RestContext& rest_context,
                Options const& options,
                google::cloud::sql::v1::SqlInstancesListServerCasRequest const&
                    request) override;

  StatusOr<google::cloud::sql::v1::Operation> Patch(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesPatchRequest const& request) override;

  StatusOr<google::cloud::sql::v1::Operation> PromoteReplica(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesPromoteReplicaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> ResetSslConfig(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesResetSslConfigRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Restart(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRestartRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> RestoreBackup(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRestoreBackupRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> RotateServerCa(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRotateServerCaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> StartReplica(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesStartReplicaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> StopReplica(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesStopReplicaRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> TruncateLog(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesTruncateLogRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> Update(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesUpdateRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::SslCert> CreateEphemeral(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesCreateEphemeralCertRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::Operation> RescheduleMaintenance(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesRescheduleMaintenanceRequest const&
          request) override;

  StatusOr<
      google::cloud::sql::v1::SqlInstancesVerifyExternalSyncSettingsResponse>
  VerifyExternalSyncSettings(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::
          SqlInstancesVerifyExternalSyncSettingsRequest const& request)
      override;

  StatusOr<google::cloud::sql::v1::Operation> StartExternalSync(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesStartExternalSyncRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::Operation> PerformDiskShrink(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesPerformDiskShrinkRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigResponse>
  GetDiskShrinkConfig(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesGetDiskShrinkConfigRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::Operation> ResetReplicaSize(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesResetReplicaSizeRequest const&
          request) override;

  StatusOr<google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeResponse>
  GetLatestRecoveryTime(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::sql::v1::SqlInstancesGetLatestRecoveryTimeRequest const&
          request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_INTERNAL_SQL_INSTANCES_REST_STUB_H
