// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: steammessages_unified_base.steamworkssdk.proto

#include "steammessages_unified_base.steamworkssdk.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_steammessages_5funified_5fbase_2esteamworkssdk_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_steammessages_5funified_5fbase_2esteamworkssdk_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_steammessages_5funified_5fbase_2esteamworkssdk_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_steammessages_5funified_5fbase_2esteamworkssdk_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_steammessages_5funified_5fbase_2esteamworkssdk_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n.steammessages_unified_base.steamworkss"
  "dk.proto\032 google/protobuf/descriptor.pro"
  "to*]\n\023EProtoExecutionSite\022 \n\034k_EProtoExe"
  "cutionSiteUnknown\020\000\022$\n k_EProtoExecution"
  "SiteSteamClient\020\003:4\n\013description\022\035.googl"
  "e.protobuf.FieldOptions\030\320\206\003 \001(\t:>\n\023servi"
  "ce_description\022\037.google.protobuf.Service"
  "Options\030\320\206\003 \001(\t:u\n\026service_execution_sit"
  "e\022\037.google.protobuf.ServiceOptions\030\330\206\003 \001"
  "(\0162\024.EProtoExecutionSite:\034k_EProtoExecut"
  "ionSiteUnknown:<\n\022method_description\022\036.g"
  "oogle.protobuf.MethodOptions\030\320\206\003 \001(\t:8\n\020"
  "enum_description\022\034.google.protobuf.EnumO"
  "ptions\030\320\206\003 \001(\t:C\n\026enum_value_description"
  "\022!.google.protobuf.EnumValueOptions\030\320\206\003 "
  "\001(\tB\005H\001\200\001\000"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto = {
  false, false, 610, descriptor_table_protodef_steammessages_5funified_5fbase_2esteamworkssdk_2eproto, "steammessages_unified_base.steamworkssdk.proto", 
  &descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_once, descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_steammessages_5funified_5fbase_2esteamworkssdk_2eproto::offsets,
  file_level_metadata_steammessages_5funified_5fbase_2esteamworkssdk_2eproto, file_level_enum_descriptors_steammessages_5funified_5fbase_2esteamworkssdk_2eproto, file_level_service_descriptors_steammessages_5funified_5fbase_2esteamworkssdk_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK ::PROTOBUF_NAMESPACE_ID::Metadata
descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto_metadata_getter(int index) {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto);
  return descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto.file_level_metadata[index];
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_steammessages_5funified_5fbase_2esteamworkssdk_2eproto(&descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EProtoExecutionSite_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_steammessages_5funified_5fbase_2esteamworkssdk_2eproto);
  return file_level_enum_descriptors_steammessages_5funified_5fbase_2esteamworkssdk_2eproto[0];
}
bool EProtoExecutionSite_IsValid(int value) {
  switch (value) {
    case 0:
    case 3:
      return true;
    default:
      return false;
  }
}

const std::string description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  description(kDescriptionFieldNumber, description_default);
const std::string service_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  service_description(kServiceDescriptionFieldNumber, service_description_default);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::ServiceOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::EnumTypeTraits< ::EProtoExecutionSite, ::EProtoExecutionSite_IsValid>, 14, false >
  service_execution_site(kServiceExecutionSiteFieldNumber, static_cast< ::EProtoExecutionSite >(0));
const std::string method_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::MethodOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  method_description(kMethodDescriptionFieldNumber, method_description_default);
const std::string enum_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enum_description(kEnumDescriptionFieldNumber, enum_description_default);
const std::string enum_value_description_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
  enum_value_description(kEnumValueDescriptionFieldNumber, enum_value_description_default);

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
