cmake_minimum_required(VERSION 3.10)

project("SurgerySimulator")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(SurgerySimulator "src/SurgerySimulator.cpp" "include/surgery_tools.h")