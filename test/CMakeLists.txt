#####################################TEST CMake################################
cmake_minimum_required(VERSION 3.15)

set(PROJ_TEST_EXE TESTS)

set(PROJ_TEST_SRCS
    test_example.cpp
    )

add_subdirectory(../googletest googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJ_TEST_EXE} ${PROJ_TEST_SRCS})

target_include_directories(${PROJ_TEST_EXE} PRIVATE ../src/helpers)

# Link the Google Test framework
target_link_libraries(${PROJ_TEST_EXE} PRIVATE gtest gtest_main)
