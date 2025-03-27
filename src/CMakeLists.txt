cmake_minimum_required(VERSION 3.10)

add_executable(SurgerySimulator SurgerySimulator.cpp)

target_include_directories(SurgerySimulator PUBLIC ${CMAKE_SOURCE_DIR}/include)