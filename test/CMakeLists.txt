cmake_minimum_required(VERSION 3.15)
project(test)

add_subdirectory(../googletest googletest)
add_subdirectory(../src/BankDir BankDir)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(TESTS test_example.cpp)

target_include_directories(TESTS PRIVATE ../src/BankDir)

# Link the Google Test framework
target_link_libraries(TESTS PRIVATE gtest gtest_main)

# Link your Account class from the source code
target_link_libraries(TESTS PRIVATE BankLib)
