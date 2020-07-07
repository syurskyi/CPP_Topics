cmake_minimum_required(VERSION 3.5)

project(017Array)

set(SOURCES
        017Array.cpp)

add_executable(017Array ${SOURCES})

set_target_properties(017Array PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)