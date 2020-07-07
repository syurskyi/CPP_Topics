cmake_minimum_required(VERSION 3.5)

project(010Array)

set(SOURCES
        010Array.cpp)

add_executable(010Array ${SOURCES})

set_target_properties(010Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)