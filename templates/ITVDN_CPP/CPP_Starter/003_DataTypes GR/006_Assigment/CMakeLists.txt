cmake_minimum_required(VERSION 3.5)

project(006_Assigment)

set(SOURCES
        006_Assigment.cpp)

add_executable(006_Assigment ${SOURCES})

set_target_properties(006_Assigment PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)