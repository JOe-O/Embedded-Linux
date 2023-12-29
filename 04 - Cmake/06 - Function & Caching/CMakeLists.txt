cmake_minimum_required(VERSION 3.22)

project(addIncludes VERSION 3.2)

#setting a variable to be used instead of writing all the files one after the other in the add_executable
set(SRC_FILES 

    main.cpp
    src/calc.cpp

)

message(STATUS "Included Source Files: ${SRC_FILES}")

set(year 2024)

function(happyNewYear arg1)
    message("ARG1 Name : ${arg1}")
    message("ARG1 Value : ${${arg1}}")
    message("Extra Argument Name : ${ARGN}")
    message("Arguments Count : ${ARGC}")
endfunction()

happyNewYear(year extra)

# caching a variable in the CMAKECache
option(cachVariable "boolean cached variable comment" TRUE)

# if we want the set command to cache its variables we can use it in this way
# TRUE is the value of the variable and BOOL is the type of the variable
set(cachSet TRUE CACHE BOOL "Boolean variable")

message("CACHED VARIABLES ARE: ${cachSet} and ${cachVariable}")

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(mainBin ${SRC_FILES})

target_include_directories(mainBin PUBLIC include/ lib/ ${PROJECT_BINARY_DIR})

target_link_libraries(mainBin PUBLIC wifiLib)
