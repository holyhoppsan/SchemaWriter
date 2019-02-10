cmake_minimum_required(VERSION 3.5)
project(SchemaWriter)

set(SCHEMA_WRITER_MAJOR_VERSION 0)
set(SCHEMA_WRITER_MINOR_VERSION 1)

set(SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include/*.h")

add_library(schemawriter STATIC ${SOURCES})

if (MSVC)
    add_compile_options(/W4)
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
    add_definitions(-Wall -Wextra -Werror -pedantic)
endif()

find_package(Catch2 REQUIRED)

set(TEST_SOURCES "${PROJECT_SOURCE_DIR/test/*.cpp")
add_executable(schemawritertests ${TEST_SOURCES})
target_link_libraries(schemawritertests Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(foo)