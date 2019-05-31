# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: rpc.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='rpc.proto',
  package='',
  syntax='proto3',
  serialized_pb=_b('\n\trpc.proto\"^\n\x03Rpc\x1a\x31\n\x07Request\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\n\n\x02id\x18\x02 \x01(\x07\x12\x0c\n\x04\x64\x61ta\x18\x03 \x01(\x0c\x1a$\n\x08Response\x12\n\n\x02id\x18\x02 \x01(\x07\x12\x0c\n\x04\x64\x61ta\x18\x03 \x01(\x0c\x62\x06proto3')
)




_RPC_REQUEST = _descriptor.Descriptor(
  name='Request',
  full_name='Rpc.Request',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='Rpc.Request.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='id', full_name='Rpc.Request.id', index=1,
      number=2, type=7, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='data', full_name='Rpc.Request.data', index=2,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=20,
  serialized_end=69,
)

_RPC_RESPONSE = _descriptor.Descriptor(
  name='Response',
  full_name='Rpc.Response',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='Rpc.Response.id', index=0,
      number=2, type=7, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='data', full_name='Rpc.Response.data', index=1,
      number=3, type=12, cpp_type=9, label=1,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=71,
  serialized_end=107,
)

_RPC = _descriptor.Descriptor(
  name='Rpc',
  full_name='Rpc',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
  ],
  extensions=[
  ],
  nested_types=[_RPC_REQUEST, _RPC_RESPONSE, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=13,
  serialized_end=107,
)

_RPC_REQUEST.containing_type = _RPC
_RPC_RESPONSE.containing_type = _RPC
DESCRIPTOR.message_types_by_name['Rpc'] = _RPC
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Rpc = _reflection.GeneratedProtocolMessageType('Rpc', (_message.Message,), dict(

  Request = _reflection.GeneratedProtocolMessageType('Request', (_message.Message,), dict(
    DESCRIPTOR = _RPC_REQUEST,
    __module__ = 'rpc_pb2'
    # @@protoc_insertion_point(class_scope:Rpc.Request)
    ))
  ,

  Response = _reflection.GeneratedProtocolMessageType('Response', (_message.Message,), dict(
    DESCRIPTOR = _RPC_RESPONSE,
    __module__ = 'rpc_pb2'
    # @@protoc_insertion_point(class_scope:Rpc.Response)
    ))
  ,
  DESCRIPTOR = _RPC,
  __module__ = 'rpc_pb2'
  # @@protoc_insertion_point(class_scope:Rpc)
  ))
_sym_db.RegisterMessage(Rpc)
_sym_db.RegisterMessage(Rpc.Request)
_sym_db.RegisterMessage(Rpc.Response)


# @@protoc_insertion_point(module_scope)
