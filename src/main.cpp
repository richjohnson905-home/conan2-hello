#include <iostream>
#include <CLI/CLI.hpp>

int main(int argc, char **argv) {
    CLI::App app("App Desc");

    int p = 0;
    app.add_option("-p", p, "Parameter");

    CLI11_PARSE(app, argc, argv);

    std::cout << "Parameter value: " << p << std::endl;

    std::cout << "Hello, World\n";

    return 0;
}