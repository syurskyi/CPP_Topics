cmake_minimum_required(VERSION 3.5)

project(007Array)

set(SOURCES
        007Array.cpp)

add_executable(007Array ${SOURCES})

set_target_properties(007Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)