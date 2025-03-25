cmake_minimum_required(VERSION 3.10)

project(SurgerySimulator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#”казал напр€мую директории
include_directories("C:/Users/maksi/source/repos/Lab_25.4/SurgerySimulator/include")

add_executable(SurgerySimulator 
    "C:/Users/maksi/source/repos/Lab_25.4/SurgerySimulator/SurgerySimulator.cpp"
)

target_include_directories(SurgerySimulator PRIVATE "C:/Users/maksi/source/repos/Lab_25.4/SurgerySimulator/include")