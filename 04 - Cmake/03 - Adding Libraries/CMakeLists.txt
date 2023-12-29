cmake_minimum_required(VERSION 3.22)

project(addIncludes)

#setting a variable to be used instead of writing all the files one after the other in the add_executable
set(SRC_FILES 

    main.cpp
    src/calc.cpp

)

message(STATUS "Included Source Files: ${SRC_FILES}")
# message(WARNING "Included Source Files: ${SRC_FILES}")
# message(FATAL_ERROR "Included Source Files: ${SRC_FILES}")

# if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
#     message("Files Exists")
# else()
#     message(FATAL_ERROR "Files doesn't exist")
# endif()

add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(mainBin ${SRC_FILES})

target_include_directories(mainBin PUBLIC include/ lib/)

target_link_libraries(mainBin PUBLIC wifiLib)
