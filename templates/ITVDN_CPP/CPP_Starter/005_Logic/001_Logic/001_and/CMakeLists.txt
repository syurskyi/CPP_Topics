cmake_minimum_required(VERSION 3.5)

project(001_and)

set(SOURCES
        001_and.cpp)

add_executable(001_and ${SOURCES})

set_target_properties(001_and PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)