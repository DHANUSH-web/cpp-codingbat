cmake_minimum_required(VERSION 3.20)
project(cpp-codingbat LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(cpp-codingbat src/core.cpp src/main.cpp)
target_include_directories(cpp-codingbat PRIVATE includes extras/googletest/googletest/include)

add_executable(cpp-codingbat-tests tests/test_core.cpp tests/test_main.cpp src/core.cpp extras/googletest/googletest/src/gtest-all.cc)
target_include_directories(cpp-codingbat-tests PRIVATE includes extras/googletest/googletest/include extras/googletest/googletest)
