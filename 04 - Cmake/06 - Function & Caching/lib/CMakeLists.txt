cmake_minimum_required(VERSION 3.22)

project(Wifi_Lib)


message("Wifi Library Included")

# message(STATUS "CMAKE SOURCE DIR : ${CMAKE_SOURCE_DIR}")

# message(STATUS "CMAKE CURRENT SOURCE DIR : ${CMAKE_CURRENT_SOURCE_DIR}")

# message(STATUS "CMAKE BINARY DIR : ${CMAKE_BINARY_DIR}")

# message(STATUS "CMAKE CURRENT BINARY DIR : ${CMAKE_CURRENT_BINARY_DIR}")

add_library(wifiLib
    wifi.cpp
    wifi.hpp
)