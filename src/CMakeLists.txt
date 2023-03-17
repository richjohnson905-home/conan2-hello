find_package(CLI11 REQUIRED)
find_package(spdlog REQUIRED)

add_executable(cpp-hello main.cpp Hello.cpp)

target_link_libraries(cpp-hello CLI11::CLI11 spdlog::spdlog)