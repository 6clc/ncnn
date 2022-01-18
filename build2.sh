mkdir -p build-host-gcc-linux
pushd build-host-gcc-linux
cmake -DCMAKE_TOOLCHAIN_FILE=../toolchains/host.gcc.toolchain.cmake ..
make -j4
make install
popd

