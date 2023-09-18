###############################Src CMake####################################
cmake_minimum_required(VERSION 3.15)

set(PROJ_CORE_LIB MyCoreLib)

# List of source files for your library
set(PROJ_SRCS
    helpers/Account.cpp
)

# Create a library target
add_library(${PROJ_CORE_LIB} ${PROJ_SRCS})

# Set the build type
set(CMAKE_BUILD_TYPE Debug)

# Create an executable target
add_executable(MAIN main.cpp)

# Include directories for the MAIN target
target_include_directories(MAIN PRIVATE helpers)

# Link the MAIN target with your core library
target_link_libraries(MAIN PRIVATE ${PROJ_CORE_LIB})
