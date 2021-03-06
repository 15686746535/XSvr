// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TestMsg.proto

#ifndef PROTOBUF_INCLUDED_TestMsg_2eproto
#define PROTOBUF_INCLUDED_TestMsg_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_TestMsg_2eproto 

namespace protobuf_TestMsg_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_TestMsg_2eproto
class TestMsg;
class TestMsgDefaultTypeInternal;
extern TestMsgDefaultTypeInternal _TestMsg_default_instance_;
class TestMsg2;
class TestMsg2DefaultTypeInternal;
extern TestMsg2DefaultTypeInternal _TestMsg2_default_instance_;
namespace google {
namespace protobuf {
template<> ::TestMsg* Arena::CreateMaybeMessage<::TestMsg>(Arena*);
template<> ::TestMsg2* Arena::CreateMaybeMessage<::TestMsg2>(Arena*);
}  // namespace protobuf
}  // namespace google

// ===================================================================

class TestMsg : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TestMsg) */ {
 public:
  TestMsg();
  virtual ~TestMsg();

  TestMsg(const TestMsg& from);

  inline TestMsg& operator=(const TestMsg& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMsg(TestMsg&& from) noexcept
    : TestMsg() {
    *this = ::std::move(from);
  }

  inline TestMsg& operator=(TestMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMsg* internal_default_instance() {
    return reinterpret_cast<const TestMsg*>(
               &_TestMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(TestMsg* other);
  friend void swap(TestMsg& a, TestMsg& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMsg* New() const final {
    return CreateMaybeMessage<TestMsg>(NULL);
  }

  TestMsg* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestMsg>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestMsg& from);
  void MergeFrom(const TestMsg& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMsg* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TestMsg)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_TestMsg_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TestMsg2 : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:TestMsg2) */ {
 public:
  TestMsg2();
  virtual ~TestMsg2();

  TestMsg2(const TestMsg2& from);

  inline TestMsg2& operator=(const TestMsg2& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TestMsg2(TestMsg2&& from) noexcept
    : TestMsg2() {
    *this = ::std::move(from);
  }

  inline TestMsg2& operator=(TestMsg2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestMsg2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMsg2* internal_default_instance() {
    return reinterpret_cast<const TestMsg2*>(
               &_TestMsg2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(TestMsg2* other);
  friend void swap(TestMsg2& a, TestMsg2& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TestMsg2* New() const final {
    return CreateMaybeMessage<TestMsg2>(NULL);
  }

  TestMsg2* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<TestMsg2>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const TestMsg2& from);
  void MergeFrom(const TestMsg2& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMsg2* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string str = 1;
  void clear_str();
  static const int kStrFieldNumber = 1;
  const ::std::string& str() const;
  void set_str(const ::std::string& value);
  #if LANG_CXX11
  void set_str(::std::string&& value);
  #endif
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  ::std::string* mutable_str();
  ::std::string* release_str();
  void set_allocated_str(::std::string* str);

  // @@protoc_insertion_point(class_scope:TestMsg2)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_TestMsg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMsg

// int32 id = 1;
inline void TestMsg::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 TestMsg::id() const {
  // @@protoc_insertion_point(field_get:TestMsg.id)
  return id_;
}
inline void TestMsg::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:TestMsg.id)
}

// -------------------------------------------------------------------

// TestMsg2

// string str = 1;
inline void TestMsg2::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& TestMsg2::str() const {
  // @@protoc_insertion_point(field_get:TestMsg2.str)
  return str_.GetNoArena();
}
inline void TestMsg2::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:TestMsg2.str)
}
#if LANG_CXX11
inline void TestMsg2::set_str(::std::string&& value) {
  
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TestMsg2.str)
}
#endif
inline void TestMsg2::set_str(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TestMsg2.str)
}
inline void TestMsg2::set_str(const char* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TestMsg2.str)
}
inline ::std::string* TestMsg2::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:TestMsg2.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* TestMsg2::release_str() {
  // @@protoc_insertion_point(field_release:TestMsg2.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void TestMsg2::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:TestMsg2.str)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_TestMsg_2eproto
