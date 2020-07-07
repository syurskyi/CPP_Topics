cmake_minimum_required(VERSION 3.5)

project(010_whileExample)

set(SOURCES
        010_whileExample.cpp)

add_executable(010_whileExample ${SOURCES})

set_target_properties(010_whileExample PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)