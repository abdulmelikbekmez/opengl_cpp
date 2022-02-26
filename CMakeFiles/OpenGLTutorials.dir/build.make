# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/abdulmelik/Projects/opengl/C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/abdulmelik/Projects/opengl/C

# Include any dependencies generated for this target.
include CMakeFiles/OpenGLTutorials.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OpenGLTutorials.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OpenGLTutorials.dir/flags.make

CMakeFiles/OpenGLTutorials.dir/src/glad.c.o: CMakeFiles/OpenGLTutorials.dir/flags.make
CMakeFiles/OpenGLTutorials.dir/src/glad.c.o: src/glad.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdulmelik/Projects/opengl/C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/OpenGLTutorials.dir/src/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/OpenGLTutorials.dir/src/glad.c.o -c /home/abdulmelik/Projects/opengl/C/src/glad.c

CMakeFiles/OpenGLTutorials.dir/src/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/OpenGLTutorials.dir/src/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/abdulmelik/Projects/opengl/C/src/glad.c > CMakeFiles/OpenGLTutorials.dir/src/glad.c.i

CMakeFiles/OpenGLTutorials.dir/src/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/OpenGLTutorials.dir/src/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/abdulmelik/Projects/opengl/C/src/glad.c -o CMakeFiles/OpenGLTutorials.dir/src/glad.c.s

CMakeFiles/OpenGLTutorials.dir/src/main.cpp.o: CMakeFiles/OpenGLTutorials.dir/flags.make
CMakeFiles/OpenGLTutorials.dir/src/main.cpp.o: src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdulmelik/Projects/opengl/C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OpenGLTutorials.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorials.dir/src/main.cpp.o -c /home/abdulmelik/Projects/opengl/C/src/main.cpp

CMakeFiles/OpenGLTutorials.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorials.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdulmelik/Projects/opengl/C/src/main.cpp > CMakeFiles/OpenGLTutorials.dir/src/main.cpp.i

CMakeFiles/OpenGLTutorials.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorials.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdulmelik/Projects/opengl/C/src/main.cpp -o CMakeFiles/OpenGLTutorials.dir/src/main.cpp.s

CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.o: CMakeFiles/OpenGLTutorials.dir/flags.make
CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.o: src/shader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdulmelik/Projects/opengl/C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.o -c /home/abdulmelik/Projects/opengl/C/src/shader.cpp

CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdulmelik/Projects/opengl/C/src/shader.cpp > CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.i

CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdulmelik/Projects/opengl/C/src/shader.cpp -o CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.s

CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.o: CMakeFiles/OpenGLTutorials.dir/flags.make
CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.o: src/camera.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdulmelik/Projects/opengl/C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.o -c /home/abdulmelik/Projects/opengl/C/src/camera.cpp

CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdulmelik/Projects/opengl/C/src/camera.cpp > CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.i

CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdulmelik/Projects/opengl/C/src/camera.cpp -o CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.s

CMakeFiles/OpenGLTutorials.dir/src/box.cpp.o: CMakeFiles/OpenGLTutorials.dir/flags.make
CMakeFiles/OpenGLTutorials.dir/src/box.cpp.o: src/box.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/abdulmelik/Projects/opengl/C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/OpenGLTutorials.dir/src/box.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OpenGLTutorials.dir/src/box.cpp.o -c /home/abdulmelik/Projects/opengl/C/src/box.cpp

CMakeFiles/OpenGLTutorials.dir/src/box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OpenGLTutorials.dir/src/box.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/abdulmelik/Projects/opengl/C/src/box.cpp > CMakeFiles/OpenGLTutorials.dir/src/box.cpp.i

CMakeFiles/OpenGLTutorials.dir/src/box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OpenGLTutorials.dir/src/box.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/abdulmelik/Projects/opengl/C/src/box.cpp -o CMakeFiles/OpenGLTutorials.dir/src/box.cpp.s

# Object files for target OpenGLTutorials
OpenGLTutorials_OBJECTS = \
"CMakeFiles/OpenGLTutorials.dir/src/glad.c.o" \
"CMakeFiles/OpenGLTutorials.dir/src/main.cpp.o" \
"CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.o" \
"CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.o" \
"CMakeFiles/OpenGLTutorials.dir/src/box.cpp.o"

# External object files for target OpenGLTutorials
OpenGLTutorials_EXTERNAL_OBJECTS =

OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/src/glad.c.o
OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/src/main.cpp.o
OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/src/shader.cpp.o
OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/src/camera.cpp.o
OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/src/box.cpp.o
OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/build.make
OpenGLTutorials: /usr/local/lib/libglfw3.a
OpenGLTutorials: /usr/lib/x86_64-linux-gnu/librt.so
OpenGLTutorials: /usr/lib/x86_64-linux-gnu/libm.so
OpenGLTutorials: /usr/lib/x86_64-linux-gnu/libX11.so
OpenGLTutorials: CMakeFiles/OpenGLTutorials.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/abdulmelik/Projects/opengl/C/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable OpenGLTutorials"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OpenGLTutorials.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OpenGLTutorials.dir/build: OpenGLTutorials

.PHONY : CMakeFiles/OpenGLTutorials.dir/build

CMakeFiles/OpenGLTutorials.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OpenGLTutorials.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OpenGLTutorials.dir/clean

CMakeFiles/OpenGLTutorials.dir/depend:
	cd /home/abdulmelik/Projects/opengl/C && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/abdulmelik/Projects/opengl/C /home/abdulmelik/Projects/opengl/C /home/abdulmelik/Projects/opengl/C /home/abdulmelik/Projects/opengl/C /home/abdulmelik/Projects/opengl/C/CMakeFiles/OpenGLTutorials.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OpenGLTutorials.dir/depend

