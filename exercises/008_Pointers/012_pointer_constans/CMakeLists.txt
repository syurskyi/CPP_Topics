cmake_minimum_required(VERSION 3.5)

project(012pointerconstans)

set(SOURCES
        012pointerconstans.cpp)

add_executable(012pointerconstans ${SOURCES})

set_target_properties(012pointerconstans PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)