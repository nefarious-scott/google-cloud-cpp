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
// source: google/logging/v2/logging_metrics.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_MOCKS_MOCK_METRICS_SERVICE_V2_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_MOCKS_MOCK_METRICS_SERVICE_V2_CONNECTION_H

#include "google/cloud/logging/v2/metrics_service_v2_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace logging_v2_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `MetricsServiceV2Connection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `MetricsServiceV2Client`. To do so,
 * construct an object of type `MetricsServiceV2Client` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockMetricsServiceV2Connection
    : public logging_v2::MetricsServiceV2Connection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StreamRange<google::logging::v2::LogMetric>, ListLogMetrics,
              (google::logging::v2::ListLogMetricsRequest request), (override));

  MOCK_METHOD(StatusOr<google::logging::v2::LogMetric>, GetLogMetric,
              (google::logging::v2::GetLogMetricRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::logging::v2::LogMetric>, CreateLogMetric,
              (google::logging::v2::CreateLogMetricRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::logging::v2::LogMetric>, UpdateLogMetric,
              (google::logging::v2::UpdateLogMetricRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteLogMetric,
              (google::logging::v2::DeleteLogMetricRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_MOCKS_MOCK_METRICS_SERVICE_V2_CONNECTION_H
