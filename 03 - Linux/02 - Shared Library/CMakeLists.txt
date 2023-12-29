cmake_minimum_required(VERSION 3.22)

project(Hello_CMake)

set(SRC_FILES
    main.cpp
)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib/)

add_executable(mainBin ${SRC_FILES})

target_link_libraries(mainBin PUBLIC printLib)

target_include_directories(mainBin PUBLIC lib/)