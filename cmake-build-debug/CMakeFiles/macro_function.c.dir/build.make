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
include CMakeFiles/macro_function.c.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/macro_function.c.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/macro_function.c.dir/flags.make

CMakeFiles/macro_function.c.dir/macro_function.c.o: CMakeFiles/macro_function.c.dir/flags.make
CMakeFiles/macro_function.c.dir/macro_function.c.o: ../macro_function.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/macro_function.c.dir/macro_function.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/macro_function.c.dir/macro_function.c.o -c /Users/innocent/CLionProjects/C/macro_function.c

CMakeFiles/macro_function.c.dir/macro_function.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/macro_function.c.dir/macro_function.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/innocent/CLionProjects/C/macro_function.c > CMakeFiles/macro_function.c.dir/macro_function.c.i

CMakeFiles/macro_function.c.dir/macro_function.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/macro_function.c.dir/macro_function.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/innocent/CLionProjects/C/macro_function.c -o CMakeFiles/macro_function.c.dir/macro_function.c.s

CMakeFiles/macro_function.c.dir/src/factorial.c.o: CMakeFiles/macro_function.c.dir/flags.make
CMakeFiles/macro_function.c.dir/src/factorial.c.o: ../src/factorial.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/macro_function.c.dir/src/factorial.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/macro_function.c.dir/src/factorial.c.o -c /Users/innocent/CLionProjects/C/src/factorial.c

CMakeFiles/macro_function.c.dir/src/factorial.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/macro_function.c.dir/src/factorial.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/innocent/CLionProjects/C/src/factorial.c > CMakeFiles/macro_function.c.dir/src/factorial.c.i

CMakeFiles/macro_function.c.dir/src/factorial.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/macro_function.c.dir/src/factorial.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/innocent/CLionProjects/C/src/factorial.c -o CMakeFiles/macro_function.c.dir/src/factorial.c.s

# Object files for target macro_function.c
macro_function_c_OBJECTS = \
"CMakeFiles/macro_function.c.dir/macro_function.c.o" \
"CMakeFiles/macro_function.c.dir/src/factorial.c.o"

# External object files for target macro_function.c
macro_function_c_EXTERNAL_OBJECTS =

macro_function.c: CMakeFiles/macro_function.c.dir/macro_function.c.o
macro_function.c: CMakeFiles/macro_function.c.dir/src/factorial.c.o
macro_function.c: CMakeFiles/macro_function.c.dir/build.make
macro_function.c: CMakeFiles/macro_function.c.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable macro_function.c"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/macro_function.c.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/macro_function.c.dir/build: macro_function.c
.PHONY : CMakeFiles/macro_function.c.dir/build

CMakeFiles/macro_function.c.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/macro_function.c.dir/cmake_clean.cmake
.PHONY : CMakeFiles/macro_function.c.dir/clean

CMakeFiles/macro_function.c.dir/depend:
	cd /Users/innocent/CLionProjects/C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/innocent/CLionProjects/C /Users/innocent/CLionProjects/C /Users/innocent/CLionProjects/C/cmake-build-debug /Users/innocent/CLionProjects/C/cmake-build-debug /Users/innocent/CLionProjects/C/cmake-build-debug/CMakeFiles/macro_function.c.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/macro_function.c.dir/depend

