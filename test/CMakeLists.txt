cmake_minimum_required(VERSION 3.15)

project(test)

add_subdirectory(../googletest googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(TESTS
test_example.cpp
)

target_link_libraries(TESTS gtest gtest_main)
