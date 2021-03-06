// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BaseResponseProto.proto

#include "protocol/BaseResponseProto.pb.h"
#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace protocol {
class CIMResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<CIMResponse> _instance;
} _CIMResponse_default_instance_;
}  // namespace protocol
static void InitDefaultsCIMResponse_BaseResponseProto_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::protocol::_CIMResponse_default_instance_;
    new (ptr) ::protocol::CIMResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::protocol::CIMResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_CIMResponse_BaseResponseProto_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsCIMResponse_BaseResponseProto_2eproto}, {}};

void InitDefaults_BaseResponseProto_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_CIMResponse_BaseResponseProto_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_BaseResponseProto_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_BaseResponseProto_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_BaseResponseProto_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_BaseResponseProto_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::protocol::CIMResponse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::protocol::CIMResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::protocol::CIMResponse, responseid_),
  PROTOBUF_FIELD_OFFSET(::protocol::CIMResponse, resmsg_),
  PROTOBUF_FIELD_OFFSET(::protocol::CIMResponse, type_),
  1,
  0,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::protocol::CIMResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::protocol::_CIMResponse_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_BaseResponseProto_2eproto = {
  {}, AddDescriptors_BaseResponseProto_2eproto, "BaseResponseProto.proto", schemas,
  file_default_instances, TableStruct_BaseResponseProto_2eproto::offsets,
  file_level_metadata_BaseResponseProto_2eproto, 1, file_level_enum_descriptors_BaseResponseProto_2eproto, file_level_service_descriptors_BaseResponseProto_2eproto,
};

const char descriptor_table_protodef_BaseResponseProto_2eproto[] =
  "\n\027BaseResponseProto.proto\022\010protocol\"\?\n\013C"
  "IMResponse\022\022\n\nresponseId\030\002 \002(\003\022\016\n\006resMsg"
  "\030\001 \002(\t\022\014\n\004type\030\003 \002(\005"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_BaseResponseProto_2eproto = {
  false, InitDefaults_BaseResponseProto_2eproto, 
  descriptor_table_protodef_BaseResponseProto_2eproto,
  "BaseResponseProto.proto", &assign_descriptors_table_BaseResponseProto_2eproto, 100,
};

void AddDescriptors_BaseResponseProto_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_BaseResponseProto_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_BaseResponseProto_2eproto = []() { AddDescriptors_BaseResponseProto_2eproto(); return true; }();
namespace protocol {

// ===================================================================

void CIMResponse::InitAsDefaultInstance() {
}
class CIMResponse::HasBitSetters {
 public:
  static void set_has_responseid(CIMResponse* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
  static void set_has_resmsg(CIMResponse* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static void set_has_type(CIMResponse* msg) {
    msg->_has_bits_[0] |= 0x00000004u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CIMResponse::kResponseIdFieldNumber;
const int CIMResponse::kResMsgFieldNumber;
const int CIMResponse::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CIMResponse::CIMResponse()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protocol.CIMResponse)
}
CIMResponse::CIMResponse(const CIMResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  resmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_resmsg()) {
    resmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resmsg_);
  }
  ::memcpy(&responseid_, &from.responseid_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&responseid_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:protocol.CIMResponse)
}

void CIMResponse::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_CIMResponse_BaseResponseProto_2eproto.base);
  resmsg_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&responseid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&responseid_)) + sizeof(type_));
}

CIMResponse::~CIMResponse() {
  // @@protoc_insertion_point(destructor:protocol.CIMResponse)
  SharedDtor();
}

void CIMResponse::SharedDtor() {
  resmsg_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CIMResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CIMResponse& CIMResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_CIMResponse_BaseResponseProto_2eproto.base);
  return *internal_default_instance();
}


void CIMResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:protocol.CIMResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    resmsg_.ClearNonDefaultToEmptyNoArena();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&responseid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&type_) -
        reinterpret_cast<char*>(&responseid_)) + sizeof(type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* CIMResponse::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<CIMResponse*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required string resMsg = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("protocol.CIMResponse.resMsg");
        object = msg->mutable_resmsg();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // required int64 responseId = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_responseid(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // required int32 type = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        msg->set_type(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool CIMResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protocol.CIMResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string resMsg = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_resmsg()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->resmsg().data(), static_cast<int>(this->resmsg().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "protocol.CIMResponse.resMsg");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int64 responseId = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {
          HasBitSetters::set_has_responseid(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &responseid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {
          HasBitSetters::set_has_type(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:protocol.CIMResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protocol.CIMResponse)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void CIMResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protocol.CIMResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string resMsg = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->resmsg().data(), static_cast<int>(this->resmsg().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "protocol.CIMResponse.resMsg");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->resmsg(), output);
  }

  // required int64 responseId = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->responseid(), output);
  }

  // required int32 type = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protocol.CIMResponse)
}

::google::protobuf::uint8* CIMResponse::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protocol.CIMResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string resMsg = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->resmsg().data(), static_cast<int>(this->resmsg().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "protocol.CIMResponse.resMsg");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->resmsg(), target);
  }

  // required int64 responseId = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->responseid(), target);
  }

  // required int32 type = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protocol.CIMResponse)
  return target;
}

size_t CIMResponse::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:protocol.CIMResponse)
  size_t total_size = 0;

  if (has_resmsg()) {
    // required string resMsg = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->resmsg());
  }

  if (has_responseid()) {
    // required int64 responseId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->responseid());
  }

  if (has_type()) {
    // required int32 type = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());
  }

  return total_size;
}
size_t CIMResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:protocol.CIMResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required string resMsg = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->resmsg());

    // required int64 responseId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->responseid());

    // required int32 type = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CIMResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:protocol.CIMResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const CIMResponse* source =
      ::google::protobuf::DynamicCastToGenerated<CIMResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:protocol.CIMResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:protocol.CIMResponse)
    MergeFrom(*source);
  }
}

void CIMResponse::MergeFrom(const CIMResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:protocol.CIMResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      resmsg_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.resmsg_);
    }
    if (cached_has_bits & 0x00000002u) {
      responseid_ = from.responseid_;
    }
    if (cached_has_bits & 0x00000004u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CIMResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:protocol.CIMResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CIMResponse::CopyFrom(const CIMResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:protocol.CIMResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CIMResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;
  return true;
}

void CIMResponse::Swap(CIMResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CIMResponse::InternalSwap(CIMResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  resmsg_.Swap(&other->resmsg_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(responseid_, other->responseid_);
  swap(type_, other->type_);
}

::google::protobuf::Metadata CIMResponse::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_BaseResponseProto_2eproto);
  return ::file_level_metadata_BaseResponseProto_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protocol
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::protocol::CIMResponse* Arena::CreateMaybeMessage< ::protocol::CIMResponse >(Arena* arena) {
  return Arena::CreateInternal< ::protocol::CIMResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
