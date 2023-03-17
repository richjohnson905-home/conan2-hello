message(STATUS "Building Unit Tests")
set_property(GLOBAL PROPERTY CTEST_TARGETS_ADDED 1)
enable_testing()
include(CTest)

find_package(Catch2)

add_executable(HelloTest main.cpp HelloTest.cpp ../src/Hello.cpp)
add_test(NAME HelloTest COMMAND HelloTest WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloTest Catch2::Catch2)

