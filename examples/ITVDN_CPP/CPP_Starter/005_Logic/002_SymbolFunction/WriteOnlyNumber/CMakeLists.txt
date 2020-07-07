cmake_minimum_required(VERSION 3.5)

project(WriteOnlyNumber)

set(SOURCES
        WriteOnlyNumber.cpp)

add_executable(WriteOnlyNumber ${SOURCES})

set_target_properties(WriteOnlyNumber PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)