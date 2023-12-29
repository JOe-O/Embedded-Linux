cmake_minimum_required(VERSION 3.22)

project(addIncludes VERSION 3.2)

#setting a variable to be used instead of writing all the files one after the other in the add_executable
set(SRC_FILES 

    main.cpp
    src/calc.cpp

)

message(STATUS "Included Source Files: ${SRC_FILES}")

configure_file(config.h.in config.h)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(mainBin ${SRC_FILES})

#compiler info
target_compile_definitions(mainBin PUBLIC "STD_CXX=17")
target_compile_options(mainBin PUBLIC -march=native)


target_include_directories(mainBin PUBLIC include/ lib/ ${PROJECT_BINARY_DIR})

target_link_libraries(mainBin PUBLIC wifiLib)

#copies and pastes the files in the destination
install(FILES "${CMAKE_BINARY_DIR}/mainBin"
    DESTINATION "${PROJECT_BINARY_DIR}/Executables"
)

install(FILES "${CMAKE_SOURCE_DIR}/config.h.in"
    "${CMAKE_SOURCE_DIR}/include/calc.hpp"
    "${CMAKE_SOURCE_DIR}/lib/wifi.hpp"
    DESTINATION "${PROJECT_BINARY_DIR}/Includes"
)