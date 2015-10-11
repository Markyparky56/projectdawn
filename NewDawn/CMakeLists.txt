# NewDawn Executable CmakeLists
cmake_minimum_required(VERSION 2.6)
project (NewDawn)

set(PROJECT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB_RECURSE NewDawn_sources "src/*.cpp" "include/*.hpp")

include_directories("${PROJECT_INCLUDE_DIR}")

add_executable(NewDawn ${NewDawn_sources})
target_link_libraries(NewDawn RedDawn GreenDawn BlueDawn)