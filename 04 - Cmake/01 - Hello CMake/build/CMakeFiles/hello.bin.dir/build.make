# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build"

# Include any dependencies generated for this target.
include CMakeFiles/hello.bin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hello.bin.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.bin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.bin.dir/flags.make

CMakeFiles/hello.bin.dir/main.cpp.o: CMakeFiles/hello.bin.dir/flags.make
CMakeFiles/hello.bin.dir/main.cpp.o: ../main.cpp
CMakeFiles/hello.bin.dir/main.cpp.o: CMakeFiles/hello.bin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.bin.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hello.bin.dir/main.cpp.o -MF CMakeFiles/hello.bin.dir/main.cpp.o.d -o CMakeFiles/hello.bin.dir/main.cpp.o -c "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/main.cpp"

CMakeFiles/hello.bin.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.bin.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/main.cpp" > CMakeFiles/hello.bin.dir/main.cpp.i

CMakeFiles/hello.bin.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.bin.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/main.cpp" -o CMakeFiles/hello.bin.dir/main.cpp.s

# Object files for target hello.bin
hello_bin_OBJECTS = \
"CMakeFiles/hello.bin.dir/main.cpp.o"

# External object files for target hello.bin
hello_bin_EXTERNAL_OBJECTS =

hello.bin: CMakeFiles/hello.bin.dir/main.cpp.o
hello.bin: CMakeFiles/hello.bin.dir/build.make
hello.bin: CMakeFiles/hello.bin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hello.bin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.bin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.bin.dir/build: hello.bin
.PHONY : CMakeFiles/hello.bin.dir/build

CMakeFiles/hello.bin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.bin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.bin.dir/clean

CMakeFiles/hello.bin.dir/depend:
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake" "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake" "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build" "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build" "/home/joe/Desktop/Embedded-Linux/04 - CMake/01 - Hello CMake/build/CMakeFiles/hello.bin.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hello.bin.dir/depend

