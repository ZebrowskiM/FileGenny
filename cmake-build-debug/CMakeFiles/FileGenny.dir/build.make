# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/Marek/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Marek/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FileGenny.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FileGenny.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FileGenny.dir/flags.make

CMakeFiles/FileGenny.dir/main.c.o: CMakeFiles/FileGenny.dir/flags.make
CMakeFiles/FileGenny.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/FileGenny.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FileGenny.dir/main.c.o   -c /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/main.c

CMakeFiles/FileGenny.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FileGenny.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/main.c > CMakeFiles/FileGenny.dir/main.c.i

CMakeFiles/FileGenny.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FileGenny.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/main.c -o CMakeFiles/FileGenny.dir/main.c.s

CMakeFiles/FileGenny.dir/GenerateDummyText.c.o: CMakeFiles/FileGenny.dir/flags.make
CMakeFiles/FileGenny.dir/GenerateDummyText.c.o: ../GenerateDummyText.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/FileGenny.dir/GenerateDummyText.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FileGenny.dir/GenerateDummyText.c.o   -c /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/GenerateDummyText.c

CMakeFiles/FileGenny.dir/GenerateDummyText.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FileGenny.dir/GenerateDummyText.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/GenerateDummyText.c > CMakeFiles/FileGenny.dir/GenerateDummyText.c.i

CMakeFiles/FileGenny.dir/GenerateDummyText.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FileGenny.dir/GenerateDummyText.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/GenerateDummyText.c -o CMakeFiles/FileGenny.dir/GenerateDummyText.c.s

CMakeFiles/FileGenny.dir/FileFactory.c.o: CMakeFiles/FileGenny.dir/flags.make
CMakeFiles/FileGenny.dir/FileFactory.c.o: ../FileFactory.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/FileGenny.dir/FileFactory.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/FileGenny.dir/FileFactory.c.o   -c /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/FileFactory.c

CMakeFiles/FileGenny.dir/FileFactory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/FileGenny.dir/FileFactory.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/FileFactory.c > CMakeFiles/FileGenny.dir/FileFactory.c.i

CMakeFiles/FileGenny.dir/FileFactory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/FileGenny.dir/FileFactory.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/FileFactory.c -o CMakeFiles/FileGenny.dir/FileFactory.c.s

# Object files for target FileGenny
FileGenny_OBJECTS = \
"CMakeFiles/FileGenny.dir/main.c.o" \
"CMakeFiles/FileGenny.dir/GenerateDummyText.c.o" \
"CMakeFiles/FileGenny.dir/FileFactory.c.o"

# External object files for target FileGenny
FileGenny_EXTERNAL_OBJECTS =

FileGenny.exe: CMakeFiles/FileGenny.dir/main.c.o
FileGenny.exe: CMakeFiles/FileGenny.dir/GenerateDummyText.c.o
FileGenny.exe: CMakeFiles/FileGenny.dir/FileFactory.c.o
FileGenny.exe: CMakeFiles/FileGenny.dir/build.make
FileGenny.exe: CMakeFiles/FileGenny.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable FileGenny.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FileGenny.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FileGenny.dir/build: FileGenny.exe

.PHONY : CMakeFiles/FileGenny.dir/build

CMakeFiles/FileGenny.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FileGenny.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FileGenny.dir/clean

CMakeFiles/FileGenny.dir/depend:
	cd /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug /cygdrive/c/Users/Marek/Desktop/IHateGit/FileGenny/cmake-build-debug/CMakeFiles/FileGenny.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FileGenny.dir/depend

