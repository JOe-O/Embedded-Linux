cmake_minimum_required(VERSION 3.22)

project(Wifi_Lib)


message("Wifi Library Included")

add_library(wifiLib SHARED
    wifi.cpp
    wifi.hpp
)