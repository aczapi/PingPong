# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build

# Include any dependencies generated for this target.
include CMakeFiles/PingPong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PingPong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PingPong.dir/flags.make

CMakeFiles/PingPong.dir/main.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PingPong.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/main.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/main.cpp

CMakeFiles/PingPong.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/main.cpp > CMakeFiles/PingPong.dir/main.cpp.i

CMakeFiles/PingPong.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/main.cpp -o CMakeFiles/PingPong.dir/main.cpp.s

CMakeFiles/PingPong.dir/game.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PingPong.dir/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/game.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/game.cpp

CMakeFiles/PingPong.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/game.cpp > CMakeFiles/PingPong.dir/game.cpp.i

CMakeFiles/PingPong.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/game.cpp -o CMakeFiles/PingPong.dir/game.cpp.s

CMakeFiles/PingPong.dir/mainMenu.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/mainMenu.cpp.o: ../mainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PingPong.dir/mainMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/mainMenu.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/mainMenu.cpp

CMakeFiles/PingPong.dir/mainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/mainMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/mainMenu.cpp > CMakeFiles/PingPong.dir/mainMenu.cpp.i

CMakeFiles/PingPong.dir/mainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/mainMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/mainMenu.cpp -o CMakeFiles/PingPong.dir/mainMenu.cpp.s

CMakeFiles/PingPong.dir/leftPaddle.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/leftPaddle.cpp.o: ../leftPaddle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PingPong.dir/leftPaddle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/leftPaddle.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/leftPaddle.cpp

CMakeFiles/PingPong.dir/leftPaddle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/leftPaddle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/leftPaddle.cpp > CMakeFiles/PingPong.dir/leftPaddle.cpp.i

CMakeFiles/PingPong.dir/leftPaddle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/leftPaddle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/leftPaddle.cpp -o CMakeFiles/PingPong.dir/leftPaddle.cpp.s

CMakeFiles/PingPong.dir/rightPaddle.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/rightPaddle.cpp.o: ../rightPaddle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PingPong.dir/rightPaddle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/rightPaddle.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/rightPaddle.cpp

CMakeFiles/PingPong.dir/rightPaddle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/rightPaddle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/rightPaddle.cpp > CMakeFiles/PingPong.dir/rightPaddle.cpp.i

CMakeFiles/PingPong.dir/rightPaddle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/rightPaddle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/rightPaddle.cpp -o CMakeFiles/PingPong.dir/rightPaddle.cpp.s

CMakeFiles/PingPong.dir/background.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/background.cpp.o: ../background.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PingPong.dir/background.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/background.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/background.cpp

CMakeFiles/PingPong.dir/background.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/background.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/background.cpp > CMakeFiles/PingPong.dir/background.cpp.i

CMakeFiles/PingPong.dir/background.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/background.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/background.cpp -o CMakeFiles/PingPong.dir/background.cpp.s

CMakeFiles/PingPong.dir/ball.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/ball.cpp.o: ../ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PingPong.dir/ball.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/ball.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/ball.cpp

CMakeFiles/PingPong.dir/ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/ball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/ball.cpp > CMakeFiles/PingPong.dir/ball.cpp.i

CMakeFiles/PingPong.dir/ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/ball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/ball.cpp -o CMakeFiles/PingPong.dir/ball.cpp.s

CMakeFiles/PingPong.dir/score.cpp.o: CMakeFiles/PingPong.dir/flags.make
CMakeFiles/PingPong.dir/score.cpp.o: ../score.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PingPong.dir/score.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PingPong.dir/score.cpp.o -c /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/score.cpp

CMakeFiles/PingPong.dir/score.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PingPong.dir/score.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/score.cpp > CMakeFiles/PingPong.dir/score.cpp.i

CMakeFiles/PingPong.dir/score.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PingPong.dir/score.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/score.cpp -o CMakeFiles/PingPong.dir/score.cpp.s

# Object files for target PingPong
PingPong_OBJECTS = \
"CMakeFiles/PingPong.dir/main.cpp.o" \
"CMakeFiles/PingPong.dir/game.cpp.o" \
"CMakeFiles/PingPong.dir/mainMenu.cpp.o" \
"CMakeFiles/PingPong.dir/leftPaddle.cpp.o" \
"CMakeFiles/PingPong.dir/rightPaddle.cpp.o" \
"CMakeFiles/PingPong.dir/background.cpp.o" \
"CMakeFiles/PingPong.dir/ball.cpp.o" \
"CMakeFiles/PingPong.dir/score.cpp.o"

# External object files for target PingPong
PingPong_EXTERNAL_OBJECTS =

PingPong: CMakeFiles/PingPong.dir/main.cpp.o
PingPong: CMakeFiles/PingPong.dir/game.cpp.o
PingPong: CMakeFiles/PingPong.dir/mainMenu.cpp.o
PingPong: CMakeFiles/PingPong.dir/leftPaddle.cpp.o
PingPong: CMakeFiles/PingPong.dir/rightPaddle.cpp.o
PingPong: CMakeFiles/PingPong.dir/background.cpp.o
PingPong: CMakeFiles/PingPong.dir/ball.cpp.o
PingPong: CMakeFiles/PingPong.dir/score.cpp.o
PingPong: CMakeFiles/PingPong.dir/build.make
PingPong: ../SFML-2.5.1/lib/libsfml-graphics.so.2.5.1
PingPong: ../SFML-2.5.1/lib/libsfml-window.so.2.5.1
PingPong: ../SFML-2.5.1/lib/libsfml-audio.so.2.5.1
PingPong: ../SFML-2.5.1/lib/libsfml-system.so.2.5.1
PingPong: CMakeFiles/PingPong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable PingPong"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PingPong.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PingPong.dir/build: PingPong

.PHONY : CMakeFiles/PingPong.dir/build

CMakeFiles/PingPong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PingPong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PingPong.dir/clean

CMakeFiles/PingPong.dir/depend:
	cd /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build /home/aga/Desktop/C++/ProjektPP/PingPong/PingPong_sfml/build/CMakeFiles/PingPong.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PingPong.dir/depend

