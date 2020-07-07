cmake_minimum_required(VERSION 3.5)

project(018Array)

set(SOURCES
        018Array.cpp)

add_executable(018Array ${SOURCES})

set_target_properties(018Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)