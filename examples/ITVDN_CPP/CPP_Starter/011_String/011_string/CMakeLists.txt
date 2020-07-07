cmake_minimum_required(VERSION 3.5)

project(011string)

set(SOURCES
        011string.cpp)

add_executable(011string ${SOURCES})

set_target_properties(011string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)