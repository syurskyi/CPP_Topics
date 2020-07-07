cmake_minimum_required(VERSION 3.5)

project(012string)

set(SOURCES
        012string.cpp)

add_executable(012string ${SOURCES})

set_target_properties(012string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)