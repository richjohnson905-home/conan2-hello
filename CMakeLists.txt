cmake_minimum_required(VERSION 3.20)
project(cpp-hello)

set (CMAKE_CXX_STANDARD 17)
find_package(CLI11 REQUIRED)

add_subdirectory(src)
add_subdirectory(test)
enable_testing()