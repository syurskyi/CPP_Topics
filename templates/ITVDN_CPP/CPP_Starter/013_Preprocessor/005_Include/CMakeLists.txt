cmake_minimum_required(VERSION 3.5)

project(005Include)

set(SOURCES
        005Include.cpp)

add_executable(005Include ${SOURCES})

set_target_properties(005Include PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)