# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/innocent/CLionProjects/C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/innocent/CLionProjects/C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test2.c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/test2.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test2.c.dir/flags.make

CMakeFiles/test2.c.dir/test2.c.o: CMakeFiles/test2.c.dir/flags.make
CMakeFiles/test2.c.dir/test2.c.o: ../test2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test2.c.dir/test2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test2.c.dir/test2.c.o -c /Users/innocent/CLionProjects/C/test2.c

CMakeFiles/test2.c.dir/test2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test2.c.dir/test2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/innocent/CLionProjects/C/test2.c > CMakeFiles/test2.c.dir/test2.c.i

CMakeFiles/test2.c.dir/test2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test2.c.dir/test2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/innocent/CLionProjects/C/test2.c -o CMakeFiles/test2.c.dir/test2.c.s

# Object files for target test2.c
test2_c_OBJECTS = \
"CMakeFiles/test2.c.dir/test2.c.o"

# External object files for target test2.c
test2_c_EXTERNAL_OBJECTS =

test2.c: CMakeFiles/test2.c.dir/test2.c.o
test2.c: CMakeFiles/test2.c.dir/build.make
test2.c: CMakeFiles/test2.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test2.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test2.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test2.c.dir/build: test2.c
.PHONY : CMakeFiles/test2.c.dir/build

CMakeFiles/test2.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test2.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test2.c.dir/clean

CMakeFiles/test2.c.dir/depend:
	cd /Users/innocent/CLionProjects/C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/innocent/CLionProjects/C /Users/innocent/CLionProjects/C /Users/innocent/CLionProjects/C/cmake-build-debug /Users/innocent/CLionProjects/C/cmake-build-debug /Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles/test2.c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test2.c.dir/depend

