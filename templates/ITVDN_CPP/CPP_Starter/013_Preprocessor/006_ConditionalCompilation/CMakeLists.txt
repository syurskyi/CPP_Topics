cmake_minimum_required(VERSION 3.5)

project(006ConditionalCompilation)

set(SOURCES
        006ConditionalCompilation.cpp)

add_executable(006ConditionalCompilation ${SOURCES})

set_target_properties(006ConditionalCompilation PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON)