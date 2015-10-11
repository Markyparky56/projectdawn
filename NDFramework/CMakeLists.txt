# NDFramework library CMakeLists
cmake_minimum_required(VERSION 2.6)
project(NDFramework)

set(PROJECT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE NDF_includes ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp)

add_library(${PROJECT_NAME} STATIC ${NDF_includes})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)