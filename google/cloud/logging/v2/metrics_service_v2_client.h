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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_METRICS_SERVICE_V2_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_METRICS_SERVICE_V2_CLIENT_H

#include "google/cloud/logging/v2/metrics_service_v2_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for configuring logs-based metrics.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class MetricsServiceV2Client {
 public:
  explicit MetricsServiceV2Client(
      std::shared_ptr<MetricsServiceV2Connection> connection,
      Options opts = {});
  ~MetricsServiceV2Client();

  ///@{
  /// @name Copy and move support
  MetricsServiceV2Client(MetricsServiceV2Client const&) = default;
  MetricsServiceV2Client& operator=(MetricsServiceV2Client const&) = default;
  MetricsServiceV2Client(MetricsServiceV2Client&&) = default;
  MetricsServiceV2Client& operator=(MetricsServiceV2Client&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(MetricsServiceV2Client const& a,
                         MetricsServiceV2Client const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(MetricsServiceV2Client const& a,
                         MetricsServiceV2Client const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Lists logs-based metrics.
  ///
  /// @param parent  Required. The name of the project containing the metrics:
  ///  @n
  ///      "projects/[PROJECT_ID]"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.logging.v2.LogMetric], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.ListLogMetricsRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L242}
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  ///
  // clang-format on
  StreamRange<google::logging::v2::LogMetric> ListLogMetrics(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists logs-based metrics.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.ListLogMetricsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.logging.v2.LogMetric], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.ListLogMetricsRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L242}
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  ///
  // clang-format on
  StreamRange<google::logging::v2::LogMetric> ListLogMetrics(
      google::logging::v2::ListLogMetricsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Gets a logs-based metric.
  ///
  /// @param metric_name  Required. The resource name of the desired metric:
  ///  @n
  ///      "projects/[PROJECT_ID]/metrics/[METRIC_ID]"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.LogMetric])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.GetLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L277}
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  ///
  // clang-format on
  StatusOr<google::logging::v2::LogMetric> GetLogMetric(
      std::string const& metric_name, Options opts = {});

  // clang-format off
  ///
  /// Gets a logs-based metric.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.GetLogMetricRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.LogMetric])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.GetLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L277}
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  ///
  // clang-format on
  StatusOr<google::logging::v2::LogMetric> GetLogMetric(
      google::logging::v2::GetLogMetricRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a logs-based metric.
  ///
  /// @param parent  Required. The resource name of the project in which to create the metric:
  ///  @n
  ///      "projects/[PROJECT_ID]"
  ///  @n
  ///  The new metric must be provided in the request.
  /// @param metric  Required. The new logs-based metric, which must not have an identifier that
  ///  already exists.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.LogMetric])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.CreateLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L290}
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  ///
  // clang-format on
  StatusOr<google::logging::v2::LogMetric> CreateLogMetric(
      std::string const& parent, google::logging::v2::LogMetric const& metric,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a logs-based metric.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.CreateLogMetricRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.LogMetric])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.CreateLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L290}
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  ///
  // clang-format on
  StatusOr<google::logging::v2::LogMetric> CreateLogMetric(
      google::logging::v2::CreateLogMetricRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates or updates a logs-based metric.
  ///
  /// @param metric_name  Required. The resource name of the metric to update:
  ///  @n
  ///      "projects/[PROJECT_ID]/metrics/[METRIC_ID]"
  ///  @n
  ///  The updated metric must be provided in the request and it's
  ///  `name` field must be the same as `[METRIC_ID]` If the metric
  ///  does not exist in `[PROJECT_ID]`, then a new metric is created.
  /// @param metric  Required. The updated metric.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.LogMetric])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  /// [google.logging.v2.UpdateLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L309}
  ///
  // clang-format on
  StatusOr<google::logging::v2::LogMetric> UpdateLogMetric(
      std::string const& metric_name,
      google::logging::v2::LogMetric const& metric, Options opts = {});

  // clang-format off
  ///
  /// Creates or updates a logs-based metric.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.UpdateLogMetricRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.logging.v2.LogMetric])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.LogMetric]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L97}
  /// [google.logging.v2.UpdateLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L309}
  ///
  // clang-format on
  StatusOr<google::logging::v2::LogMetric> UpdateLogMetric(
      google::logging::v2::UpdateLogMetricRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a logs-based metric.
  ///
  /// @param metric_name  Required. The resource name of the metric to delete:
  ///  @n
  ///      "projects/[PROJECT_ID]/metrics/[METRIC_ID]"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.DeleteLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L329}
  ///
  // clang-format on
  Status DeleteLogMetric(std::string const& metric_name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a logs-based metric.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.logging.v2.DeleteLogMetricRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.logging.v2.DeleteLogMetricRequest]: @googleapis_reference_link{google/logging/v2/logging_metrics.proto#L329}
  ///
  // clang-format on
  Status DeleteLogMetric(
      google::logging::v2::DeleteLogMetricRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<MetricsServiceV2Connection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_METRICS_SERVICE_V2_CLIENT_H
