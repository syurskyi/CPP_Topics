cmake_minimum_required(VERSION 3.5)

project(010string)

set(SOURCES
        010string.cpp)

add_executable(010string ${SOURCES})

set_target_properties(010string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)