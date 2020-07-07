cmake_minimum_required(VERSION 3.5)

project(007_Functions)

set(SOURCES
        007_Functions.cpp)

add_executable(007_Functions ${SOURCES})

set_target_properties(007_Functions PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)