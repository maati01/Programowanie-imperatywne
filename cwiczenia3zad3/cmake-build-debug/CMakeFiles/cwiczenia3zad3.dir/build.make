# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\clion\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\clion\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\programowanie imperatywne\cwiczenia3zad3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\programowanie imperatywne\cwiczenia3zad3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cwiczenia3zad3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cwiczenia3zad3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cwiczenia3zad3.dir/flags.make

CMakeFiles/cwiczenia3zad3.dir/main.c.obj: CMakeFiles/cwiczenia3zad3.dir/flags.make
CMakeFiles/cwiczenia3zad3.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\programowanie imperatywne\cwiczenia3zad3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cwiczenia3zad3.dir/main.c.obj"
	D:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cwiczenia3zad3.dir\main.c.obj   -c "D:\programowanie imperatywne\cwiczenia3zad3\main.c"

CMakeFiles/cwiczenia3zad3.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/cwiczenia3zad3.dir/main.c.i"
	D:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\programowanie imperatywne\cwiczenia3zad3\main.c" > CMakeFiles\cwiczenia3zad3.dir\main.c.i

CMakeFiles/cwiczenia3zad3.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/cwiczenia3zad3.dir/main.c.s"
	D:\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\programowanie imperatywne\cwiczenia3zad3\main.c" -o CMakeFiles\cwiczenia3zad3.dir\main.c.s

# Object files for target cwiczenia3zad3
cwiczenia3zad3_OBJECTS = \
"CMakeFiles/cwiczenia3zad3.dir/main.c.obj"

# External object files for target cwiczenia3zad3
cwiczenia3zad3_EXTERNAL_OBJECTS =

cwiczenia3zad3.exe: CMakeFiles/cwiczenia3zad3.dir/main.c.obj
cwiczenia3zad3.exe: CMakeFiles/cwiczenia3zad3.dir/build.make
cwiczenia3zad3.exe: CMakeFiles/cwiczenia3zad3.dir/linklibs.rsp
cwiczenia3zad3.exe: CMakeFiles/cwiczenia3zad3.dir/objects1.rsp
cwiczenia3zad3.exe: CMakeFiles/cwiczenia3zad3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\programowanie imperatywne\cwiczenia3zad3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cwiczenia3zad3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cwiczenia3zad3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cwiczenia3zad3.dir/build: cwiczenia3zad3.exe

.PHONY : CMakeFiles/cwiczenia3zad3.dir/build

CMakeFiles/cwiczenia3zad3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cwiczenia3zad3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cwiczenia3zad3.dir/clean

CMakeFiles/cwiczenia3zad3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\programowanie imperatywne\cwiczenia3zad3" "D:\programowanie imperatywne\cwiczenia3zad3" "D:\programowanie imperatywne\cwiczenia3zad3\cmake-build-debug" "D:\programowanie imperatywne\cwiczenia3zad3\cmake-build-debug" "D:\programowanie imperatywne\cwiczenia3zad3\cmake-build-debug\CMakeFiles\cwiczenia3zad3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cwiczenia3zad3.dir/depend

