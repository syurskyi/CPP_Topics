cmake_minimum_required(VERSION 3.5)

project(013_Dynamic)

set(SOURCES
        013_Dynamic.cpp)

add_executable(013_Dynamic ${SOURCES})

set_target_properties(013_Dynamic PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)