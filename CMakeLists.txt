cmake_minimum_required(VERSION 3.14.0)

project("mdfa-key-value" VERSION 0.1 DESCRIPTION "Dictionary based on minimal finite-state automata" LANGUAGES CXX)

set(CMAKE_CXX_FLAGS "-g -O0 -Wall --coverage")

# Enable CTest at the current directory and below (before add_subdirectory())
include(CTest)

add_subdirectory(union-find-algs)
add_subdirectory(mdfa-key-value)
add_subdirectory(app-union-find)
add_subdirectory(app-mdfa-key-value)
