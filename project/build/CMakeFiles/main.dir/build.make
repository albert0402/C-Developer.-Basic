# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.29.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.29.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/main.cpp
CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/main.cpp.o -MF CMakeFiles/main.dir/main.cpp.o.d -o CMakeFiles/main.dir/main.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/AstroInertialModeResultMatrix.cpp
CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o -MF CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o.d -o CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/AstroInertialModeResultMatrix.cpp

CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/AstroInertialModeResultMatrix.cpp > CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.i

CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/AstroInertialModeResultMatrix.cpp -o CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.s

CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/CoorectionModeResultMatrix.cpp
CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o -MF CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o.d -o CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/CoorectionModeResultMatrix.cpp

CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/CoorectionModeResultMatrix.cpp > CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.i

CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/CoorectionModeResultMatrix.cpp -o CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.s

CMakeFiles/main.dir/calculations/src/Result.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/calculations/src/Result.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Result.cpp
CMakeFiles/main.dir/calculations/src/Result.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/calculations/src/Result.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/calculations/src/Result.cpp.o -MF CMakeFiles/main.dir/calculations/src/Result.cpp.o.d -o CMakeFiles/main.dir/calculations/src/Result.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Result.cpp

CMakeFiles/main.dir/calculations/src/Result.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/calculations/src/Result.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Result.cpp > CMakeFiles/main.dir/calculations/src/Result.cpp.i

CMakeFiles/main.dir/calculations/src/Result.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/calculations/src/Result.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Result.cpp -o CMakeFiles/main.dir/calculations/src/Result.cpp.s

CMakeFiles/main.dir/calculations/src/Service.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/calculations/src/Service.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Service.cpp
CMakeFiles/main.dir/calculations/src/Service.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/calculations/src/Service.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/calculations/src/Service.cpp.o -MF CMakeFiles/main.dir/calculations/src/Service.cpp.o.d -o CMakeFiles/main.dir/calculations/src/Service.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Service.cpp

CMakeFiles/main.dir/calculations/src/Service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/calculations/src/Service.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Service.cpp > CMakeFiles/main.dir/calculations/src/Service.cpp.i

CMakeFiles/main.dir/calculations/src/Service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/calculations/src/Service.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/calculations/src/Service.cpp -o CMakeFiles/main.dir/calculations/src/Service.cpp.s

CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/AstroMatrix.cpp
CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o -MF CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o.d -o CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/AstroMatrix.cpp

CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/AstroMatrix.cpp > CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.i

CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/AstroMatrix.cpp -o CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.s

CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/ConjugateMatrix.cpp
CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o -MF CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o.d -o CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/ConjugateMatrix.cpp

CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/ConjugateMatrix.cpp > CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.i

CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/ConjugateMatrix.cpp -o CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.s

CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/GeographyMatrix.cpp
CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o -MF CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o.d -o CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/GeographyMatrix.cpp

CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/GeographyMatrix.cpp > CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.i

CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/GeographyMatrix.cpp -o CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.s

CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Matrix.cpp
CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o -MF CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o.d -o CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Matrix.cpp

CMakeFiles/main.dir/matrixs/src/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/matrixs/src/Matrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Matrix.cpp > CMakeFiles/main.dir/matrixs/src/Matrix.cpp.i

CMakeFiles/main.dir/matrixs/src/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/matrixs/src/Matrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Matrix.cpp -o CMakeFiles/main.dir/matrixs/src/Matrix.cpp.s

CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Rotation.cpp
CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o -MF CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o.d -o CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Rotation.cpp

CMakeFiles/main.dir/matrixs/src/Rotation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/matrixs/src/Rotation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Rotation.cpp > CMakeFiles/main.dir/matrixs/src/Rotation.cpp.i

CMakeFiles/main.dir/matrixs/src/Rotation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/matrixs/src/Rotation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/Rotation.cpp -o CMakeFiles/main.dir/matrixs/src/Rotation.cpp.s

CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/TimeMatrix.cpp
CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o -MF CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o.d -o CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/TimeMatrix.cpp

CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/TimeMatrix.cpp > CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.i

CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/matrixs/src/TimeMatrix.cpp -o CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.s

CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/AstroInertialMode.cpp
CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o -MF CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o.d -o CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/AstroInertialMode.cpp

CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/AstroInertialMode.cpp > CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.i

CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/AstroInertialMode.cpp -o CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.s

CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o: /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/CorrectionMode.cpp
CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o -MF CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o.d -o CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o -c /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/CorrectionMode.cpp

CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/CorrectionMode.cpp > CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.i

CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/modes/src/CorrectionMode.cpp -o CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o" \
"CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o" \
"CMakeFiles/main.dir/calculations/src/Result.cpp.o" \
"CMakeFiles/main.dir/calculations/src/Service.cpp.o" \
"CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o" \
"CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o" \
"CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o" \
"CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o" \
"CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o" \
"CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o" \
"CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o" \
"CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/calculations/src/AstroInertialModeResultMatrix.cpp.o
main: CMakeFiles/main.dir/calculations/src/CoorectionModeResultMatrix.cpp.o
main: CMakeFiles/main.dir/calculations/src/Result.cpp.o
main: CMakeFiles/main.dir/calculations/src/Service.cpp.o
main: CMakeFiles/main.dir/matrixs/src/AstroMatrix.cpp.o
main: CMakeFiles/main.dir/matrixs/src/ConjugateMatrix.cpp.o
main: CMakeFiles/main.dir/matrixs/src/GeographyMatrix.cpp.o
main: CMakeFiles/main.dir/matrixs/src/Matrix.cpp.o
main: CMakeFiles/main.dir/matrixs/src/Rotation.cpp.o
main: CMakeFiles/main.dir/matrixs/src/TimeMatrix.cpp.o
main: CMakeFiles/main.dir/modes/src/AstroInertialMode.cpp.o
main: CMakeFiles/main.dir/modes/src/CorrectionMode.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build /Users/albertbolotnov/Desktop/otus/otus_C-Developer.Basic/project/build/CMakeFiles/main.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/main.dir/depend

