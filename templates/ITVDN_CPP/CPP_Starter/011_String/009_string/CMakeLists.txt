cmake_minimum_required(VERSION 3.5)

project(009string)

set(SOURCES
        009string.cpp)

add_executable(009string ${SOURCES})

set_target_properties(009string PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)