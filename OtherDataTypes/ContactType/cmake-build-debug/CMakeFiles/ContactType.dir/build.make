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
CMAKE_SOURCE_DIR = "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ContactType.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ContactType.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ContactType.dir/flags.make

CMakeFiles/ContactType.dir/main.cpp.obj: CMakeFiles/ContactType.dir/flags.make
CMakeFiles/ContactType.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ContactType.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ContactType.dir\main.cpp.obj -c "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\main.cpp"

CMakeFiles/ContactType.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ContactType.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\main.cpp" > CMakeFiles\ContactType.dir\main.cpp.i

CMakeFiles/ContactType.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ContactType.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\main.cpp" -o CMakeFiles\ContactType.dir\main.cpp.s

# Object files for target ContactType
ContactType_OBJECTS = \
"CMakeFiles/ContactType.dir/main.cpp.obj"

# External object files for target ContactType
ContactType_EXTERNAL_OBJECTS =

ContactType.exe: CMakeFiles/ContactType.dir/main.cpp.obj
ContactType.exe: CMakeFiles/ContactType.dir/build.make
ContactType.exe: CMakeFiles/ContactType.dir/linklibs.rsp
ContactType.exe: CMakeFiles/ContactType.dir/objects1.rsp
ContactType.exe: CMakeFiles/ContactType.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ContactType.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ContactType.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ContactType.dir/build: ContactType.exe

.PHONY : CMakeFiles/ContactType.dir/build

CMakeFiles/ContactType.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ContactType.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ContactType.dir/clean

CMakeFiles/ContactType.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\cmake-build-debug" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\cmake-build-debug" "C:\Users\Beef Erikson Studios\source\repos\C++\HandsOnC++\OtherDataTypes\ContactType\cmake-build-debug\CMakeFiles\ContactType.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ContactType.dir/depend

