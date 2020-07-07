cmake_minimum_required(VERSION 3.5)

project(011_Functions)

set(SOURCES
        011_Functions.cpp)

add_executable(011_Functions ${SOURCES})

set_target_properties(011_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)