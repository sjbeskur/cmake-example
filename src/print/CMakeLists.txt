cmake_minimum_required(VERSION 3.4.0)

project(Calculator_Project VERSION 1.0.0)

add_library(print src/print.cpp)
target_include_directories(print PUBLIC include)
