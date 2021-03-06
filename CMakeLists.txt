# Minimum CMake required
cmake_minimum_required(VERSION 3.1)

# Project
project(onnx-xla C CXX)

# Set C++11 as standard for the whole project
set(CMAKE_CXX_STANDARD 11)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/Modules)

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb")

if(TARGET protobuf::libprotobuf)
  # Sometimes we need to use protoc compiled for host architecture while
  # linking libprotobuf against target architecture. See
  # https://github.com/caffe2/caffe2/blob/96f35ad75480b25c1a23d6e9e97bccae9f7a7f9c/cmake/ProtoBuf.cmake#L92-L99
  if(EXISTS "${ONNX_XLA_CUSTOM_PROTOC_EXECUTABLE}")
    message(STATUS "Using custom protoc executable")
    set(ONNX_XLA_PROTOC_EXECUTABLE ${ONNX_XLA_CUSTOM_PROTOC_EXECUTABLE})
  else()
    set(ONNX_XLA_PROTOC_EXECUTABLE $<TARGET_FILE:protobuf::protoc>)
  endif()
else()
  # Customized version of find Protobuf. We need to avoid situations mentioned
  # in https://github.com/caffe2/caffe2/blob/b7d983f255ef5496474f1ea188edb5e0ac442761/cmake/ProtoBuf.cmake#L82-L92
  # The following section is stolen from cmake/ProtoBuf.cmake in Caffe2
  find_program(Protobuf_PROTOC_EXECUTABLE
    NAMES protoc
    DOC "The Google Protocol Buffers Compiler")

  # Only if protoc was found, seed the include directories and libraries.
  # We assume that protoc is installed at PREFIX/bin.
  # We use get_filename_component to resolve PREFIX.
  if(Protobuf_PROTOC_EXECUTABLE)
    set(ONNX_XLA_PROTOC_EXECUTABLE ${Protobuf_PROTOC_EXECUTABLE})
    get_filename_component(
      _PROTOBUF_INSTALL_PREFIX
      ${Protobuf_PROTOC_EXECUTABLE}
      DIRECTORY)
    get_filename_component(
      _PROTOBUF_INSTALL_PREFIX
      ${_PROTOBUF_INSTALL_PREFIX}/..
      REALPATH)
    find_library(Protobuf_LIBRARY
      NAMES protobuf
      PATHS ${_PROTOBUF_INSTALL_PREFIX}/lib
      NO_DEFAULT_PATH)
    find_library(Protobuf_PROTOC_LIBRARY
      NAMES protoc
      PATHS ${_PROTOBUF_INSTALL_PREFIX}/lib
      NO_DEFAULT_PATH)
    find_library(Protobuf_LITE_LIBRARY
      NAMES protobuf-lite
      PATHS ${_PROTOBUF_INSTALL_PREFIX}/lib
      NO_DEFAULT_PATH)
    find_path(Protobuf_INCLUDE_DIR
      google/protobuf/service.h
      PATHS ${_PROTOBUF_INSTALL_PREFIX}/include
      NO_DEFAULT_PATH)
    find_package(Protobuf REQUIRED)
  endif()
endif()

include_directories(
  "${PROJECT_SOURCE_DIR}")

# Build the libraries with -fPIC
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if(NOT DEFINED ONNX_NAMESPACE)
  set(ONNX_NAMESPACE onnx_xla)
endif()
add_definitions("-DONNX_NAMESPACE=${ONNX_NAMESPACE}")

# onnx library
add_subdirectory(${PROJECT_SOURCE_DIR}/third_party/onnx)

# xla library
SET(XLA_INCLUDE_DIRS
  "${PROJECT_SOURCE_DIR}/third_party/pytorch/third_party/tensorflow/bazel-tensorflow"
  "${PROJECT_SOURCE_DIR}/third_party/pytorch/third_party/tensorflow/bazel-genfiles"
  "${PROJECT_SOURCE_DIR}/third_party/pytorch/third_party/tensorflow/bazel-tensorflow/external/protobuf_archive/src"
  "${PROJECT_SOURCE_DIR}/third_party/pytorch/third_party/tensorflow/bazel-tensorflow/external/eigen_archive")
SET(XLA_LIBRARIES
  "${PROJECT_SOURCE_DIR}/third_party/pytorch/third_party/tensorflow/bazel-bin/tensorflow/compiler/xla/rpc/libxla_computation_client.so"
  "${PROJECT_SOURCE_DIR}/third_party/pytorch/third_party/tensorflow/bazel-bin/tensorflow/libtensorflow_framework.so")
add_custom_command(
  OUTPUT ${XLA_LIBRARIES}
  COMMAND ${PROJECT_SOURCE_DIR}/scripts/build_xla.sh)
add_custom_target(xla
  SOURCES ${XLA_LIBRARIES})

# TODO: Get this from grpc CMake files
SET(GRPC_LIBRARIES
  "/usr/local/lib/libgrpc.so"
  "/usr/local/lib/libgrpc++.so")

# onnx_xla library
file(GLOB_RECURSE onnx_xla_src
  onnx_xla/*.cc)
add_library(onnx_xla ${onnx_xla_src})
add_dependencies(onnx_xla xla)
target_link_libraries(onnx_xla onnx ${XLA_LIBRARIES} ${GRPC_LIBRARIES})
target_include_directories(onnx_xla PUBLIC ${XLA_INCLUDE_DIRS})

# binaries
file(GLOB_RECURSE binaries
  bin/*.cc)
foreach(bin ${binaries})
  get_filename_component(name ${bin} NAME_WE)
  add_executable(${name} ${bin})
  target_link_libraries(${name} onnx_xla)
endforeach()
