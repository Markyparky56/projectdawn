# GreenDawn Library CmakeLists
cmake_minimum_required(VERSION 2.6)
project (GreenDawn)

set(PROJECT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB_RECURSE GreenDawn_sources "src/*.cpp" "include/*.hpp")

include_directories("${PROJECT_INCLUDE_DIR}")

add_library(${PROJECT_NAME} SHARED ${GreenDawn_sources})