cmake_minimum_required(VERSION 3.5)

project(010pointerconstants)

set(SOURCES
        010pointerconstants.cpp)

add_executable(010pointerconstants ${SOURCES})

set_target_properties(010pointerconstants PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)