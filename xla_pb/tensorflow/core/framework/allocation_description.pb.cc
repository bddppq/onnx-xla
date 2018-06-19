// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/allocation_description.proto

#include "tensorflow/core/framework/allocation_description.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace tensorflow {
class AllocationDescriptionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AllocationDescription>
      _instance;
} _AllocationDescription_default_instance_;
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto {
void InitDefaultsAllocationDescriptionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tensorflow::_AllocationDescription_default_instance_;
    new (ptr) ::tensorflow::AllocationDescription();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::AllocationDescription::InitAsDefaultInstance();
}

void InitDefaultsAllocationDescription() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsAllocationDescriptionImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, requested_bytes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, allocated_bytes_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, allocator_name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, allocation_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, has_single_reference_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::AllocationDescription, ptr_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::AllocationDescription)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::_AllocationDescription_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/framework/allocation_description.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n6tensorflow/core/framework/allocation_d"
      "escription.proto\022\ntensorflow\"\243\001\n\025Allocat"
      "ionDescription\022\027\n\017requested_bytes\030\001 \001(\003\022"
      "\027\n\017allocated_bytes\030\002 \001(\003\022\026\n\016allocator_na"
      "me\030\003 \001(\t\022\025\n\rallocation_id\030\004 \001(\003\022\034\n\024has_s"
      "ingle_reference\030\005 \001(\010\022\013\n\003ptr\030\006 \001(\004B{\n\030or"
      "g.tensorflow.frameworkB\033AllocationDescri"
      "ptionProtosP\001Z=github.com/tensorflow/ten"
      "sorflow/tensorflow/go/core/framework\370\001\001b"
      "\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 367);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/allocation_description.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto
namespace tensorflow {

// ===================================================================

void AllocationDescription::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AllocationDescription::kRequestedBytesFieldNumber;
const int AllocationDescription::kAllocatedBytesFieldNumber;
const int AllocationDescription::kAllocatorNameFieldNumber;
const int AllocationDescription::kAllocationIdFieldNumber;
const int AllocationDescription::kHasSingleReferenceFieldNumber;
const int AllocationDescription::kPtrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AllocationDescription::AllocationDescription()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::InitDefaultsAllocationDescription();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.AllocationDescription)
}
AllocationDescription::AllocationDescription(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
  ::protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::InitDefaultsAllocationDescription();
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.AllocationDescription)
}
AllocationDescription::AllocationDescription(const AllocationDescription& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  allocator_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.allocator_name().size() > 0) {
    allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.allocator_name(),
      GetArenaNoVirtual());
  }
  ::memcpy(&requested_bytes_, &from.requested_bytes_,
    static_cast<size_t>(reinterpret_cast<char*>(&has_single_reference_) -
    reinterpret_cast<char*>(&requested_bytes_)) + sizeof(has_single_reference_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.AllocationDescription)
}

void AllocationDescription::SharedCtor() {
  allocator_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&requested_bytes_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&has_single_reference_) -
      reinterpret_cast<char*>(&requested_bytes_)) + sizeof(has_single_reference_));
  _cached_size_ = 0;
}

AllocationDescription::~AllocationDescription() {
  // @@protoc_insertion_point(destructor:tensorflow.AllocationDescription)
  SharedDtor();
}

void AllocationDescription::SharedDtor() {
  GOOGLE_DCHECK(GetArenaNoVirtual() == NULL);
  allocator_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AllocationDescription::ArenaDtor(void* object) {
  AllocationDescription* _this = reinterpret_cast< AllocationDescription* >(object);
  (void)_this;
}
void AllocationDescription::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void AllocationDescription::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AllocationDescription::descriptor() {
  ::protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const AllocationDescription& AllocationDescription::default_instance() {
  ::protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::InitDefaultsAllocationDescription();
  return *internal_default_instance();
}


void AllocationDescription::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.AllocationDescription)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  allocator_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&requested_bytes_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&has_single_reference_) -
      reinterpret_cast<char*>(&requested_bytes_)) + sizeof(has_single_reference_));
  _internal_metadata_.Clear();
}

bool AllocationDescription::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.AllocationDescription)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 requested_bytes = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &requested_bytes_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 allocated_bytes = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &allocated_bytes_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string allocator_name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_allocator_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->allocator_name().data(), static_cast<int>(this->allocator_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.AllocationDescription.allocator_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 allocation_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &allocation_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool has_single_reference = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &has_single_reference_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 ptr = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &ptr_)));
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
  // @@protoc_insertion_point(parse_success:tensorflow.AllocationDescription)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.AllocationDescription)
  return false;
#undef DO_
}

void AllocationDescription::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.AllocationDescription)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->requested_bytes(), output);
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->allocated_bytes(), output);
  }

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->allocator_name().data(), static_cast<int>(this->allocator_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.AllocationDescription.allocator_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->allocator_name(), output);
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->allocation_id(), output);
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->has_single_reference(), output);
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->ptr(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.AllocationDescription)
}

::google::protobuf::uint8* AllocationDescription::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.AllocationDescription)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->requested_bytes(), target);
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->allocated_bytes(), target);
  }

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->allocator_name().data(), static_cast<int>(this->allocator_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.AllocationDescription.allocator_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->allocator_name(), target);
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->allocation_id(), target);
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->has_single_reference(), target);
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->ptr(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.AllocationDescription)
  return target;
}

size_t AllocationDescription::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.AllocationDescription)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->allocator_name());
  }

  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->requested_bytes());
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->allocated_bytes());
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->allocation_id());
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->ptr());
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AllocationDescription::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.AllocationDescription)
  GOOGLE_DCHECK_NE(&from, this);
  const AllocationDescription* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AllocationDescription>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.AllocationDescription)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.AllocationDescription)
    MergeFrom(*source);
  }
}

void AllocationDescription::MergeFrom(const AllocationDescription& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.AllocationDescription)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.allocator_name().size() > 0) {
    set_allocator_name(from.allocator_name());
  }
  if (from.requested_bytes() != 0) {
    set_requested_bytes(from.requested_bytes());
  }
  if (from.allocated_bytes() != 0) {
    set_allocated_bytes(from.allocated_bytes());
  }
  if (from.allocation_id() != 0) {
    set_allocation_id(from.allocation_id());
  }
  if (from.ptr() != 0) {
    set_ptr(from.ptr());
  }
  if (from.has_single_reference() != 0) {
    set_has_single_reference(from.has_single_reference());
  }
}

void AllocationDescription::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.AllocationDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AllocationDescription::CopyFrom(const AllocationDescription& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.AllocationDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AllocationDescription::IsInitialized() const {
  return true;
}

void AllocationDescription::Swap(AllocationDescription* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    AllocationDescription* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void AllocationDescription::UnsafeArenaSwap(AllocationDescription* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void AllocationDescription::InternalSwap(AllocationDescription* other) {
  using std::swap;
  allocator_name_.Swap(&other->allocator_name_);
  swap(requested_bytes_, other->requested_bytes_);
  swap(allocated_bytes_, other->allocated_bytes_);
  swap(allocation_id_, other->allocation_id_);
  swap(ptr_, other->ptr_);
  swap(has_single_reference_, other->has_single_reference_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AllocationDescription::GetMetadata() const {
  protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::AllocationDescription* Arena::CreateMessage< ::tensorflow::AllocationDescription >(Arena* arena) {
  return Arena::CreateMessageInternal< ::tensorflow::AllocationDescription >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)