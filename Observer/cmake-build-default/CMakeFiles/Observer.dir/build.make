# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /opt/clion-2018.2.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2018.2.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aykull/CLionProjects/Observer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aykull/CLionProjects/Observer/cmake-build-default

# Include any dependencies generated for this target.
include CMakeFiles/Observer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Observer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Observer.dir/flags.make

CMakeFiles/Observer.dir/main.cpp.o: CMakeFiles/Observer.dir/flags.make
CMakeFiles/Observer.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aykull/CLionProjects/Observer/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Observer.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Observer.dir/main.cpp.o -c /home/aykull/CLionProjects/Observer/main.cpp

CMakeFiles/Observer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observer.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aykull/CLionProjects/Observer/main.cpp > CMakeFiles/Observer.dir/main.cpp.i

CMakeFiles/Observer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observer.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aykull/CLionProjects/Observer/main.cpp -o CMakeFiles/Observer.dir/main.cpp.s

CMakeFiles/Observer.dir/ASubject.cpp.o: CMakeFiles/Observer.dir/flags.make
CMakeFiles/Observer.dir/ASubject.cpp.o: ../ASubject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aykull/CLionProjects/Observer/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Observer.dir/ASubject.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Observer.dir/ASubject.cpp.o -c /home/aykull/CLionProjects/Observer/ASubject.cpp

CMakeFiles/Observer.dir/ASubject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observer.dir/ASubject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aykull/CLionProjects/Observer/ASubject.cpp > CMakeFiles/Observer.dir/ASubject.cpp.i

CMakeFiles/Observer.dir/ASubject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observer.dir/ASubject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aykull/CLionProjects/Observer/ASubject.cpp -o CMakeFiles/Observer.dir/ASubject.cpp.s

CMakeFiles/Observer.dir/DummyProduct.cpp.o: CMakeFiles/Observer.dir/flags.make
CMakeFiles/Observer.dir/DummyProduct.cpp.o: ../DummyProduct.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aykull/CLionProjects/Observer/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Observer.dir/DummyProduct.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Observer.dir/DummyProduct.cpp.o -c /home/aykull/CLionProjects/Observer/DummyProduct.cpp

CMakeFiles/Observer.dir/DummyProduct.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observer.dir/DummyProduct.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aykull/CLionProjects/Observer/DummyProduct.cpp > CMakeFiles/Observer.dir/DummyProduct.cpp.i

CMakeFiles/Observer.dir/DummyProduct.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observer.dir/DummyProduct.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aykull/CLionProjects/Observer/DummyProduct.cpp -o CMakeFiles/Observer.dir/DummyProduct.cpp.s

CMakeFiles/Observer.dir/SocialMedia.cpp.o: CMakeFiles/Observer.dir/flags.make
CMakeFiles/Observer.dir/SocialMedia.cpp.o: ../SocialMedia.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aykull/CLionProjects/Observer/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Observer.dir/SocialMedia.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Observer.dir/SocialMedia.cpp.o -c /home/aykull/CLionProjects/Observer/SocialMedia.cpp

CMakeFiles/Observer.dir/SocialMedia.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Observer.dir/SocialMedia.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aykull/CLionProjects/Observer/SocialMedia.cpp > CMakeFiles/Observer.dir/SocialMedia.cpp.i

CMakeFiles/Observer.dir/SocialMedia.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Observer.dir/SocialMedia.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aykull/CLionProjects/Observer/SocialMedia.cpp -o CMakeFiles/Observer.dir/SocialMedia.cpp.s

# Object files for target Observer
Observer_OBJECTS = \
"CMakeFiles/Observer.dir/main.cpp.o" \
"CMakeFiles/Observer.dir/ASubject.cpp.o" \
"CMakeFiles/Observer.dir/DummyProduct.cpp.o" \
"CMakeFiles/Observer.dir/SocialMedia.cpp.o"

# External object files for target Observer
Observer_EXTERNAL_OBJECTS =

Observer: CMakeFiles/Observer.dir/main.cpp.o
Observer: CMakeFiles/Observer.dir/ASubject.cpp.o
Observer: CMakeFiles/Observer.dir/DummyProduct.cpp.o
Observer: CMakeFiles/Observer.dir/SocialMedia.cpp.o
Observer: CMakeFiles/Observer.dir/build.make
Observer: CMakeFiles/Observer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aykull/CLionProjects/Observer/cmake-build-default/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Observer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Observer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Observer.dir/build: Observer

.PHONY : CMakeFiles/Observer.dir/build

CMakeFiles/Observer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Observer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Observer.dir/clean

CMakeFiles/Observer.dir/depend:
	cd /home/aykull/CLionProjects/Observer/cmake-build-default && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aykull/CLionProjects/Observer /home/aykull/CLionProjects/Observer /home/aykull/CLionProjects/Observer/cmake-build-default /home/aykull/CLionProjects/Observer/cmake-build-default /home/aykull/CLionProjects/Observer/cmake-build-default/CMakeFiles/Observer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Observer.dir/depend

