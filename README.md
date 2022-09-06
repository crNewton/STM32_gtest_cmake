# STM32_gtest_cmake
Example project of googletest with cmake, and an existing STM32CubeIDE project

To build:
```console
foo@bar:~$ git clone https://github.com/crNewton/STM32_gtest_cmake.git
foo@bar:~$ cd STM32_gtest_cmake/ExampleProject/STM32_Test/
foo@bar:~$ mkdir build & cd build
foo@bar:~$ cmake ..
foo@bar:~$ make
foo@bar:~$ ctest
```
Tested on Ubuntu20.04 + gcc-9