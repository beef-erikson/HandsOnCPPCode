# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Users\Beef Erikson Studios\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Beef Erikson Studios\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6494.38\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Counting01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Counting01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Counting01.dir/flags.make

CMakeFiles/Counting01.dir/main.cpp.obj: CMakeFiles/Counting01.dir/flags.make
CMakeFiles/Counting01.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Counting01.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Counting01.dir\main.cpp.obj -c "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\main.cpp"

CMakeFiles/Counting01.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Counting01.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\main.cpp" > CMakeFiles\Counting01.dir\main.cpp.i

CMakeFiles/Counting01.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Counting01.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\main.cpp" -o CMakeFiles\Counting01.dir\main.cpp.s

# Object files for target Counting01
Counting01_OBJECTS = \
"CMakeFiles/Counting01.dir/main.cpp.obj"

# External object files for target Counting01
Counting01_EXTERNAL_OBJECTS =

Counting01.exe: CMakeFiles/Counting01.dir/main.cpp.obj
Counting01.exe: CMakeFiles/Counting01.dir/build.make
Counting01.exe: CMakeFiles/Counting01.dir/linklibs.rsp
Counting01.exe: CMakeFiles/Counting01.dir/objects1.rsp
Counting01.exe: CMakeFiles/Counting01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Counting01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Counting01.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Counting01.dir/build: Counting01.exe

.PHONY : CMakeFiles/Counting01.dir/build

CMakeFiles/Counting01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Counting01.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Counting01.dir/clean

CMakeFiles/Counting01.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\cmake-build-debug" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\cmake-build-debug" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\Iteration\Counting01\cmake-build-debug\CMakeFiles\Counting01.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Counting01.dir/depend

