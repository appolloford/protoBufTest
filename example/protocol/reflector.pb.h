// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: reflector.proto

#ifndef PROTOBUF_reflector_2eproto__INCLUDED
#define PROTOBUF_reflector_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_reflector_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
void InitDefaultsAckRequestImpl();
void InitDefaultsAckRequest();
void InitDefaultsAckResultImpl();
void InitDefaultsAckResult();
void InitDefaultshelloworldRequestImpl();
void InitDefaultshelloworldRequest();
void InitDefaultshelloworldResponseImpl();
void InitDefaultshelloworldResponse();
inline void InitDefaults() {
  InitDefaultsAckRequest();
  InitDefaultsAckResult();
  InitDefaultshelloworldRequest();
  InitDefaultshelloworldResponse();
}
}  // namespace protobuf_reflector_2eproto
namespace Reflector {
class AckRequest;
class AckRequestDefaultTypeInternal;
extern AckRequestDefaultTypeInternal _AckRequest_default_instance_;
class AckResult;
class AckResultDefaultTypeInternal;
extern AckResultDefaultTypeInternal _AckResult_default_instance_;
class helloworldRequest;
class helloworldRequestDefaultTypeInternal;
extern helloworldRequestDefaultTypeInternal _helloworldRequest_default_instance_;
class helloworldResponse;
class helloworldResponseDefaultTypeInternal;
extern helloworldResponseDefaultTypeInternal _helloworldResponse_default_instance_;
}  // namespace Reflector
namespace Reflector {

// ===================================================================

class AckRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Reflector.AckRequest) */ {
 public:
  AckRequest();
  virtual ~AckRequest();

  AckRequest(const AckRequest& from);

  inline AckRequest& operator=(const AckRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AckRequest(AckRequest&& from) noexcept
    : AckRequest() {
    *this = ::std::move(from);
  }

  inline AckRequest& operator=(AckRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AckRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AckRequest* internal_default_instance() {
    return reinterpret_cast<const AckRequest*>(
               &_AckRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(AckRequest* other);
  friend void swap(AckRequest& a, AckRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AckRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  AckRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AckRequest& from);
  void MergeFrom(const AckRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(AckRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string timestamp = 1;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  const ::std::string& timestamp() const;
  void set_timestamp(const ::std::string& value);
  #if LANG_CXX11
  void set_timestamp(::std::string&& value);
  #endif
  void set_timestamp(const char* value);
  void set_timestamp(const char* value, size_t size);
  ::std::string* mutable_timestamp();
  ::std::string* release_timestamp();
  void set_allocated_timestamp(::std::string* timestamp);

  // @@protoc_insertion_point(class_scope:Reflector.AckRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr timestamp_;
  mutable int _cached_size_;
  friend struct ::protobuf_reflector_2eproto::TableStruct;
  friend void ::protobuf_reflector_2eproto::InitDefaultsAckRequestImpl();
};
// -------------------------------------------------------------------

class AckResult : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Reflector.AckResult) */ {
 public:
  AckResult();
  virtual ~AckResult();

  AckResult(const AckResult& from);

  inline AckResult& operator=(const AckResult& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  AckResult(AckResult&& from) noexcept
    : AckResult() {
    *this = ::std::move(from);
  }

  inline AckResult& operator=(AckResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const AckResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AckResult* internal_default_instance() {
    return reinterpret_cast<const AckResult*>(
               &_AckResult_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(AckResult* other);
  friend void swap(AckResult& a, AckResult& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline AckResult* New() const PROTOBUF_FINAL { return New(NULL); }

  AckResult* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const AckResult& from);
  void MergeFrom(const AckResult& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(AckResult* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string timestamp = 1;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  const ::std::string& timestamp() const;
  void set_timestamp(const ::std::string& value);
  #if LANG_CXX11
  void set_timestamp(::std::string&& value);
  #endif
  void set_timestamp(const char* value);
  void set_timestamp(const char* value, size_t size);
  ::std::string* mutable_timestamp();
  ::std::string* release_timestamp();
  void set_allocated_timestamp(::std::string* timestamp);

  // @@protoc_insertion_point(class_scope:Reflector.AckResult)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr timestamp_;
  mutable int _cached_size_;
  friend struct ::protobuf_reflector_2eproto::TableStruct;
  friend void ::protobuf_reflector_2eproto::InitDefaultsAckResultImpl();
};
// -------------------------------------------------------------------

class helloworldRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Reflector.helloworldRequest) */ {
 public:
  helloworldRequest();
  virtual ~helloworldRequest();

  helloworldRequest(const helloworldRequest& from);

  inline helloworldRequest& operator=(const helloworldRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  helloworldRequest(helloworldRequest&& from) noexcept
    : helloworldRequest() {
    *this = ::std::move(from);
  }

  inline helloworldRequest& operator=(helloworldRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const helloworldRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const helloworldRequest* internal_default_instance() {
    return reinterpret_cast<const helloworldRequest*>(
               &_helloworldRequest_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(helloworldRequest* other);
  friend void swap(helloworldRequest& a, helloworldRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline helloworldRequest* New() const PROTOBUF_FINAL { return New(NULL); }

  helloworldRequest* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const helloworldRequest& from);
  void MergeFrom(const helloworldRequest& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(helloworldRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string str = 2;
  void clear_str();
  static const int kStrFieldNumber = 2;
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

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 opt = 3;
  void clear_opt();
  static const int kOptFieldNumber = 3;
  ::google::protobuf::int32 opt() const;
  void set_opt(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Reflector.helloworldRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 opt_;
  mutable int _cached_size_;
  friend struct ::protobuf_reflector_2eproto::TableStruct;
  friend void ::protobuf_reflector_2eproto::InitDefaultshelloworldRequestImpl();
};
// -------------------------------------------------------------------

class helloworldResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:Reflector.helloworldResponse) */ {
 public:
  helloworldResponse();
  virtual ~helloworldResponse();

  helloworldResponse(const helloworldResponse& from);

  inline helloworldResponse& operator=(const helloworldResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  helloworldResponse(helloworldResponse&& from) noexcept
    : helloworldResponse() {
    *this = ::std::move(from);
  }

  inline helloworldResponse& operator=(helloworldResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const helloworldResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const helloworldResponse* internal_default_instance() {
    return reinterpret_cast<const helloworldResponse*>(
               &_helloworldResponse_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    3;

  void Swap(helloworldResponse* other);
  friend void swap(helloworldResponse& a, helloworldResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline helloworldResponse* New() const PROTOBUF_FINAL { return New(NULL); }

  helloworldResponse* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const helloworldResponse& from);
  void MergeFrom(const helloworldResponse& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(helloworldResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

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

  // int32 opt = 2;
  void clear_opt();
  static const int kOptFieldNumber = 2;
  ::google::protobuf::int32 opt() const;
  void set_opt(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Reflector.helloworldResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr str_;
  ::google::protobuf::int32 opt_;
  mutable int _cached_size_;
  friend struct ::protobuf_reflector_2eproto::TableStruct;
  friend void ::protobuf_reflector_2eproto::InitDefaultshelloworldResponseImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AckRequest

// string timestamp = 1;
inline void AckRequest::clear_timestamp() {
  timestamp_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AckRequest::timestamp() const {
  // @@protoc_insertion_point(field_get:Reflector.AckRequest.timestamp)
  return timestamp_.GetNoArena();
}
inline void AckRequest::set_timestamp(const ::std::string& value) {
  
  timestamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Reflector.AckRequest.timestamp)
}
#if LANG_CXX11
inline void AckRequest::set_timestamp(::std::string&& value) {
  
  timestamp_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Reflector.AckRequest.timestamp)
}
#endif
inline void AckRequest::set_timestamp(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  timestamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Reflector.AckRequest.timestamp)
}
inline void AckRequest::set_timestamp(const char* value, size_t size) {
  
  timestamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Reflector.AckRequest.timestamp)
}
inline ::std::string* AckRequest::mutable_timestamp() {
  
  // @@protoc_insertion_point(field_mutable:Reflector.AckRequest.timestamp)
  return timestamp_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AckRequest::release_timestamp() {
  // @@protoc_insertion_point(field_release:Reflector.AckRequest.timestamp)
  
  return timestamp_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AckRequest::set_allocated_timestamp(::std::string* timestamp) {
  if (timestamp != NULL) {
    
  } else {
    
  }
  timestamp_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), timestamp);
  // @@protoc_insertion_point(field_set_allocated:Reflector.AckRequest.timestamp)
}

// -------------------------------------------------------------------

// AckResult

// string timestamp = 1;
inline void AckResult::clear_timestamp() {
  timestamp_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AckResult::timestamp() const {
  // @@protoc_insertion_point(field_get:Reflector.AckResult.timestamp)
  return timestamp_.GetNoArena();
}
inline void AckResult::set_timestamp(const ::std::string& value) {
  
  timestamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Reflector.AckResult.timestamp)
}
#if LANG_CXX11
inline void AckResult::set_timestamp(::std::string&& value) {
  
  timestamp_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Reflector.AckResult.timestamp)
}
#endif
inline void AckResult::set_timestamp(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  timestamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Reflector.AckResult.timestamp)
}
inline void AckResult::set_timestamp(const char* value, size_t size) {
  
  timestamp_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Reflector.AckResult.timestamp)
}
inline ::std::string* AckResult::mutable_timestamp() {
  
  // @@protoc_insertion_point(field_mutable:Reflector.AckResult.timestamp)
  return timestamp_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AckResult::release_timestamp() {
  // @@protoc_insertion_point(field_release:Reflector.AckResult.timestamp)
  
  return timestamp_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AckResult::set_allocated_timestamp(::std::string* timestamp) {
  if (timestamp != NULL) {
    
  } else {
    
  }
  timestamp_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), timestamp);
  // @@protoc_insertion_point(field_set_allocated:Reflector.AckResult.timestamp)
}

// -------------------------------------------------------------------

// helloworldRequest

// int32 id = 1;
inline void helloworldRequest::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 helloworldRequest::id() const {
  // @@protoc_insertion_point(field_get:Reflector.helloworldRequest.id)
  return id_;
}
inline void helloworldRequest::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:Reflector.helloworldRequest.id)
}

// string str = 2;
inline void helloworldRequest::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& helloworldRequest::str() const {
  // @@protoc_insertion_point(field_get:Reflector.helloworldRequest.str)
  return str_.GetNoArena();
}
inline void helloworldRequest::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Reflector.helloworldRequest.str)
}
#if LANG_CXX11
inline void helloworldRequest::set_str(::std::string&& value) {
  
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Reflector.helloworldRequest.str)
}
#endif
inline void helloworldRequest::set_str(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Reflector.helloworldRequest.str)
}
inline void helloworldRequest::set_str(const char* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Reflector.helloworldRequest.str)
}
inline ::std::string* helloworldRequest::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:Reflector.helloworldRequest.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* helloworldRequest::release_str() {
  // @@protoc_insertion_point(field_release:Reflector.helloworldRequest.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void helloworldRequest::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:Reflector.helloworldRequest.str)
}

// int32 opt = 3;
inline void helloworldRequest::clear_opt() {
  opt_ = 0;
}
inline ::google::protobuf::int32 helloworldRequest::opt() const {
  // @@protoc_insertion_point(field_get:Reflector.helloworldRequest.opt)
  return opt_;
}
inline void helloworldRequest::set_opt(::google::protobuf::int32 value) {
  
  opt_ = value;
  // @@protoc_insertion_point(field_set:Reflector.helloworldRequest.opt)
}

// -------------------------------------------------------------------

// helloworldResponse

// string str = 1;
inline void helloworldResponse::clear_str() {
  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& helloworldResponse::str() const {
  // @@protoc_insertion_point(field_get:Reflector.helloworldResponse.str)
  return str_.GetNoArena();
}
inline void helloworldResponse::set_str(const ::std::string& value) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Reflector.helloworldResponse.str)
}
#if LANG_CXX11
inline void helloworldResponse::set_str(::std::string&& value) {
  
  str_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Reflector.helloworldResponse.str)
}
#endif
inline void helloworldResponse::set_str(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Reflector.helloworldResponse.str)
}
inline void helloworldResponse::set_str(const char* value, size_t size) {
  
  str_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Reflector.helloworldResponse.str)
}
inline ::std::string* helloworldResponse::mutable_str() {
  
  // @@protoc_insertion_point(field_mutable:Reflector.helloworldResponse.str)
  return str_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* helloworldResponse::release_str() {
  // @@protoc_insertion_point(field_release:Reflector.helloworldResponse.str)
  
  return str_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void helloworldResponse::set_allocated_str(::std::string* str) {
  if (str != NULL) {
    
  } else {
    
  }
  str_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:Reflector.helloworldResponse.str)
}

// int32 opt = 2;
inline void helloworldResponse::clear_opt() {
  opt_ = 0;
}
inline ::google::protobuf::int32 helloworldResponse::opt() const {
  // @@protoc_insertion_point(field_get:Reflector.helloworldResponse.opt)
  return opt_;
}
inline void helloworldResponse::set_opt(::google::protobuf::int32 value) {
  
  opt_ = value;
  // @@protoc_insertion_point(field_set:Reflector.helloworldResponse.opt)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Reflector

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_reflector_2eproto__INCLUDED
