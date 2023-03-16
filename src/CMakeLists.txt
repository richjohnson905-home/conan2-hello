
add_executable(cpp-hello main.cpp Hello.cpp)

target_link_libraries(cpp-hello CLI11::CLI11)