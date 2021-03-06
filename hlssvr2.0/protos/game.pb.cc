// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "game.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace gamesvr_protos {

namespace {

const ::google::protobuf::Descriptor* QtPushMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QtPushMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* QtAckMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QtAckMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* QT_PUSH_CMD_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DATA_TYPE_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_game_2eproto() {
  protobuf_AddDesc_game_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "game.proto");
  GOOGLE_CHECK(file != NULL);
  QtPushMessage_descriptor_ = file->message_type(0);
  static const int QtPushMessage_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, uin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, room_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, videoid_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, sessionid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, time_),
  };
  QtPushMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QtPushMessage_descriptor_,
      QtPushMessage::default_instance_,
      QtPushMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtPushMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QtPushMessage));
  QtAckMessage_descriptor_ = file->message_type(1);
  static const int QtAckMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtAckMessage, uin_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtAckMessage, room_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtAckMessage, sessionid_),
  };
  QtAckMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      QtAckMessage_descriptor_,
      QtAckMessage::default_instance_,
      QtAckMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtAckMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QtAckMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(QtAckMessage));
  QT_PUSH_CMD_descriptor_ = file->enum_type(0);
  DATA_TYPE_descriptor_ = file->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_game_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QtPushMessage_descriptor_, &QtPushMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    QtAckMessage_descriptor_, &QtAckMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_game_2eproto() {
  delete QtPushMessage::default_instance_;
  delete QtPushMessage_reflection_;
  delete QtAckMessage::default_instance_;
  delete QtAckMessage_reflection_;
}

void protobuf_AddDesc_game_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\ngame.proto\022\016gamesvr_protos\"d\n\rQtPushMe"
    "ssage\022\013\n\003uin\030\001 \002(\r\022\017\n\007room_id\030\002 \002(\r\022\024\n\014v"
    "ideoid_type\030\003 \002(\r\022\021\n\tsessionid\030\004 \002(\r\022\014\n\004"
    "time\030\005 \002(\r\"\?\n\014QtAckMessage\022\013\n\003uin\030\001 \002(\r\022"
    "\017\n\007room_id\030\002 \002(\r\022\021\n\tsessionid\030\003 \002(\r*8\n\013Q"
    "T_PUSH_CMD\022\024\n\016QT_CMD_QT_PUSH\020\223\313\001\022\023\n\rQT_C"
    "MD_QT_ACK\020\224\313\001*1\n\tDATA_TYPE\022\016\n\nAUDIO_ONLY"
    "\020\001\022\024\n\020AUDIO_WITH_VIDEO\020\002", 304);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "game.proto", &protobuf_RegisterTypes);
  QtPushMessage::default_instance_ = new QtPushMessage();
  QtAckMessage::default_instance_ = new QtAckMessage();
  QtPushMessage::default_instance_->InitAsDefaultInstance();
  QtAckMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_game_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_game_2eproto {
  StaticDescriptorInitializer_game_2eproto() {
    protobuf_AddDesc_game_2eproto();
  }
} static_descriptor_initializer_game_2eproto_;
const ::google::protobuf::EnumDescriptor* QT_PUSH_CMD_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QT_PUSH_CMD_descriptor_;
}
bool QT_PUSH_CMD_IsValid(int value) {
  switch(value) {
    case 26003:
    case 26004:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DATA_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DATA_TYPE_descriptor_;
}
bool DATA_TYPE_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int QtPushMessage::kUinFieldNumber;
const int QtPushMessage::kRoomIdFieldNumber;
const int QtPushMessage::kVideoidTypeFieldNumber;
const int QtPushMessage::kSessionidFieldNumber;
const int QtPushMessage::kTimeFieldNumber;
#endif  // !_MSC_VER

QtPushMessage::QtPushMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QtPushMessage::InitAsDefaultInstance() {
}

QtPushMessage::QtPushMessage(const QtPushMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QtPushMessage::SharedCtor() {
  _cached_size_ = 0;
  uin_ = 0u;
  room_id_ = 0u;
  videoid_type_ = 0u;
  sessionid_ = 0u;
  time_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QtPushMessage::~QtPushMessage() {
  SharedDtor();
}

void QtPushMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QtPushMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QtPushMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QtPushMessage_descriptor_;
}

const QtPushMessage& QtPushMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_2eproto();
  return *default_instance_;
}

QtPushMessage* QtPushMessage::default_instance_ = NULL;

QtPushMessage* QtPushMessage::New() const {
  return new QtPushMessage;
}

void QtPushMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uin_ = 0u;
    room_id_ = 0u;
    videoid_type_ = 0u;
    sessionid_ = 0u;
    time_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QtPushMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 uin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uin_)));
          set_has_uin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_room_id;
        break;
      }

      // required uint32 room_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_room_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &room_id_)));
          set_has_room_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_videoid_type;
        break;
      }

      // required uint32 videoid_type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_videoid_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &videoid_type_)));
          set_has_videoid_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_sessionid;
        break;
      }

      // required uint32 sessionid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sessionid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sessionid_)));
          set_has_sessionid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_time;
        break;
      }

      // required uint32 time = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void QtPushMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 uin = 1;
  if (has_uin()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->uin(), output);
  }

  // required uint32 room_id = 2;
  if (has_room_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->room_id(), output);
  }

  // required uint32 videoid_type = 3;
  if (has_videoid_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->videoid_type(), output);
  }

  // required uint32 sessionid = 4;
  if (has_sessionid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->sessionid(), output);
  }

  // required uint32 time = 5;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QtPushMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 uin = 1;
  if (has_uin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->uin(), target);
  }

  // required uint32 room_id = 2;
  if (has_room_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->room_id(), target);
  }

  // required uint32 videoid_type = 3;
  if (has_videoid_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->videoid_type(), target);
  }

  // required uint32 sessionid = 4;
  if (has_sessionid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->sessionid(), target);
  }

  // required uint32 time = 5;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QtPushMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 uin = 1;
    if (has_uin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->uin());
    }

    // required uint32 room_id = 2;
    if (has_room_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->room_id());
    }

    // required uint32 videoid_type = 3;
    if (has_videoid_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->videoid_type());
    }

    // required uint32 sessionid = 4;
    if (has_sessionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sessionid());
    }

    // required uint32 time = 5;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QtPushMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QtPushMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QtPushMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QtPushMessage::MergeFrom(const QtPushMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uin()) {
      set_uin(from.uin());
    }
    if (from.has_room_id()) {
      set_room_id(from.room_id());
    }
    if (from.has_videoid_type()) {
      set_videoid_type(from.videoid_type());
    }
    if (from.has_sessionid()) {
      set_sessionid(from.sessionid());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QtPushMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QtPushMessage::CopyFrom(const QtPushMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QtPushMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;

  return true;
}

void QtPushMessage::Swap(QtPushMessage* other) {
  if (other != this) {
    std::swap(uin_, other->uin_);
    std::swap(room_id_, other->room_id_);
    std::swap(videoid_type_, other->videoid_type_);
    std::swap(sessionid_, other->sessionid_);
    std::swap(time_, other->time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QtPushMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QtPushMessage_descriptor_;
  metadata.reflection = QtPushMessage_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int QtAckMessage::kUinFieldNumber;
const int QtAckMessage::kRoomIdFieldNumber;
const int QtAckMessage::kSessionidFieldNumber;
#endif  // !_MSC_VER

QtAckMessage::QtAckMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void QtAckMessage::InitAsDefaultInstance() {
}

QtAckMessage::QtAckMessage(const QtAckMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void QtAckMessage::SharedCtor() {
  _cached_size_ = 0;
  uin_ = 0u;
  room_id_ = 0u;
  sessionid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

QtAckMessage::~QtAckMessage() {
  SharedDtor();
}

void QtAckMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void QtAckMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QtAckMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QtAckMessage_descriptor_;
}

const QtAckMessage& QtAckMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_2eproto();
  return *default_instance_;
}

QtAckMessage* QtAckMessage::default_instance_ = NULL;

QtAckMessage* QtAckMessage::New() const {
  return new QtAckMessage;
}

void QtAckMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uin_ = 0u;
    room_id_ = 0u;
    sessionid_ = 0u;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool QtAckMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 uin = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uin_)));
          set_has_uin();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_room_id;
        break;
      }

      // required uint32 room_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_room_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &room_id_)));
          set_has_room_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_sessionid;
        break;
      }

      // required uint32 sessionid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sessionid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sessionid_)));
          set_has_sessionid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void QtAckMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint32 uin = 1;
  if (has_uin()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->uin(), output);
  }

  // required uint32 room_id = 2;
  if (has_room_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->room_id(), output);
  }

  // required uint32 sessionid = 3;
  if (has_sessionid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->sessionid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* QtAckMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint32 uin = 1;
  if (has_uin()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->uin(), target);
  }

  // required uint32 room_id = 2;
  if (has_room_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->room_id(), target);
  }

  // required uint32 sessionid = 3;
  if (has_sessionid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->sessionid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int QtAckMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 uin = 1;
    if (has_uin()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->uin());
    }

    // required uint32 room_id = 2;
    if (has_room_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->room_id());
    }

    // required uint32 sessionid = 3;
    if (has_sessionid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->sessionid());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QtAckMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const QtAckMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const QtAckMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void QtAckMessage::MergeFrom(const QtAckMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uin()) {
      set_uin(from.uin());
    }
    if (from.has_room_id()) {
      set_room_id(from.room_id());
    }
    if (from.has_sessionid()) {
      set_sessionid(from.sessionid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void QtAckMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QtAckMessage::CopyFrom(const QtAckMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QtAckMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void QtAckMessage::Swap(QtAckMessage* other) {
  if (other != this) {
    std::swap(uin_, other->uin_);
    std::swap(room_id_, other->room_id_);
    std::swap(sessionid_, other->sessionid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata QtAckMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QtAckMessage_descriptor_;
  metadata.reflection = QtAckMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace gamesvr_protos

// @@protoc_insertion_point(global_scope)
