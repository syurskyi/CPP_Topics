cmake_minimum_required(VERSION 3.5)

project(002_For)

set(SOURCES
        002_For.cpp)

add_executable(002_For ${SOURCES})

set_target_properties(002_For PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)