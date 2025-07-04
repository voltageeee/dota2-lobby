// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: networksystem_protomessages.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_networksystem_5fprotomessages_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_networksystem_5fprotomessages_2eproto

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_networksystem_5fprotomessages_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_networksystem_5fprotomessages_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[5]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_networksystem_5fprotomessages_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_networksystem_5fprotomessages_2eproto_metadata_getter(int index);
class NetMessageConnectionClosed;
struct NetMessageConnectionClosedDefaultTypeInternal;
extern NetMessageConnectionClosedDefaultTypeInternal _NetMessageConnectionClosed_default_instance_;
class NetMessageConnectionCrashed;
struct NetMessageConnectionCrashedDefaultTypeInternal;
extern NetMessageConnectionCrashedDefaultTypeInternal _NetMessageConnectionCrashed_default_instance_;
class NetMessagePacketEnd;
struct NetMessagePacketEndDefaultTypeInternal;
extern NetMessagePacketEndDefaultTypeInternal _NetMessagePacketEnd_default_instance_;
class NetMessagePacketStart;
struct NetMessagePacketStartDefaultTypeInternal;
extern NetMessagePacketStartDefaultTypeInternal _NetMessagePacketStart_default_instance_;
class NetMessageSplitscreenUserChanged;
struct NetMessageSplitscreenUserChangedDefaultTypeInternal;
extern NetMessageSplitscreenUserChangedDefaultTypeInternal _NetMessageSplitscreenUserChanged_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::NetMessageConnectionClosed* Arena::CreateMaybeMessage<::NetMessageConnectionClosed>(Arena*);
template<> ::NetMessageConnectionCrashed* Arena::CreateMaybeMessage<::NetMessageConnectionCrashed>(Arena*);
template<> ::NetMessagePacketEnd* Arena::CreateMaybeMessage<::NetMessagePacketEnd>(Arena*);
template<> ::NetMessagePacketStart* Arena::CreateMaybeMessage<::NetMessagePacketStart>(Arena*);
template<> ::NetMessageSplitscreenUserChanged* Arena::CreateMaybeMessage<::NetMessageSplitscreenUserChanged>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class NetMessageSplitscreenUserChanged PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessageSplitscreenUserChanged) */ {
 public:
  inline NetMessageSplitscreenUserChanged() : NetMessageSplitscreenUserChanged(nullptr) {}
  virtual ~NetMessageSplitscreenUserChanged();
  explicit constexpr NetMessageSplitscreenUserChanged(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessageSplitscreenUserChanged(const NetMessageSplitscreenUserChanged& from);
  NetMessageSplitscreenUserChanged(NetMessageSplitscreenUserChanged&& from) noexcept
    : NetMessageSplitscreenUserChanged() {
    *this = ::std::move(from);
  }

  inline NetMessageSplitscreenUserChanged& operator=(const NetMessageSplitscreenUserChanged& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessageSplitscreenUserChanged& operator=(NetMessageSplitscreenUserChanged&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NetMessageSplitscreenUserChanged& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessageSplitscreenUserChanged* internal_default_instance() {
    return reinterpret_cast<const NetMessageSplitscreenUserChanged*>(
               &_NetMessageSplitscreenUserChanged_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NetMessageSplitscreenUserChanged& a, NetMessageSplitscreenUserChanged& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessageSplitscreenUserChanged* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessageSplitscreenUserChanged* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetMessageSplitscreenUserChanged* New() const final {
    return CreateMaybeMessage<NetMessageSplitscreenUserChanged>(nullptr);
  }

  NetMessageSplitscreenUserChanged* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetMessageSplitscreenUserChanged>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NetMessageSplitscreenUserChanged& from);
  void MergeFrom(const NetMessageSplitscreenUserChanged& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessageSplitscreenUserChanged* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessageSplitscreenUserChanged";
  }
  protected:
  explicit NetMessageSplitscreenUserChanged(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_networksystem_5fprotomessages_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSlotFieldNumber = 1,
  };
  // optional uint32 slot = 1;
  bool has_slot() const;
  private:
  bool _internal_has_slot() const;
  public:
  void clear_slot();
  ::PROTOBUF_NAMESPACE_ID::uint32 slot() const;
  void set_slot(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_slot() const;
  void _internal_set_slot(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:NetMessageSplitscreenUserChanged)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 slot_;
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessageConnectionClosed PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessageConnectionClosed) */ {
 public:
  inline NetMessageConnectionClosed() : NetMessageConnectionClosed(nullptr) {}
  virtual ~NetMessageConnectionClosed();
  explicit constexpr NetMessageConnectionClosed(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessageConnectionClosed(const NetMessageConnectionClosed& from);
  NetMessageConnectionClosed(NetMessageConnectionClosed&& from) noexcept
    : NetMessageConnectionClosed() {
    *this = ::std::move(from);
  }

  inline NetMessageConnectionClosed& operator=(const NetMessageConnectionClosed& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessageConnectionClosed& operator=(NetMessageConnectionClosed&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NetMessageConnectionClosed& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessageConnectionClosed* internal_default_instance() {
    return reinterpret_cast<const NetMessageConnectionClosed*>(
               &_NetMessageConnectionClosed_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(NetMessageConnectionClosed& a, NetMessageConnectionClosed& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessageConnectionClosed* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessageConnectionClosed* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetMessageConnectionClosed* New() const final {
    return CreateMaybeMessage<NetMessageConnectionClosed>(nullptr);
  }

  NetMessageConnectionClosed* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetMessageConnectionClosed>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NetMessageConnectionClosed& from);
  void MergeFrom(const NetMessageConnectionClosed& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessageConnectionClosed* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessageConnectionClosed";
  }
  protected:
  explicit NetMessageConnectionClosed(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_networksystem_5fprotomessages_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 1,
  };
  // optional uint32 reason = 1;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  ::PROTOBUF_NAMESPACE_ID::uint32 reason() const;
  void set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_reason() const;
  void _internal_set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:NetMessageConnectionClosed)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 reason_;
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessageConnectionCrashed PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessageConnectionCrashed) */ {
 public:
  inline NetMessageConnectionCrashed() : NetMessageConnectionCrashed(nullptr) {}
  virtual ~NetMessageConnectionCrashed();
  explicit constexpr NetMessageConnectionCrashed(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessageConnectionCrashed(const NetMessageConnectionCrashed& from);
  NetMessageConnectionCrashed(NetMessageConnectionCrashed&& from) noexcept
    : NetMessageConnectionCrashed() {
    *this = ::std::move(from);
  }

  inline NetMessageConnectionCrashed& operator=(const NetMessageConnectionCrashed& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessageConnectionCrashed& operator=(NetMessageConnectionCrashed&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NetMessageConnectionCrashed& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessageConnectionCrashed* internal_default_instance() {
    return reinterpret_cast<const NetMessageConnectionCrashed*>(
               &_NetMessageConnectionCrashed_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(NetMessageConnectionCrashed& a, NetMessageConnectionCrashed& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessageConnectionCrashed* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessageConnectionCrashed* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetMessageConnectionCrashed* New() const final {
    return CreateMaybeMessage<NetMessageConnectionCrashed>(nullptr);
  }

  NetMessageConnectionCrashed* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetMessageConnectionCrashed>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NetMessageConnectionCrashed& from);
  void MergeFrom(const NetMessageConnectionCrashed& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessageConnectionCrashed* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessageConnectionCrashed";
  }
  protected:
  explicit NetMessageConnectionCrashed(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_networksystem_5fprotomessages_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 1,
  };
  // optional uint32 reason = 1;
  bool has_reason() const;
  private:
  bool _internal_has_reason() const;
  public:
  void clear_reason();
  ::PROTOBUF_NAMESPACE_ID::uint32 reason() const;
  void set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_reason() const;
  void _internal_set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:NetMessageConnectionCrashed)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 reason_;
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessagePacketStart PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessagePacketStart) */ {
 public:
  inline NetMessagePacketStart() : NetMessagePacketStart(nullptr) {}
  virtual ~NetMessagePacketStart();
  explicit constexpr NetMessagePacketStart(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessagePacketStart(const NetMessagePacketStart& from);
  NetMessagePacketStart(NetMessagePacketStart&& from) noexcept
    : NetMessagePacketStart() {
    *this = ::std::move(from);
  }

  inline NetMessagePacketStart& operator=(const NetMessagePacketStart& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessagePacketStart& operator=(NetMessagePacketStart&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NetMessagePacketStart& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessagePacketStart* internal_default_instance() {
    return reinterpret_cast<const NetMessagePacketStart*>(
               &_NetMessagePacketStart_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(NetMessagePacketStart& a, NetMessagePacketStart& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessagePacketStart* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessagePacketStart* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetMessagePacketStart* New() const final {
    return CreateMaybeMessage<NetMessagePacketStart>(nullptr);
  }

  NetMessagePacketStart* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetMessagePacketStart>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NetMessagePacketStart& from);
  void MergeFrom(const NetMessagePacketStart& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessagePacketStart* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessagePacketStart";
  }
  protected:
  explicit NetMessagePacketStart(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_networksystem_5fprotomessages_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:NetMessagePacketStart)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// -------------------------------------------------------------------

class NetMessagePacketEnd PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetMessagePacketEnd) */ {
 public:
  inline NetMessagePacketEnd() : NetMessagePacketEnd(nullptr) {}
  virtual ~NetMessagePacketEnd();
  explicit constexpr NetMessagePacketEnd(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NetMessagePacketEnd(const NetMessagePacketEnd& from);
  NetMessagePacketEnd(NetMessagePacketEnd&& from) noexcept
    : NetMessagePacketEnd() {
    *this = ::std::move(from);
  }

  inline NetMessagePacketEnd& operator=(const NetMessagePacketEnd& from) {
    CopyFrom(from);
    return *this;
  }
  inline NetMessagePacketEnd& operator=(NetMessagePacketEnd&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const NetMessagePacketEnd& default_instance() {
    return *internal_default_instance();
  }
  static inline const NetMessagePacketEnd* internal_default_instance() {
    return reinterpret_cast<const NetMessagePacketEnd*>(
               &_NetMessagePacketEnd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(NetMessagePacketEnd& a, NetMessagePacketEnd& b) {
    a.Swap(&b);
  }
  inline void Swap(NetMessagePacketEnd* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NetMessagePacketEnd* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline NetMessagePacketEnd* New() const final {
    return CreateMaybeMessage<NetMessagePacketEnd>(nullptr);
  }

  NetMessagePacketEnd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<NetMessagePacketEnd>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const NetMessagePacketEnd& from);
  void MergeFrom(const NetMessagePacketEnd& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NetMessagePacketEnd* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetMessagePacketEnd";
  }
  protected:
  explicit NetMessagePacketEnd(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_networksystem_5fprotomessages_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:NetMessagePacketEnd)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_networksystem_5fprotomessages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NetMessageSplitscreenUserChanged

// optional uint32 slot = 1;
inline bool NetMessageSplitscreenUserChanged::_internal_has_slot() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetMessageSplitscreenUserChanged::has_slot() const {
  return _internal_has_slot();
}
inline void NetMessageSplitscreenUserChanged::clear_slot() {
  slot_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NetMessageSplitscreenUserChanged::_internal_slot() const {
  return slot_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NetMessageSplitscreenUserChanged::slot() const {
  // @@protoc_insertion_point(field_get:NetMessageSplitscreenUserChanged.slot)
  return _internal_slot();
}
inline void NetMessageSplitscreenUserChanged::_internal_set_slot(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  slot_ = value;
}
inline void NetMessageSplitscreenUserChanged::set_slot(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_slot(value);
  // @@protoc_insertion_point(field_set:NetMessageSplitscreenUserChanged.slot)
}

// -------------------------------------------------------------------

// NetMessageConnectionClosed

// optional uint32 reason = 1;
inline bool NetMessageConnectionClosed::_internal_has_reason() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetMessageConnectionClosed::has_reason() const {
  return _internal_has_reason();
}
inline void NetMessageConnectionClosed::clear_reason() {
  reason_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NetMessageConnectionClosed::_internal_reason() const {
  return reason_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NetMessageConnectionClosed::reason() const {
  // @@protoc_insertion_point(field_get:NetMessageConnectionClosed.reason)
  return _internal_reason();
}
inline void NetMessageConnectionClosed::_internal_set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  reason_ = value;
}
inline void NetMessageConnectionClosed::set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:NetMessageConnectionClosed.reason)
}

// -------------------------------------------------------------------

// NetMessageConnectionCrashed

// optional uint32 reason = 1;
inline bool NetMessageConnectionCrashed::_internal_has_reason() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NetMessageConnectionCrashed::has_reason() const {
  return _internal_has_reason();
}
inline void NetMessageConnectionCrashed::clear_reason() {
  reason_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NetMessageConnectionCrashed::_internal_reason() const {
  return reason_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 NetMessageConnectionCrashed::reason() const {
  // @@protoc_insertion_point(field_get:NetMessageConnectionCrashed.reason)
  return _internal_reason();
}
inline void NetMessageConnectionCrashed::_internal_set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  reason_ = value;
}
inline void NetMessageConnectionCrashed::set_reason(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:NetMessageConnectionCrashed.reason)
}

// -------------------------------------------------------------------

// NetMessagePacketStart

// -------------------------------------------------------------------

// NetMessagePacketEnd

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_networksystem_5fprotomessages_2eproto
