cmake_minimum_required(VERSION 3.5)

project(005_For_in_For)

set(SOURCES
        005_For_in_For.cpp)

add_executable(005_For_in_For ${SOURCES})

set_target_properties(005_For_in_For PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)