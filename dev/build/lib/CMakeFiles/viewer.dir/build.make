# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pcj/p2/dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pcj/p2/dev/build

# Include any dependencies generated for this target.
include lib/CMakeFiles/viewer.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/viewer.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/viewer.dir/flags.make

lib/CMakeFiles/viewer.dir/viewer.cpp.o: lib/CMakeFiles/viewer.dir/flags.make
lib/CMakeFiles/viewer.dir/viewer.cpp.o: ../lib/viewer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pcj/p2/dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/viewer.dir/viewer.cpp.o"
	cd /home/pcj/p2/dev/build/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/viewer.dir/viewer.cpp.o -c /home/pcj/p2/dev/lib/viewer.cpp

lib/CMakeFiles/viewer.dir/viewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/viewer.dir/viewer.cpp.i"
	cd /home/pcj/p2/dev/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pcj/p2/dev/lib/viewer.cpp > CMakeFiles/viewer.dir/viewer.cpp.i

lib/CMakeFiles/viewer.dir/viewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/viewer.dir/viewer.cpp.s"
	cd /home/pcj/p2/dev/build/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pcj/p2/dev/lib/viewer.cpp -o CMakeFiles/viewer.dir/viewer.cpp.s

lib/CMakeFiles/viewer.dir/viewer.cpp.o.requires:

.PHONY : lib/CMakeFiles/viewer.dir/viewer.cpp.o.requires

lib/CMakeFiles/viewer.dir/viewer.cpp.o.provides: lib/CMakeFiles/viewer.dir/viewer.cpp.o.requires
	$(MAKE) -f lib/CMakeFiles/viewer.dir/build.make lib/CMakeFiles/viewer.dir/viewer.cpp.o.provides.build
.PHONY : lib/CMakeFiles/viewer.dir/viewer.cpp.o.provides

lib/CMakeFiles/viewer.dir/viewer.cpp.o.provides.build: lib/CMakeFiles/viewer.dir/viewer.cpp.o


# Object files for target viewer
viewer_OBJECTS = \
"CMakeFiles/viewer.dir/viewer.cpp.o"

# External object files for target viewer
viewer_EXTERNAL_OBJECTS =

lib/libviewer.a: lib/CMakeFiles/viewer.dir/viewer.cpp.o
lib/libviewer.a: lib/CMakeFiles/viewer.dir/build.make
lib/libviewer.a: lib/CMakeFiles/viewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pcj/p2/dev/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libviewer.a"
	cd /home/pcj/p2/dev/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/viewer.dir/cmake_clean_target.cmake
	cd /home/pcj/p2/dev/build/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/viewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/viewer.dir/build: lib/libviewer.a

.PHONY : lib/CMakeFiles/viewer.dir/build

lib/CMakeFiles/viewer.dir/requires: lib/CMakeFiles/viewer.dir/viewer.cpp.o.requires

.PHONY : lib/CMakeFiles/viewer.dir/requires

lib/CMakeFiles/viewer.dir/clean:
	cd /home/pcj/p2/dev/build/lib && $(CMAKE_COMMAND) -P CMakeFiles/viewer.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/viewer.dir/clean

lib/CMakeFiles/viewer.dir/depend:
	cd /home/pcj/p2/dev/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pcj/p2/dev /home/pcj/p2/dev/lib /home/pcj/p2/dev/build /home/pcj/p2/dev/build/lib /home/pcj/p2/dev/build/lib/CMakeFiles/viewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/viewer.dir/depend

