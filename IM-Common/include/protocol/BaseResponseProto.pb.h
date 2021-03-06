// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BaseResponseProto.proto

#ifndef PROTOBUF_INCLUDED_BaseResponseProto_2eproto
#define PROTOBUF_INCLUDED_BaseResponseProto_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_BaseResponseProto_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_BaseResponseProto_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_BaseResponseProto_2eproto();
namespace protocol {
class CIMResponse;
class CIMResponseDefaultTypeInternal;
extern CIMResponseDefaultTypeInternal _CIMResponse_default_instance_;
}  // namespace protocol
namespace google {
namespace protobuf {
template<> ::protocol::CIMResponse* Arena::CreateMaybeMessage<::protocol::CIMResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protocol {

// ===================================================================

class CIMResponse :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protocol.CIMResponse) */ {
 public:
  CIMResponse();
  virtual ~CIMResponse();

  CIMResponse(const CIMResponse& from);

  inline CIMResponse& operator=(const CIMResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  CIMResponse(CIMResponse&& from) noexcept
    : CIMResponse() {
    *this = ::std::move(from);
  }

  inline CIMResponse& operator=(CIMResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const CIMResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CIMResponse* internal_default_instance() {
    return reinterpret_cast<const CIMResponse*>(
               &_CIMResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(CIMResponse* other);
  friend void swap(CIMResponse& a, CIMResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline CIMResponse* New() const final {
    return CreateMaybeMessage<CIMResponse>(nullptr);
  }

  CIMResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<CIMResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const CIMResponse& from);
  void MergeFrom(const CIMResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CIMResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string resMsg = 1;
  bool has_resmsg() const;
  void clear_resmsg();
  static const int kResMsgFieldNumber = 1;
  const ::std::string& resmsg() const;
  void set_resmsg(const ::std::string& value);
  #if LANG_CXX11
  void set_resmsg(::std::string&& value);
  #endif
  void set_resmsg(const char* value);
  void set_resmsg(const char* value, size_t size);
  ::std::string* mutable_resmsg();
  ::std::string* release_resmsg();
  void set_allocated_resmsg(::std::string* resmsg);

  // required int64 responseId = 2;
  bool has_responseid() const;
  void clear_responseid();
  static const int kResponseIdFieldNumber = 2;
  ::google::protobuf::int64 responseid() const;
  void set_responseid(::google::protobuf::int64 value);

  // required int32 type = 3;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protocol.CIMResponse)
 private:
  class HasBitSetters;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr resmsg_;
  ::google::protobuf::int64 responseid_;
  ::google::protobuf::int32 type_;
  friend struct ::TableStruct_BaseResponseProto_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CIMResponse

// required int64 responseId = 2;
inline bool CIMResponse::has_responseid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CIMResponse::clear_responseid() {
  responseid_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::google::protobuf::int64 CIMResponse::responseid() const {
  // @@protoc_insertion_point(field_get:protocol.CIMResponse.responseId)
  return responseid_;
}
inline void CIMResponse::set_responseid(::google::protobuf::int64 value) {
  _has_bits_[0] |= 0x00000002u;
  responseid_ = value;
  // @@protoc_insertion_point(field_set:protocol.CIMResponse.responseId)
}

// required string resMsg = 1;
inline bool CIMResponse::has_resmsg() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CIMResponse::clear_resmsg() {
  resmsg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& CIMResponse::resmsg() const {
  // @@protoc_insertion_point(field_get:protocol.CIMResponse.resMsg)
  return resmsg_.GetNoArena();
}
inline void CIMResponse::set_resmsg(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:protocol.CIMResponse.resMsg)
}
#if LANG_CXX11
inline void CIMResponse::set_resmsg(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  resmsg_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:protocol.CIMResponse.resMsg)
}
#endif
inline void CIMResponse::set_resmsg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:protocol.CIMResponse.resMsg)
}
inline void CIMResponse::set_resmsg(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  resmsg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:protocol.CIMResponse.resMsg)
}
inline ::std::string* CIMResponse::mutable_resmsg() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:protocol.CIMResponse.resMsg)
  return resmsg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CIMResponse::release_resmsg() {
  // @@protoc_insertion_point(field_release:protocol.CIMResponse.resMsg)
  if (!has_resmsg()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return resmsg_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CIMResponse::set_allocated_resmsg(::std::string* resmsg) {
  if (resmsg != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  resmsg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), resmsg);
  // @@protoc_insertion_point(field_set_allocated:protocol.CIMResponse.resMsg)
}

// required int32 type = 3;
inline bool CIMResponse::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CIMResponse::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::google::protobuf::int32 CIMResponse::type() const {
  // @@protoc_insertion_point(field_get:protocol.CIMResponse.type)
  return type_;
}
inline void CIMResponse::set_type(::google::protobuf::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  type_ = value;
  // @@protoc_insertion_point(field_set:protocol.CIMResponse.type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_BaseResponseProto_2eproto
