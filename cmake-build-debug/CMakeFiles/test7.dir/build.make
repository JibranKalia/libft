# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jibrankalia/libft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jibrankalia/libft/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test7.dir/flags.make

CMakeFiles/test7.dir/test_str.c.o: CMakeFiles/test7.dir/flags.make
CMakeFiles/test7.dir/test_str.c.o: ../test_str.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/jibrankalia/libft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test7.dir/test_str.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test7.dir/test_str.c.o   -c /Users/jibrankalia/libft/test_str.c

CMakeFiles/test7.dir/test_str.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test7.dir/test_str.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/jibrankalia/libft/test_str.c > CMakeFiles/test7.dir/test_str.c.i

CMakeFiles/test7.dir/test_str.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test7.dir/test_str.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/jibrankalia/libft/test_str.c -o CMakeFiles/test7.dir/test_str.c.s

CMakeFiles/test7.dir/test_str.c.o.requires:

.PHONY : CMakeFiles/test7.dir/test_str.c.o.requires

CMakeFiles/test7.dir/test_str.c.o.provides: CMakeFiles/test7.dir/test_str.c.o.requires
	$(MAKE) -f CMakeFiles/test7.dir/build.make CMakeFiles/test7.dir/test_str.c.o.provides.build
.PHONY : CMakeFiles/test7.dir/test_str.c.o.provides

CMakeFiles/test7.dir/test_str.c.o.provides.build: CMakeFiles/test7.dir/test_str.c.o


# Object files for target test7
test7_OBJECTS = \
"CMakeFiles/test7.dir/test_str.c.o"

# External object files for target test7
test7_EXTERNAL_OBJECTS =

test7: CMakeFiles/test7.dir/test_str.c.o
test7: CMakeFiles/test7.dir/build.make
test7: liblibft.a
test7: CMakeFiles/test7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/jibrankalia/libft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test7.dir/build: test7

.PHONY : CMakeFiles/test7.dir/build

CMakeFiles/test7.dir/requires: CMakeFiles/test7.dir/test_str.c.o.requires

.PHONY : CMakeFiles/test7.dir/requires

CMakeFiles/test7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test7.dir/clean

CMakeFiles/test7.dir/depend:
	cd /Users/jibrankalia/libft/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jibrankalia/libft /Users/jibrankalia/libft /Users/jibrankalia/libft/cmake-build-debug /Users/jibrankalia/libft/cmake-build-debug /Users/jibrankalia/libft/cmake-build-debug/CMakeFiles/test7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test7.dir/depend

