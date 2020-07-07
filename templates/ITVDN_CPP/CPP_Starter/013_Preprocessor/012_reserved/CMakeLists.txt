cmake_minimum_required(VERSION 3.5)

project(012reserved)

set(SOURCES
        012reserved.cpp)

add_executable(012reserved ${SOURCES})

set_target_properties(012reserved PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)