cmake_minimum_required(VERSION 3.14.0)

project(mdfa-key-value LANGUAGES CXX)

add_library(mdfa-key-value STATIC include/read-mdfa-kv.h src/read-mdfa-kv.cpp
                                  include/write-mdfa-kv.h src/write-mdfa-kv.cpp)

target_sources(mdfa-key-value PRIVATE src/read-mdfa-kv.cpp src/write-mdfa-kv.cpp)
target_include_directories(mdfa-key-value PRIVATE "${CMAKE_SOURCE_DIR}")

set(OUTPUT_INCLUDES_DIR "${CMAKE_SOURCE_DIR}/include/${PROJECT_NAME}")
set(PUBLIC_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/include/read-mdfa-kv.h
                  ${CMAKE_CURRENT_SOURCE_DIR}/include/write-mdfa-kv.h)

set(LIB_PATH $<TARGET_FILE:mdfa-key-value>)
set(LIB_NAME $<TARGET_FILE_NAME:mdfa-key-value>)

add_custom_command(TARGET mdfa-key-value
    PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory ${OUTPUT_INCLUDES_DIR}
    COMMAND ${CMAKE_COMMAND} -E copy ${PUBLIC_HEADER} ${OUTPUT_INCLUDES_DIR}
)
add_custom_command(TARGET mdfa-key-value
    POST_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy ${LIB_PATH} ${CMAKE_SOURCE_DIR}/libs/${LIB_NAME}
)

add_subdirectory(test)
