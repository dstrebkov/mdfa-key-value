cmake_minimum_required(VERSION 3.14.0)

project(app-mdfa-key-value LANGUAGES CXX)

add_executable(app-mdfa-key-value)

target_sources(app-mdfa-key-value PRIVATE src/main.cpp)
target_include_directories(app-mdfa-key-value PRIVATE "${CMAKE_SOURCE_DIR}")
target_link_libraries(app-mdfa-key-value PRIVATE union-find-algs mdfa-key-value)
