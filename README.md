Conan 2.0 integration
----------

activate virtualenv
pip install conan
conan profile detect --force # if needed
install dir is 

    ls ~/.conan2/**

    cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release