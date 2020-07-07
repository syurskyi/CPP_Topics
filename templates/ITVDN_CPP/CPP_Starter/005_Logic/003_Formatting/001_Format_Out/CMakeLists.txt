cmake_minimum_required(VERSION 3.5)

project(001_Format_Out)

set(SOURCES
        001_Format_Out.cpp)

add_executable(001_Format_Out ${SOURCES})

set_target_properties(001_Format_Out PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)