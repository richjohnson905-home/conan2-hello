message(STATUS "Building Unit Tests")
include(CTest)

find_package(Catch2)

add_executable(HelloTest main.cpp HelloTest.cpp ../src/Hello.cpp)
add_test(NAME HelloTest COMMAND HelloTest WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(HelloTest Catch2::Catch2)

