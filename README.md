Conan 2.0 integration
----------

activate virtualenv
source venv/bin/activate
pip install conan
conan profile detect --force # if needed
conan install . --output-folder=build --build=missing
install dir is 

    ls ~/.conan2/**

    cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Debug