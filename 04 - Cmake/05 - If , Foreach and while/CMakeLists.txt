cmake_minimum_required(VERSION 3.22)

project(addIncludes VERSION 3.2)

#setting a variable to be used instead of writing all the files one after the other in the add_executable
set(SRC_FILES 

    main.cpp
    src/calc.cpp

)

message(STATUS "Included Source Files: ${SRC_FILES}")


# if(DEBUG)
#     message(STATUS "Variable Exists")
# endif()

# foreach(I IN ITEMS R E D D E A D)
#     message(${I})
# endforeach()

# set(list R E D E M P T I O N 2)

# foreach(I IN LISTS list)
#     message(${I})
# endforeach()

#setting 'x' variable to 10
set(x 10)
while(x)
    message(STATUS ${x})
    math(EXPR x "${x} - 1") #decrementing the x variable by 1 in each loop
endwhile()


add_subdirectory(${CMAKE_SOURCE_DIR}/lib)

add_executable(mainBin ${SRC_FILES})

target_include_directories(mainBin PUBLIC include/ lib/ ${PROJECT_BINARY_DIR})

target_link_libraries(mainBin PUBLIC wifiLib)
