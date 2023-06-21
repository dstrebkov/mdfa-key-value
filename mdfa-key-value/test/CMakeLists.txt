cmake_minimum_required(VERSION 3.18)

project(mdfa-key-value-tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        v1.13.0
    GIT_SHALLOW    TRUE)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(mdfa-key-value-tests include/mdfa-key-value-tests.h src/mdfa-key-value-tests.cpp)

target_include_directories(mdfa-key-value-tests PUBLIC "${CMAKE_SOURCE_DIR}")
target_link_libraries(mdfa-key-value-tests GTest::gtest mdfa-key-value)

target_compile_options(mdfa-key-value-tests PRIVATE -g -O0 -fno-elide-constructors)

include(GoogleTest)

set(REGRESSION_DATA_DIR "${PROJECT_SOURCE_DIR}/test-data")

# Use "EXTRA_ARGS --regressionDataDir=" to provide path to directory with regression file pairs (input + gold)
# Value of the argument should be double-quoted, i.e. "${REGRESSION_DATA_DIR}"
gtest_discover_tests(mdfa-key-value-tests EXTRA_ARGS --regressionDataDir="${REGRESSION_DATA_DIR}")
