cmake_minimum_required(VERSION 3.5)

project(013Array)

set(SOURCES
        013Array.cpp)

add_executable(013Array ${SOURCES})

set_target_properties(013Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)