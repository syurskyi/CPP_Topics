cmake_minimum_required(VERSION 3.5)

project(022Array)

set(SOURCES
        022Array.cpp)

add_executable(022Array ${SOURCES})

set_target_properties(022Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)