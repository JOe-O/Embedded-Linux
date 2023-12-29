cmake_minimum_required(VERSION 3.22)

project(print_lib)

message(STATUS "adding print library....")

add_library(printLib SHARED
    print.cpp
    print.hpp
)