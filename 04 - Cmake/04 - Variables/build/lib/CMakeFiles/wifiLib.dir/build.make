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
CMAKE_SOURCE_DIR = "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build"

# Include any dependencies generated for this target.
include lib/CMakeFiles/wifiLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include lib/CMakeFiles/wifiLib.dir/compiler_depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/wifiLib.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/wifiLib.dir/flags.make

lib/CMakeFiles/wifiLib.dir/wifi.cpp.o: lib/CMakeFiles/wifiLib.dir/flags.make
lib/CMakeFiles/wifiLib.dir/wifi.cpp.o: ../lib/wifi.cpp
lib/CMakeFiles/wifiLib.dir/wifi.cpp.o: lib/CMakeFiles/wifiLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/wifiLib.dir/wifi.cpp.o"
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT lib/CMakeFiles/wifiLib.dir/wifi.cpp.o -MF CMakeFiles/wifiLib.dir/wifi.cpp.o.d -o CMakeFiles/wifiLib.dir/wifi.cpp.o -c "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/lib/wifi.cpp"

lib/CMakeFiles/wifiLib.dir/wifi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wifiLib.dir/wifi.cpp.i"
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/lib/wifi.cpp" > CMakeFiles/wifiLib.dir/wifi.cpp.i

lib/CMakeFiles/wifiLib.dir/wifi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wifiLib.dir/wifi.cpp.s"
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/lib/wifi.cpp" -o CMakeFiles/wifiLib.dir/wifi.cpp.s

# Object files for target wifiLib
wifiLib_OBJECTS = \
"CMakeFiles/wifiLib.dir/wifi.cpp.o"

# External object files for target wifiLib
wifiLib_EXTERNAL_OBJECTS =

lib/libwifiLib.a: lib/CMakeFiles/wifiLib.dir/wifi.cpp.o
lib/libwifiLib.a: lib/CMakeFiles/wifiLib.dir/build.make
lib/libwifiLib.a: lib/CMakeFiles/wifiLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libwifiLib.a"
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" && $(CMAKE_COMMAND) -P CMakeFiles/wifiLib.dir/cmake_clean_target.cmake
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wifiLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/wifiLib.dir/build: lib/libwifiLib.a
.PHONY : lib/CMakeFiles/wifiLib.dir/build

lib/CMakeFiles/wifiLib.dir/clean:
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" && $(CMAKE_COMMAND) -P CMakeFiles/wifiLib.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/wifiLib.dir/clean

lib/CMakeFiles/wifiLib.dir/depend:
	cd "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables" "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/lib" "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build" "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib" "/home/joe/Desktop/Embedded-Linux/04 - CMake/04 - Variables/build/lib/CMakeFiles/wifiLib.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/CMakeFiles/wifiLib.dir/depend

