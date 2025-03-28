cmake_minimum_required(VERSION 3.10)
project(ComputerSimulator)

set(CMAKE_CXX_STANDARD 23)

add_executable(ComputerSimulator main.cpp cpu.cpp ram.cpp disk.cpp gpu.cpp kbd.cpp)

include_directories(../include)
