cmake_minimum_required(VERSION 3.5)

project(007IfDef)

set(SOURCES
        007IfDef.cpp)

add_executable(007IfDef ${SOURCES})

set_target_properties(007IfDef PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)