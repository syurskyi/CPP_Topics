cmake_minimum_required(VERSION 3.5)

project(006string)

set(SOURCES
        006string.cpp)

add_executable(006string ${SOURCES})

set_target_properties(006string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)