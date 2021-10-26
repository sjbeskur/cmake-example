cmake_minimum_required(VERSION 3.4.0)

project(Calculator_Project VERSION 1.0.0)

add_library(math src/add.cpp src/div.cpp)

target_include_directories(math PUBLIC include)
