# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Qt\Tools\CMake_64\bin\cmake.exe

# The command to remove a file.
RM = C:\Qt\Tools\CMake_64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = U:\projekt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = U:\projekt\build

# Include any dependencies generated for this target.
include bin/CMakeFiles/mymain.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include bin/CMakeFiles/mymain.dir/compiler_depend.make

# Include the progress variables for this target.
include bin/CMakeFiles/mymain.dir/progress.make

# Include the compile flags for this target's objects.
include bin/CMakeFiles/mymain.dir/flags.make

bin/CMakeFiles/mymain.dir/main.cpp.obj: bin/CMakeFiles/mymain.dir/flags.make
bin/CMakeFiles/mymain.dir/main.cpp.obj: bin/CMakeFiles/mymain.dir/includes_CXX.rsp
bin/CMakeFiles/mymain.dir/main.cpp.obj: U:/projekt/bin/main.cpp
bin/CMakeFiles/mymain.dir/main.cpp.obj: bin/CMakeFiles/mymain.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=U:\projekt\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object bin/CMakeFiles/mymain.dir/main.cpp.obj"
	cd /d U:\projekt\build\bin && C:\Qt\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT bin/CMakeFiles/mymain.dir/main.cpp.obj -MF CMakeFiles\mymain.dir\main.cpp.obj.d -o CMakeFiles\mymain.dir\main.cpp.obj -c U:\projekt\bin\main.cpp

bin/CMakeFiles/mymain.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mymain.dir/main.cpp.i"
	cd /d U:\projekt\build\bin && C:\Qt\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E U:\projekt\bin\main.cpp > CMakeFiles\mymain.dir\main.cpp.i

bin/CMakeFiles/mymain.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mymain.dir/main.cpp.s"
	cd /d U:\projekt\build\bin && C:\Qt\Tools\mingw1120_64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S U:\projekt\bin\main.cpp -o CMakeFiles\mymain.dir\main.cpp.s

# Object files for target mymain
mymain_OBJECTS = \
"CMakeFiles/mymain.dir/main.cpp.obj"

# External object files for target mymain
mymain_EXTERNAL_OBJECTS =

bin/mymain.exe: bin/CMakeFiles/mymain.dir/main.cpp.obj
bin/mymain.exe: bin/CMakeFiles/mymain.dir/build.make
bin/mymain.exe: src/adder/libadder.a
bin/mymain.exe: bin/CMakeFiles/mymain.dir/linklibs.rsp
bin/mymain.exe: bin/CMakeFiles/mymain.dir/objects1.rsp
bin/mymain.exe: bin/CMakeFiles/mymain.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=U:\projekt\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mymain.exe"
	cd /d U:\projekt\build\bin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mymain.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
bin/CMakeFiles/mymain.dir/build: bin/mymain.exe
.PHONY : bin/CMakeFiles/mymain.dir/build

bin/CMakeFiles/mymain.dir/clean:
	cd /d U:\projekt\build\bin && $(CMAKE_COMMAND) -P CMakeFiles\mymain.dir\cmake_clean.cmake
.PHONY : bin/CMakeFiles/mymain.dir/clean

bin/CMakeFiles/mymain.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" U:\projekt U:\projekt\bin U:\projekt\build U:\projekt\build\bin U:\projekt\build\bin\CMakeFiles\mymain.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : bin/CMakeFiles/mymain.dir/depend

