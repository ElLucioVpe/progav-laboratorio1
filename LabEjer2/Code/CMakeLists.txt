# cmake_minimum_required(VERSION <specify CMake version here>)
cmake_minimum_required(VERSION 3.5)
project(Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

file(GLOB SOURCES "*.cpp")

add_executable(Code ${SOURCES})