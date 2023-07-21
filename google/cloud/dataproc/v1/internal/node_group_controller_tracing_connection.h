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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_NODE_GROUP_CONTROLLER_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_NODE_GROUP_CONTROLLER_TRACING_CONNECTION_H

#include "google/cloud/dataproc/v1/node_group_controller_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class NodeGroupControllerTracingConnection
    : public dataproc_v1::NodeGroupControllerConnection {
 public:
  ~NodeGroupControllerTracingConnection() override = default;

  explicit NodeGroupControllerTracingConnection(
      std::shared_ptr<dataproc_v1::NodeGroupControllerConnection> child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::dataproc::v1::NodeGroup>> CreateNodeGroup(
      google::cloud::dataproc::v1::CreateNodeGroupRequest const& request)
      override;

  future<StatusOr<google::cloud::dataproc::v1::NodeGroup>> ResizeNodeGroup(
      google::cloud::dataproc::v1::ResizeNodeGroupRequest const& request)
      override;

  StatusOr<google::cloud::dataproc::v1::NodeGroup> GetNodeGroup(
      google::cloud::dataproc::v1::GetNodeGroupRequest const& request) override;

 private:
  std::shared_ptr<dataproc_v1::NodeGroupControllerConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<dataproc_v1::NodeGroupControllerConnection>
MakeNodeGroupControllerTracingConnection(
    std::shared_ptr<dataproc_v1::NodeGroupControllerConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_V1_INTERNAL_NODE_GROUP_CONTROLLER_TRACING_CONNECTION_H
