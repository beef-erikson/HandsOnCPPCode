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
CMAKE_SOURCE_DIR = "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/UsingPointers.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/UsingPointers.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/UsingPointers.dir/flags.make

CMakeFiles/UsingPointers.dir/main.cpp.obj: CMakeFiles/UsingPointers.dir/flags.make
CMakeFiles/UsingPointers.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/UsingPointers.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\UsingPointers.dir\main.cpp.obj -c "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\main.cpp"

CMakeFiles/UsingPointers.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/UsingPointers.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\main.cpp" > CMakeFiles\UsingPointers.dir\main.cpp.i

CMakeFiles/UsingPointers.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/UsingPointers.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\main.cpp" -o CMakeFiles\UsingPointers.dir\main.cpp.s

# Object files for target UsingPointers
UsingPointers_OBJECTS = \
"CMakeFiles/UsingPointers.dir/main.cpp.obj"

# External object files for target UsingPointers
UsingPointers_EXTERNAL_OBJECTS =

UsingPointers.exe: CMakeFiles/UsingPointers.dir/main.cpp.obj
UsingPointers.exe: CMakeFiles/UsingPointers.dir/build.make
UsingPointers.exe: CMakeFiles/UsingPointers.dir/linklibs.rsp
UsingPointers.exe: CMakeFiles/UsingPointers.dir/objects1.rsp
UsingPointers.exe: CMakeFiles/UsingPointers.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable UsingPointers.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\UsingPointers.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/UsingPointers.dir/build: UsingPointers.exe

.PHONY : CMakeFiles/UsingPointers.dir/build

CMakeFiles/UsingPointers.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\UsingPointers.dir\cmake_clean.cmake
.PHONY : CMakeFiles/UsingPointers.dir/clean

CMakeFiles/UsingPointers.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\cmake-build-debug" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\cmake-build-debug" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\PointersAndReferences\UsingPointers\cmake-build-debug\CMakeFiles\UsingPointers.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UsingPointers.dir/depend

