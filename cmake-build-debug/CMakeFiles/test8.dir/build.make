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
CMAKE_SOURCE_DIR = /nfs/2017/j/jkalia/Desktop/libft

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test8.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test8.dir/flags.make

CMakeFiles/test8.dir/test_str2.c.o: CMakeFiles/test8.dir/flags.make
CMakeFiles/test8.dir/test_str2.c.o: ../test_str2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test8.dir/test_str2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test8.dir/test_str2.c.o   -c /nfs/2017/j/jkalia/Desktop/libft/test_str2.c

CMakeFiles/test8.dir/test_str2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test8.dir/test_str2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2017/j/jkalia/Desktop/libft/test_str2.c > CMakeFiles/test8.dir/test_str2.c.i

CMakeFiles/test8.dir/test_str2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test8.dir/test_str2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2017/j/jkalia/Desktop/libft/test_str2.c -o CMakeFiles/test8.dir/test_str2.c.s

CMakeFiles/test8.dir/test_str2.c.o.requires:

.PHONY : CMakeFiles/test8.dir/test_str2.c.o.requires

CMakeFiles/test8.dir/test_str2.c.o.provides: CMakeFiles/test8.dir/test_str2.c.o.requires
	$(MAKE) -f CMakeFiles/test8.dir/build.make CMakeFiles/test8.dir/test_str2.c.o.provides.build
.PHONY : CMakeFiles/test8.dir/test_str2.c.o.provides

CMakeFiles/test8.dir/test_str2.c.o.provides.build: CMakeFiles/test8.dir/test_str2.c.o


# Object files for target test8
test8_OBJECTS = \
"CMakeFiles/test8.dir/test_str2.c.o"

# External object files for target test8
test8_EXTERNAL_OBJECTS =

test8: CMakeFiles/test8.dir/test_str2.c.o
test8: CMakeFiles/test8.dir/build.make
test8: liblibft.a
test8: CMakeFiles/test8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable test8"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test8.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test8.dir/build: test8

.PHONY : CMakeFiles/test8.dir/build

CMakeFiles/test8.dir/requires: CMakeFiles/test8.dir/test_str2.c.o.requires

.PHONY : CMakeFiles/test8.dir/requires

CMakeFiles/test8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test8.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test8.dir/clean

CMakeFiles/test8.dir/depend:
	cd /nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2017/j/jkalia/Desktop/libft /nfs/2017/j/jkalia/Desktop/libft /nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug /nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug /nfs/2017/j/jkalia/Desktop/libft/cmake-build-debug/CMakeFiles/test8.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test8.dir/depend
