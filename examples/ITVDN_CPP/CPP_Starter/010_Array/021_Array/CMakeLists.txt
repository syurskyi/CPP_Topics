cmake_minimum_required(VERSION 3.5)

project(021Array)

set(SOURCES
        021Array.cpp)

add_executable(021Array ${SOURCES})

set_target_properties(021Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)