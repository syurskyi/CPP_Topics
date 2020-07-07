cmake_minimum_required(VERSION 3.5)

project(005_Functions)

set(SOURCES
        005_Functions.cpp)

add_executable(005_Functions ${SOURCES})

set_target_properties(005_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)