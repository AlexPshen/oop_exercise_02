cmake_minimum_required(VERSION 3.5)

project(oop_exercise_02)

add_executable(oop_exercise_02
               main.cpp
               budget.cpp
)

set_property(TARGET oop_exercise_02 PROPERTY CXX_STANDARD 14)

