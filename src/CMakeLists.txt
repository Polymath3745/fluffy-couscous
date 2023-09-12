cmake_minimum_required(VERSION 3.15)

project(src)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(BankDir)

add_executable(MAIN main.cpp)

target_include_directories(MAIN PRIVATE BankDir)

target_link_libraries(MAIN PRIVATE BankLib)