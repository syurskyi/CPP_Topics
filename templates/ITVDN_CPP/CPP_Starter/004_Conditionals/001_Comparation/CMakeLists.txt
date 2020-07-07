cmake_minimum_required(VERSION 3.5)

project(001_Comparation)

set(SOURCES
        001_Comparation.cpp)

add_executable(001_Comparation ${SOURCES})

set_target_properties(001_Comparation PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)