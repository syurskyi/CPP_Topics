cmake_minimum_required(VERSION 3.5)

project(cpp14_2)

add_executable(decltype decltype.cpp)
add_executable(move move.cpp)
add_executable(vt vt.cpp)

set_target_properties(decltype move vt PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )
