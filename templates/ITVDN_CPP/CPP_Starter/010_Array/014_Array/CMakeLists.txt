cmake_minimum_required(VERSION 3.5)

project(014Array)

set(SOURCES
        014Array.cpp)

add_executable(014Array ${SOURCES})

set_target_properties(014Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)