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
CMAKE_SOURCE_DIR = "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build"

# Include any dependencies generated for this target.
include CMakeFiles/mainBin.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/mainBin.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/mainBin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mainBin.dir/flags.make

CMakeFiles/mainBin.dir/main.cpp.o: CMakeFiles/mainBin.dir/flags.make
CMakeFiles/mainBin.dir/main.cpp.o: ../main.cpp
CMakeFiles/mainBin.dir/main.cpp.o: CMakeFiles/mainBin.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mainBin.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/mainBin.dir/main.cpp.o -MF CMakeFiles/mainBin.dir/main.cpp.o.d -o CMakeFiles/mainBin.dir/main.cpp.o -c "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/main.cpp"

CMakeFiles/mainBin.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mainBin.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/main.cpp" > CMakeFiles/mainBin.dir/main.cpp.i

CMakeFiles/mainBin.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mainBin.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/main.cpp" -o CMakeFiles/mainBin.dir/main.cpp.s

# Object files for target mainBin
mainBin_OBJECTS = \
"CMakeFiles/mainBin.dir/main.cpp.o"

# External object files for target mainBin
mainBin_EXTERNAL_OBJECTS =

mainBin: CMakeFiles/mainBin.dir/main.cpp.o
mainBin: CMakeFiles/mainBin.dir/build.make
mainBin: lib/libprintLib.so
mainBin: CMakeFiles/mainBin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mainBin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mainBin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mainBin.dir/build: mainBin
.PHONY : CMakeFiles/mainBin.dir/build

CMakeFiles/mainBin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mainBin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mainBin.dir/clean

CMakeFiles/mainBin.dir/depend:
	cd "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library" "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library" "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build" "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build" "/home/joe/Desktop/Embedded-Linux/03 - Linux/02 - Shared Library/build/CMakeFiles/mainBin.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mainBin.dir/depend

