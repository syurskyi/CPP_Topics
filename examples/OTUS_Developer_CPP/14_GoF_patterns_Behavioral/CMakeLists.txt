cmake_minimum_required(VERSION 3.2)

project(gof_4)

add_executable(observer observer.cpp)

add_executable(state state.cpp)

add_executable(strategy strategy.cpp)

add_executable(template_method template_method.cpp)

add_executable(visitor visitor.cpp)

set_target_properties(observer state strategy template_method visitor PROPERTIES
    CXX_STANDARD 14
    CXX_STANDARD_REQUIRED ON
    COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
)
