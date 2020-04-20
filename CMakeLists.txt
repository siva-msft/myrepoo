# Set the minimum version of CMake that can be used

# To find the cmake version run

# $ cmake --version

cmake_minimum_required(VERSION 3.5)



# Set the project name

project (p_test_make)



# Add an executable

add_executable(p_test_make example_ptr.cpp)
add_executable(p_test_make example_aof.cpp)
add_executable(p_test_make example_cuv.cpp)
