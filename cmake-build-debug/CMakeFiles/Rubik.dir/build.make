# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:\CLion\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\emman\Downloads\rubik\Rubik\Rubik

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Rubik.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Rubik.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Rubik.dir/flags.make

CMakeFiles/Rubik.dir/conio.c.obj: CMakeFiles/Rubik.dir/flags.make
CMakeFiles/Rubik.dir/conio.c.obj: ../conio.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Rubik.dir/conio.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Rubik.dir\conio.c.obj -c C:\Users\emman\Downloads\rubik\Rubik\Rubik\conio.c

CMakeFiles/Rubik.dir/conio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rubik.dir/conio.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\emman\Downloads\rubik\Rubik\Rubik\conio.c > CMakeFiles\Rubik.dir\conio.c.i

CMakeFiles/Rubik.dir/conio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rubik.dir/conio.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\emman\Downloads\rubik\Rubik\Rubik\conio.c -o CMakeFiles\Rubik.dir\conio.c.s

CMakeFiles/Rubik.dir/main.c.obj: CMakeFiles/Rubik.dir/flags.make
CMakeFiles/Rubik.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Rubik.dir/main.c.obj"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Rubik.dir\main.c.obj -c C:\Users\emman\Downloads\rubik\Rubik\Rubik\main.c

CMakeFiles/Rubik.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rubik.dir/main.c.i"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\emman\Downloads\rubik\Rubik\Rubik\main.c > CMakeFiles\Rubik.dir\main.c.i

CMakeFiles/Rubik.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rubik.dir/main.c.s"
	D:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\emman\Downloads\rubik\Rubik\Rubik\main.c -o CMakeFiles\Rubik.dir\main.c.s

# Object files for target Rubik
Rubik_OBJECTS = \
"CMakeFiles/Rubik.dir/conio.c.obj" \
"CMakeFiles/Rubik.dir/main.c.obj"

# External object files for target Rubik
Rubik_EXTERNAL_OBJECTS =

Rubik.exe: CMakeFiles/Rubik.dir/conio.c.obj
Rubik.exe: CMakeFiles/Rubik.dir/main.c.obj
Rubik.exe: CMakeFiles/Rubik.dir/build.make
Rubik.exe: CMakeFiles/Rubik.dir/linklibs.rsp
Rubik.exe: CMakeFiles/Rubik.dir/objects1.rsp
Rubik.exe: CMakeFiles/Rubik.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Rubik.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Rubik.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Rubik.dir/build: Rubik.exe

.PHONY : CMakeFiles/Rubik.dir/build

CMakeFiles/Rubik.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Rubik.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Rubik.dir/clean

CMakeFiles/Rubik.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\emman\Downloads\rubik\Rubik\Rubik C:\Users\emman\Downloads\rubik\Rubik\Rubik C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug C:\Users\emman\Downloads\rubik\Rubik\Rubik\cmake-build-debug\CMakeFiles\Rubik.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Rubik.dir/depend

