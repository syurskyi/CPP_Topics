cmake_minimum_required(VERSION 3.5)

project(001Array)

set(SOURCES
        001Array.cpp)

add_executable(001Array ${SOURCES})

set_target_properties(001Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)