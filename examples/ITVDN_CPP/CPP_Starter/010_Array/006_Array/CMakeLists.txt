cmake_minimum_required(VERSION 3.5)

project(006Array)

set(SOURCES
        006Array.cpp)

add_executable(006Array ${SOURCES})

set_target_properties(006Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)