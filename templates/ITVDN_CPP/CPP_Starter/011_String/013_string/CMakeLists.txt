cmake_minimum_required(VERSION 3.5)

project(013string)

set(SOURCES
        013string.cpp)

add_executable(013string ${SOURCES})

set_target_properties(013string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)