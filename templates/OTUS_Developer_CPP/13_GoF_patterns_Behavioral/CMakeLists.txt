cmake_minimum_required(VERSION 3.5)

project(gof_3)

add_executable(chain_of_responsibility chain_of_responsibility.cpp)
add_executable(command command.cpp)
add_executable(interpreter interpreter.cpp)
add_executable(iterator iterator.cpp)
add_executable(mediator mediator.cpp)
add_executable(memento memento.cpp)

set_target_properties(chain_of_responsibility command interpreter iterator mediator memento PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )
