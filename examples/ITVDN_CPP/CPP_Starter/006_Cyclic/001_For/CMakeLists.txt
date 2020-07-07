cmake_minimum_required(VERSION 3.5)

project(001_For)

set(SOURCES
        001_For.cpp)

add_executable(001_For ${SOURCES})

set_target_properties(001_For PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)