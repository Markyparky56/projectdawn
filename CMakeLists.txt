# NewDawn Root CmakeLists

cmake_minimum_required(VERSION 2.6)
project(ProjectDawn)

set(NDF_INCLUDE_DIR "NDFramework")

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)

include_directories("${NDF_INCLUDE_DIR}")

add_subdirectory(NDFramework)
add_subdirectory(RedDawn)
add_subdirectory(GreenDawn)
add_subdirectory(BlueDawn)
add_subdirectory(NewDawn)