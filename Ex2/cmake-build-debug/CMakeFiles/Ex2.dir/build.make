# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /opt/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brett/CLionProjects/Ex2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brett/CLionProjects/Ex2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Ex2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ex2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ex2.dir/flags.make

CMakeFiles/Ex2.dir/main.cpp.o: CMakeFiles/Ex2.dir/flags.make
CMakeFiles/Ex2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brett/CLionProjects/Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ex2.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Ex2.dir/main.cpp.o -c /home/brett/CLionProjects/Ex2/main.cpp

CMakeFiles/Ex2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ex2.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brett/CLionProjects/Ex2/main.cpp > CMakeFiles/Ex2.dir/main.cpp.i

CMakeFiles/Ex2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ex2.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brett/CLionProjects/Ex2/main.cpp -o CMakeFiles/Ex2.dir/main.cpp.s

CMakeFiles/Ex2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Ex2.dir/main.cpp.o.requires

CMakeFiles/Ex2.dir/main.cpp.o.provides: CMakeFiles/Ex2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Ex2.dir/build.make CMakeFiles/Ex2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Ex2.dir/main.cpp.o.provides

CMakeFiles/Ex2.dir/main.cpp.o.provides.build: CMakeFiles/Ex2.dir/main.cpp.o


# Object files for target Ex2
Ex2_OBJECTS = \
"CMakeFiles/Ex2.dir/main.cpp.o"

# External object files for target Ex2
Ex2_EXTERNAL_OBJECTS =

Ex2: CMakeFiles/Ex2.dir/main.cpp.o
Ex2: CMakeFiles/Ex2.dir/build.make
Ex2: CMakeFiles/Ex2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brett/CLionProjects/Ex2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Ex2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Ex2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ex2.dir/build: Ex2

.PHONY : CMakeFiles/Ex2.dir/build

CMakeFiles/Ex2.dir/requires: CMakeFiles/Ex2.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Ex2.dir/requires

CMakeFiles/Ex2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Ex2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Ex2.dir/clean

CMakeFiles/Ex2.dir/depend:
	cd /home/brett/CLionProjects/Ex2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brett/CLionProjects/Ex2 /home/brett/CLionProjects/Ex2 /home/brett/CLionProjects/Ex2/cmake-build-debug /home/brett/CLionProjects/Ex2/cmake-build-debug /home/brett/CLionProjects/Ex2/cmake-build-debug/CMakeFiles/Ex2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Ex2.dir/depend

