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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Programming\opengl-template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Programming\opengl-template\build

# Include any dependencies generated for this target.
include main/CMakeFiles/openglTemplate.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include main/CMakeFiles/openglTemplate.dir/compiler_depend.make

# Include the progress variables for this target.
include main/CMakeFiles/openglTemplate.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/openglTemplate.dir/flags.make

main/CMakeFiles/openglTemplate.dir/main.cpp.obj: main/CMakeFiles/openglTemplate.dir/flags.make
main/CMakeFiles/openglTemplate.dir/main.cpp.obj: main/CMakeFiles/openglTemplate.dir/includes_CXX.rsp
main/CMakeFiles/openglTemplate.dir/main.cpp.obj: C:/Programming/opengl-template/main/main.cpp
main/CMakeFiles/openglTemplate.dir/main.cpp.obj: main/CMakeFiles/openglTemplate.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Programming\opengl-template\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main/CMakeFiles/openglTemplate.dir/main.cpp.obj"
	cd /d C:\Programming\opengl-template\build\main && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT main/CMakeFiles/openglTemplate.dir/main.cpp.obj -MF CMakeFiles\openglTemplate.dir\main.cpp.obj.d -o CMakeFiles\openglTemplate.dir\main.cpp.obj -c C:\Programming\opengl-template\main\main.cpp

main/CMakeFiles/openglTemplate.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/openglTemplate.dir/main.cpp.i"
	cd /d C:\Programming\opengl-template\build\main && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Programming\opengl-template\main\main.cpp > CMakeFiles\openglTemplate.dir\main.cpp.i

main/CMakeFiles/openglTemplate.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/openglTemplate.dir/main.cpp.s"
	cd /d C:\Programming\opengl-template\build\main && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Programming\opengl-template\main\main.cpp -o CMakeFiles\openglTemplate.dir\main.cpp.s

# Object files for target openglTemplate
openglTemplate_OBJECTS = \
"CMakeFiles/openglTemplate.dir/main.cpp.obj"

# External object files for target openglTemplate
openglTemplate_EXTERNAL_OBJECTS =

main/openglTemplate.exe: main/CMakeFiles/openglTemplate.dir/main.cpp.obj
main/openglTemplate.exe: main/CMakeFiles/openglTemplate.dir/build.make
main/openglTemplate.exe: game/libgame.a
main/openglTemplate.exe: main/CMakeFiles/openglTemplate.dir/linklibs.rsp
main/openglTemplate.exe: main/CMakeFiles/openglTemplate.dir/objects1.rsp
main/openglTemplate.exe: main/CMakeFiles/openglTemplate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Programming\opengl-template\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable openglTemplate.exe"
	cd /d C:\Programming\opengl-template\build\main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\openglTemplate.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/openglTemplate.dir/build: main/openglTemplate.exe
.PHONY : main/CMakeFiles/openglTemplate.dir/build

main/CMakeFiles/openglTemplate.dir/clean:
	cd /d C:\Programming\opengl-template\build\main && $(CMAKE_COMMAND) -P CMakeFiles\openglTemplate.dir\cmake_clean.cmake
.PHONY : main/CMakeFiles/openglTemplate.dir/clean

main/CMakeFiles/openglTemplate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Programming\opengl-template C:\Programming\opengl-template\main C:\Programming\opengl-template\build C:\Programming\opengl-template\build\main C:\Programming\opengl-template\build\main\CMakeFiles\openglTemplate.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/openglTemplate.dir/depend

