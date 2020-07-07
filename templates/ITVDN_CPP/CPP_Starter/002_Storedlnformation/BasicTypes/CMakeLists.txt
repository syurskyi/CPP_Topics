cmake_minimum_required(VERSION 3.5)

project(BasicTypes)

set(SOURCES
        BasicTypes.cpp)

add_executable(BasicTypes ${SOURCES})

set_target_properties(BasicTypes PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)