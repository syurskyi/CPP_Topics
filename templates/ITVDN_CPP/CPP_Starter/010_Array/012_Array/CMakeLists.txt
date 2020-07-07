cmake_minimum_required(VERSION 3.5)

project(012Array)

set(SOURCES
        012Array.cpp)

add_executable(012Array ${SOURCES})

set_target_properties(012Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)