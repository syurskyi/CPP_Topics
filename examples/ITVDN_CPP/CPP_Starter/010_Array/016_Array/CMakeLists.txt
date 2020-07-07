cmake_minimum_required(VERSION 3.5)

project(016Array)

set(SOURCES
        016Array.cpp)

add_executable(016Array ${SOURCES})

set_target_properties(016Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)