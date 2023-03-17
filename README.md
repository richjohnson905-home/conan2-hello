Conan 2.0 integration
----------

install dir is 

    ls ~/.conan2/**
    source venv/bin/activate
    pip install conan
    conan profile detect --force # if needed
    conan install . --output-folder=build --build=missing
    cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Debug
