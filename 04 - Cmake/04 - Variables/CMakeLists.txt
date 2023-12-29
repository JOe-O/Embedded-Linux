cmake_minimum_required(VERSION 3.22)

project(addIncludes VERSION 3.2)

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

# message(STATUS "CMAKE SOURCE DIR : ${CMAKE_SOURCE_DIR}")

# message(STATUS "CMAKE CURRENT SOURCE DIR : ${CMAKE_CURRENT_SOURCE_DIR}")

# message(STATUS "CMAKE BINARY DIR : ${CMAKE_BINARY_DIR}")

# message(STATUS "CMAKE CURRENT BINARY DIR : ${CMAKE_CURRENT_BINARY_DIR}")

# message(STATUS "PROJECT BINARY DIR : ${PROJECT_BINARY_DIR}")


#settings c++ standard to 17
set(CMAKE_CXX_STANDARD 17)
#for settings c++ standard this variable must be set to TRUE
set(CMAKE_CXX_STANDARD_REQUIRED True)

# message(STATUS "Show C++ standard : ${CMAKE_CXX_STANDARD}")

# message(STATUS "Show C++ standard : ${CMAKE_CXX_STANDARD_REQUIRED}")


set(PRODUCT_TYPE "BMW")

configure_file(config.h.in config.h)


add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(mainBin ${SRC_FILES})

target_include_directories(mainBin PUBLIC include/ lib/ ${PROJECT_BINARY_DIR})

target_link_libraries(mainBin PUBLIC wifiLib)
