cmake_minimum_required(VERSION 3.5)

project(011pointerconstant)

set(SOURCES
        011pointerconstant.cpp)

add_executable(011pointerconstant ${SOURCES})

set_target_properties(011pointerconstant PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)