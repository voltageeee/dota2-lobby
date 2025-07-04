// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dota_client_enums.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_dota_5fclient_5fenums_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_dota_5fclient_5fenums_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_dota_5fclient_5fenums_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_dota_5fclient_5fenums_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_dota_5fclient_5fenums_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_dota_5fclient_5fenums_2eproto_metadata_getter(int index);
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

enum ETournamentTemplate : int {
  k_ETournamentTemplate_None = 0,
  k_ETournamentTemplate_AutomatedWin3 = 1
};
bool ETournamentTemplate_IsValid(int value);
constexpr ETournamentTemplate ETournamentTemplate_MIN = k_ETournamentTemplate_None;
constexpr ETournamentTemplate ETournamentTemplate_MAX = k_ETournamentTemplate_AutomatedWin3;
constexpr int ETournamentTemplate_ARRAYSIZE = ETournamentTemplate_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ETournamentTemplate_descriptor();
template<typename T>
inline const std::string& ETournamentTemplate_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ETournamentTemplate>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ETournamentTemplate_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ETournamentTemplate_descriptor(), enum_t_value);
}
inline bool ETournamentTemplate_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ETournamentTemplate* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ETournamentTemplate>(
    ETournamentTemplate_descriptor(), name, value);
}
enum ETournamentGameState : int {
  k_ETournamentGameState_Unknown = 0,
  k_ETournamentGameState_Canceled = 1,
  k_ETournamentGameState_Scheduled = 2,
  k_ETournamentGameState_Active = 3,
  k_ETournamentGameState_RadVictory = 20,
  k_ETournamentGameState_DireVictory = 21,
  k_ETournamentGameState_RadVictoryByForfeit = 22,
  k_ETournamentGameState_DireVictoryByForfeit = 23,
  k_ETournamentGameState_ServerFailure = 40,
  k_ETournamentGameState_NotNeeded = 41
};
bool ETournamentGameState_IsValid(int value);
constexpr ETournamentGameState ETournamentGameState_MIN = k_ETournamentGameState_Unknown;
constexpr ETournamentGameState ETournamentGameState_MAX = k_ETournamentGameState_NotNeeded;
constexpr int ETournamentGameState_ARRAYSIZE = ETournamentGameState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ETournamentGameState_descriptor();
template<typename T>
inline const std::string& ETournamentGameState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ETournamentGameState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ETournamentGameState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ETournamentGameState_descriptor(), enum_t_value);
}
inline bool ETournamentGameState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ETournamentGameState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ETournamentGameState>(
    ETournamentGameState_descriptor(), name, value);
}
enum ETournamentTeamState : int {
  k_ETournamentTeamState_Unknown = 0,
  k_ETournamentTeamState_Node1 = 1,
  k_ETournamentTeamState_NodeMax = 1024,
  k_ETournamentTeamState_Eliminated = 14003,
  k_ETournamentTeamState_Forfeited = 14004,
  k_ETournamentTeamState_Finished1st = 15001,
  k_ETournamentTeamState_Finished2nd = 15002,
  k_ETournamentTeamState_Finished3rd = 15003,
  k_ETournamentTeamState_Finished4th = 15004,
  k_ETournamentTeamState_Finished5th = 15005,
  k_ETournamentTeamState_Finished6th = 15006,
  k_ETournamentTeamState_Finished7th = 15007,
  k_ETournamentTeamState_Finished8th = 15008,
  k_ETournamentTeamState_Finished9th = 15009,
  k_ETournamentTeamState_Finished10th = 15010,
  k_ETournamentTeamState_Finished11th = 15011,
  k_ETournamentTeamState_Finished12th = 15012,
  k_ETournamentTeamState_Finished13th = 15013,
  k_ETournamentTeamState_Finished14th = 15014,
  k_ETournamentTeamState_Finished15th = 15015,
  k_ETournamentTeamState_Finished16th = 15016
};
bool ETournamentTeamState_IsValid(int value);
constexpr ETournamentTeamState ETournamentTeamState_MIN = k_ETournamentTeamState_Unknown;
constexpr ETournamentTeamState ETournamentTeamState_MAX = k_ETournamentTeamState_Finished16th;
constexpr int ETournamentTeamState_ARRAYSIZE = ETournamentTeamState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ETournamentTeamState_descriptor();
template<typename T>
inline const std::string& ETournamentTeamState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ETournamentTeamState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ETournamentTeamState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ETournamentTeamState_descriptor(), enum_t_value);
}
inline bool ETournamentTeamState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ETournamentTeamState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ETournamentTeamState>(
    ETournamentTeamState_descriptor(), name, value);
}
enum ETournamentState : int {
  k_ETournamentState_Unknown = 0,
  k_ETournamentState_CanceledByAdmin = 1,
  k_ETournamentState_Completed = 2,
  k_ETournamentState_Merged = 3,
  k_ETournamentState_ServerFailure = 4,
  k_ETournamentState_TeamAbandoned = 5,
  k_ETournamentState_TeamTimeoutForfeit = 6,
  k_ETournamentState_TeamTimeoutRefund = 7,
  k_ETournamentState_ServerFailureGrantedVictory = 8,
  k_ETournamentState_TeamTimeoutGrantedVictory = 9,
  k_ETournamentState_InProgress = 100,
  k_ETournamentState_WaitingToMerge = 101
};
bool ETournamentState_IsValid(int value);
constexpr ETournamentState ETournamentState_MIN = k_ETournamentState_Unknown;
constexpr ETournamentState ETournamentState_MAX = k_ETournamentState_WaitingToMerge;
constexpr int ETournamentState_ARRAYSIZE = ETournamentState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ETournamentState_descriptor();
template<typename T>
inline const std::string& ETournamentState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ETournamentState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ETournamentState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ETournamentState_descriptor(), enum_t_value);
}
inline bool ETournamentState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ETournamentState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ETournamentState>(
    ETournamentState_descriptor(), name, value);
}
enum ETournamentNodeState : int {
  k_ETournamentNodeState_Unknown = 0,
  k_ETournamentNodeState_Canceled = 1,
  k_ETournamentNodeState_TeamsNotYetAssigned = 2,
  k_ETournamentNodeState_InBetweenGames = 3,
  k_ETournamentNodeState_GameInProgress = 4,
  k_ETournamentNodeState_A_Won = 5,
  k_ETournamentNodeState_B_Won = 6,
  k_ETournamentNodeState_A_WonByForfeit = 7,
  k_ETournamentNodeState_B_WonByForfeit = 8,
  k_ETournamentNodeState_A_Bye = 9,
  k_ETournamentNodeState_A_Abandoned = 10,
  k_ETournamentNodeState_ServerFailure = 11,
  k_ETournamentNodeState_A_TimeoutForfeit = 12,
  k_ETournamentNodeState_A_TimeoutRefund = 13
};
bool ETournamentNodeState_IsValid(int value);
constexpr ETournamentNodeState ETournamentNodeState_MIN = k_ETournamentNodeState_Unknown;
constexpr ETournamentNodeState ETournamentNodeState_MAX = k_ETournamentNodeState_A_TimeoutRefund;
constexpr int ETournamentNodeState_ARRAYSIZE = ETournamentNodeState_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ETournamentNodeState_descriptor();
template<typename T>
inline const std::string& ETournamentNodeState_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ETournamentNodeState>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ETournamentNodeState_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ETournamentNodeState_descriptor(), enum_t_value);
}
inline bool ETournamentNodeState_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ETournamentNodeState* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ETournamentNodeState>(
    ETournamentNodeState_descriptor(), name, value);
}
enum EDOTAGroupMergeResult : int {
  k_EDOTAGroupMergeResult_OK = 0,
  k_EDOTAGroupMergeResult_FAILED_GENERIC = 1,
  k_EDOTAGroupMergeResult_NOT_LEADER = 2,
  k_EDOTAGroupMergeResult_TOO_MANY_PLAYERS = 3,
  k_EDOTAGroupMergeResult_TOO_MANY_COACHES = 4,
  k_EDOTAGroupMergeResult_ENGINE_MISMATCH = 5,
  k_EDOTAGroupMergeResult_NO_SUCH_GROUP = 6,
  k_EDOTAGroupMergeResult_OTHER_GROUP_NOT_OPEN = 7,
  k_EDOTAGroupMergeResult_ALREADY_INVITED = 8,
  k_EDOTAGroupMergeResult_NOT_INVITED = 9
};
bool EDOTAGroupMergeResult_IsValid(int value);
constexpr EDOTAGroupMergeResult EDOTAGroupMergeResult_MIN = k_EDOTAGroupMergeResult_OK;
constexpr EDOTAGroupMergeResult EDOTAGroupMergeResult_MAX = k_EDOTAGroupMergeResult_NOT_INVITED;
constexpr int EDOTAGroupMergeResult_ARRAYSIZE = EDOTAGroupMergeResult_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EDOTAGroupMergeResult_descriptor();
template<typename T>
inline const std::string& EDOTAGroupMergeResult_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EDOTAGroupMergeResult>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EDOTAGroupMergeResult_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EDOTAGroupMergeResult_descriptor(), enum_t_value);
}
inline bool EDOTAGroupMergeResult_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EDOTAGroupMergeResult* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EDOTAGroupMergeResult>(
    EDOTAGroupMergeResult_descriptor(), name, value);
}
enum EPartyBeaconType : int {
  k_EPartyBeaconType_Available = 0,
  k_EPartyBeaconType_Joinable = 1
};
bool EPartyBeaconType_IsValid(int value);
constexpr EPartyBeaconType EPartyBeaconType_MIN = k_EPartyBeaconType_Available;
constexpr EPartyBeaconType EPartyBeaconType_MAX = k_EPartyBeaconType_Joinable;
constexpr int EPartyBeaconType_ARRAYSIZE = EPartyBeaconType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EPartyBeaconType_descriptor();
template<typename T>
inline const std::string& EPartyBeaconType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, EPartyBeaconType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function EPartyBeaconType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    EPartyBeaconType_descriptor(), enum_t_value);
}
inline bool EPartyBeaconType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, EPartyBeaconType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<EPartyBeaconType>(
    EPartyBeaconType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ETournamentTemplate> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ETournamentTemplate>() {
  return ::ETournamentTemplate_descriptor();
}
template <> struct is_proto_enum< ::ETournamentGameState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ETournamentGameState>() {
  return ::ETournamentGameState_descriptor();
}
template <> struct is_proto_enum< ::ETournamentTeamState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ETournamentTeamState>() {
  return ::ETournamentTeamState_descriptor();
}
template <> struct is_proto_enum< ::ETournamentState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ETournamentState>() {
  return ::ETournamentState_descriptor();
}
template <> struct is_proto_enum< ::ETournamentNodeState> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ETournamentNodeState>() {
  return ::ETournamentNodeState_descriptor();
}
template <> struct is_proto_enum< ::EDOTAGroupMergeResult> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EDOTAGroupMergeResult>() {
  return ::EDOTAGroupMergeResult_descriptor();
}
template <> struct is_proto_enum< ::EPartyBeaconType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::EPartyBeaconType>() {
  return ::EPartyBeaconType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_dota_5fclient_5fenums_2eproto
