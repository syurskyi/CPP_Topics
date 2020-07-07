cmake_minimum_required(VERSION 3.5)

project(009Link)

set(SOURCES
        009Link.cpp)

add_executable(009Link ${SOURCES})

set_target_properties(009Link PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)