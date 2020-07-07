cmake_minimum_required(VERSION 3.5)

project(013_Functions)

set(SOURCES
        013_Functions.cpp)

add_executable(013_Functions ${SOURCES})

set_target_properties(013_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)