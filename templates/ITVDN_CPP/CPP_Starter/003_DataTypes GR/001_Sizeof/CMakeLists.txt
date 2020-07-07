cmake_minimum_required(VERSION 3.5)

project(001_Sizeof)

set(SOURCES
        001_Sizeof.cpp)

add_executable(001_Sizeof ${SOURCES})

set_target_properties(001_Sizeof PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)