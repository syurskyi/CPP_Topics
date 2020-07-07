cmake_minimum_required(VERSION 3.5)

project(gof_2)

add_executable(adapter adapter.cpp)
add_executable(bridge bridge.cpp)
add_executable(composite composite.cpp)
add_executable(decorator decorator.cpp)
add_executable(facade facade.cpp)
add_executable(flyweight flyweight.cpp)
add_executable(proxy proxy.cpp)

set_target_properties(adapter bridge composite decorator facade flyweight proxy PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )
