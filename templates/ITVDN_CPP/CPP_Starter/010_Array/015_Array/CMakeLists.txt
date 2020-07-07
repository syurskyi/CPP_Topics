cmake_minimum_required(VERSION 3.5)

project(015Array)

set(SOURCES
        015Array.cpp)

add_executable(015Array ${SOURCES})

set_target_properties(015Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)