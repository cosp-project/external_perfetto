/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*******************************************************************************
 * AUTOGENERATED - DO NOT EDIT
 *******************************************************************************
 * This file has been generated from the protobuf message
 * perfetto/config/inode_file/inode_file_config.proto
 * by
 * ../../tools/proto_to_cpp/proto_to_cpp.cc.
 * If you need to make changes here, change the .proto file and then run
 * ./tools/gen_tracing_cpp_headers_from_protos.py
 */

#include "perfetto/tracing/core/inode_file_config.h"

#include "perfetto/config/inode_file/inode_file_config.pb.h"

namespace perfetto {

InodeFileConfig::InodeFileConfig() = default;
InodeFileConfig::~InodeFileConfig() = default;
InodeFileConfig::InodeFileConfig(const InodeFileConfig&) = default;
InodeFileConfig& InodeFileConfig::operator=(const InodeFileConfig&) = default;
InodeFileConfig::InodeFileConfig(InodeFileConfig&&) noexcept = default;
InodeFileConfig& InodeFileConfig::operator=(InodeFileConfig&&) = default;

void InodeFileConfig::FromProto(
    const perfetto::protos::InodeFileConfig& proto) {
  static_assert(sizeof(scan_interval_ms_) == sizeof(proto.scan_interval_ms()),
                "size mismatch");
  scan_interval_ms_ =
      static_cast<decltype(scan_interval_ms_)>(proto.scan_interval_ms());

  static_assert(sizeof(scan_delay_ms_) == sizeof(proto.scan_delay_ms()),
                "size mismatch");
  scan_delay_ms_ = static_cast<decltype(scan_delay_ms_)>(proto.scan_delay_ms());

  static_assert(sizeof(scan_batch_size_) == sizeof(proto.scan_batch_size()),
                "size mismatch");
  scan_batch_size_ =
      static_cast<decltype(scan_batch_size_)>(proto.scan_batch_size());

  static_assert(sizeof(do_not_scan_) == sizeof(proto.do_not_scan()),
                "size mismatch");
  do_not_scan_ = static_cast<decltype(do_not_scan_)>(proto.do_not_scan());

  scan_mount_points_.clear();
  for (const auto& field : proto.scan_mount_points()) {
    scan_mount_points_.emplace_back();
    static_assert(
        sizeof(scan_mount_points_.back()) == sizeof(proto.scan_mount_points(0)),
        "size mismatch");
    scan_mount_points_.back() =
        static_cast<decltype(scan_mount_points_)::value_type>(field);
  }

  mount_point_mapping_.clear();
  for (const auto& field : proto.mount_point_mapping()) {
    mount_point_mapping_.emplace_back();
    mount_point_mapping_.back().FromProto(field);
  }
  unknown_fields_ = proto.unknown_fields();
}

void InodeFileConfig::ToProto(perfetto::protos::InodeFileConfig* proto) const {
  proto->Clear();

  static_assert(sizeof(scan_interval_ms_) == sizeof(proto->scan_interval_ms()),
                "size mismatch");
  proto->set_scan_interval_ms(
      static_cast<decltype(proto->scan_interval_ms())>(scan_interval_ms_));

  static_assert(sizeof(scan_delay_ms_) == sizeof(proto->scan_delay_ms()),
                "size mismatch");
  proto->set_scan_delay_ms(
      static_cast<decltype(proto->scan_delay_ms())>(scan_delay_ms_));

  static_assert(sizeof(scan_batch_size_) == sizeof(proto->scan_batch_size()),
                "size mismatch");
  proto->set_scan_batch_size(
      static_cast<decltype(proto->scan_batch_size())>(scan_batch_size_));

  static_assert(sizeof(do_not_scan_) == sizeof(proto->do_not_scan()),
                "size mismatch");
  proto->set_do_not_scan(
      static_cast<decltype(proto->do_not_scan())>(do_not_scan_));

  for (const auto& it : scan_mount_points_) {
    proto->add_scan_mount_points(
        static_cast<decltype(proto->scan_mount_points(0))>(it));
    static_assert(sizeof(it) == sizeof(proto->scan_mount_points(0)),
                  "size mismatch");
  }

  for (const auto& it : mount_point_mapping_) {
    auto* entry = proto->add_mount_point_mapping();
    it.ToProto(entry);
  }
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

InodeFileConfig::MountPointMappingEntry::MountPointMappingEntry() = default;
InodeFileConfig::MountPointMappingEntry::~MountPointMappingEntry() = default;
InodeFileConfig::MountPointMappingEntry::MountPointMappingEntry(
    const InodeFileConfig::MountPointMappingEntry&) = default;
InodeFileConfig::MountPointMappingEntry&
InodeFileConfig::MountPointMappingEntry::operator=(
    const InodeFileConfig::MountPointMappingEntry&) = default;
InodeFileConfig::MountPointMappingEntry::MountPointMappingEntry(
    InodeFileConfig::MountPointMappingEntry&&) noexcept = default;
InodeFileConfig::MountPointMappingEntry&
InodeFileConfig::MountPointMappingEntry::operator=(
    InodeFileConfig::MountPointMappingEntry&&) = default;

void InodeFileConfig::MountPointMappingEntry::FromProto(
    const perfetto::protos::InodeFileConfig_MountPointMappingEntry& proto) {
  static_assert(sizeof(mountpoint_) == sizeof(proto.mountpoint()),
                "size mismatch");
  mountpoint_ = static_cast<decltype(mountpoint_)>(proto.mountpoint());

  scan_roots_.clear();
  for (const auto& field : proto.scan_roots()) {
    scan_roots_.emplace_back();
    static_assert(sizeof(scan_roots_.back()) == sizeof(proto.scan_roots(0)),
                  "size mismatch");
    scan_roots_.back() = static_cast<decltype(scan_roots_)::value_type>(field);
  }
  unknown_fields_ = proto.unknown_fields();
}

void InodeFileConfig::MountPointMappingEntry::ToProto(
    perfetto::protos::InodeFileConfig_MountPointMappingEntry* proto) const {
  proto->Clear();

  static_assert(sizeof(mountpoint_) == sizeof(proto->mountpoint()),
                "size mismatch");
  proto->set_mountpoint(
      static_cast<decltype(proto->mountpoint())>(mountpoint_));

  for (const auto& it : scan_roots_) {
    proto->add_scan_roots(static_cast<decltype(proto->scan_roots(0))>(it));
    static_assert(sizeof(it) == sizeof(proto->scan_roots(0)), "size mismatch");
  }
  *(proto->mutable_unknown_fields()) = unknown_fields_;
}

}  // namespace perfetto
