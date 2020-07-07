cmake_minimum_required(VERSION 3.5)

project(014string)

set(SOURCES
        014string.cpp)

add_executable(014string ${SOURCES})

set_target_properties(014string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)