cmake_minimum_required(VERSION 3.20)
cmake_policy(SET CMP0135 NEW)
project(c-starter VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)
include_directories(lib)

# Main executable
add_executable(main main.cpp)

# Library target for linking into tests (excludes main())
add_library(main_lib OBJECT main.cpp)
target_compile_definitions(main_lib PRIVATE TESTING)

# GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_main tests/test_main.cpp $<TARGET_OBJECTS:main_lib>)
target_link_libraries(test_main GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(test_main)
