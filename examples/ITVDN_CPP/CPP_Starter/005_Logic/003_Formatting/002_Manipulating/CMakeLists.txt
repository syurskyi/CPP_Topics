cmake_minimum_required(VERSION 3.5)

project(002_Manipulating)

set(SOURCES
        002_Manipulating.cpp)

add_executable(002_Manipulating ${SOURCES})

set_target_properties(002_Manipulating PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)