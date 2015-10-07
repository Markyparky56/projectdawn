# BlueDawn Library CmakeLists

project (BlueDawn)

set(PROJECT_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(PROJECT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB_RECURSE BlueDawn_sources "src/.*cpp")

include_directories("${PROJECT_BINARY_DIR}")
include_directories("${PROJECT_INCLUDE_DIR}")
include_directories("${NDF_INCLUDE_DIR}")

add_library(${PROJECT_NAME} SHARED ${BlueDawn_sources})