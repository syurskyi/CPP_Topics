cmake_minimum_required(VERSION 3.5)

project(006Namesace)

set(SOURCES
        006Namesace.cpp)

add_executable(006Namesace ${SOURCES})

set_target_properties(006Namesace PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)