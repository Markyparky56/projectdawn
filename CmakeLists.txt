# NewDawn Root CmakeLists

cmake_minimum_required(VERSION 2.6)
project(ProjectDawn)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

set(NDF_INCLUDE_DIR "NDFramework")

include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}")

add_subdirectory(RedDawn)
add_subdirectory(GreenDawn)
add_subdirectory(BlueDawn)
add_subdirectory(NewDawn)