cmake_minimum_required(VERSION 3.16)

project(RP-HV_test LANGUAGES CXX C)
set(CMAKE_CXX_STANDARD 14)

set(STM32_PROJECT_SOURCE_DIR "${PROJECT_SOURCE_DIR}/../STM32_Project/Project") 


##
### Test definitions ###
##


configure_file(CMakeLists.txt.in
        googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
execute_process(COMMAND ${CMAKE_COMMAND} --build .
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )

add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src
        ${CMAKE_BINARY_DIR}/googletest-build)

enable_testing()
add_subdirectory(test)

##
### Source definitions ###
##

include_directories("${STM32_PROJECT_SOURCE_DIR}/inc")

file(GLOB sources
  "${STM32_PROJECT_SOURCE_DIR}/inc/*.h"
  "${STM32_PROJECT_SOURCE_DIR}/src/*.c"
  "${PROJECT_SOURCE_DIR}/src/*.c")


add_executable(testy ${sources})