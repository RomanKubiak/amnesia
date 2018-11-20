# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /root/amnesia

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/amnesia

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /root/amnesia/CMakeFiles /root/amnesia/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /root/amnesia/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named JUCE

# Build rule for target.
JUCE: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 JUCE
.PHONY : JUCE

# fast build rule for target.
JUCE/fast:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/build
.PHONY : JUCE/fast

#=============================================================================
# Target rules for targets named Amnesia

# Build rule for target.
Amnesia: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 Amnesia
.PHONY : Amnesia

# fast build rule for target.
Amnesia/fast:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/build
.PHONY : Amnesia/fast

#=============================================================================
# Target rules for targets named UI

# Build rule for target.
UI: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 UI
.PHONY : UI

# fast build rule for target.
UI/fast:
	$(MAKE) -f CMakeFiles/UI.dir/build.make CMakeFiles/UI.dir/build
.PHONY : UI/fast

core/Amnesia.o: core/Amnesia.cpp.o

.PHONY : core/Amnesia.o

# target to build an object file
core/Amnesia.cpp.o:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/core/Amnesia.cpp.o
.PHONY : core/Amnesia.cpp.o

core/Amnesia.i: core/Amnesia.cpp.i

.PHONY : core/Amnesia.i

# target to preprocess a source file
core/Amnesia.cpp.i:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/core/Amnesia.cpp.i
.PHONY : core/Amnesia.cpp.i

core/Amnesia.s: core/Amnesia.cpp.s

.PHONY : core/Amnesia.s

# target to generate assembly for a file
core/Amnesia.cpp.s:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/core/Amnesia.cpp.s
.PHONY : core/Amnesia.cpp.s

core/Cd22m3494.o: core/Cd22m3494.cpp.o

.PHONY : core/Cd22m3494.o

# target to build an object file
core/Cd22m3494.cpp.o:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/core/Cd22m3494.cpp.o
.PHONY : core/Cd22m3494.cpp.o

core/Cd22m3494.i: core/Cd22m3494.cpp.i

.PHONY : core/Cd22m3494.i

# target to preprocess a source file
core/Cd22m3494.cpp.i:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/core/Cd22m3494.cpp.i
.PHONY : core/Cd22m3494.cpp.i

core/Cd22m3494.s: core/Cd22m3494.cpp.s

.PHONY : core/Cd22m3494.s

# target to generate assembly for a file
core/Cd22m3494.cpp.s:
	$(MAKE) -f CMakeFiles/Amnesia.dir/build.make CMakeFiles/Amnesia.dir/core/Cd22m3494.cpp.s
.PHONY : core/Cd22m3494.cpp.s

juce/include_juce_core.o: juce/include_juce_core.cpp.o

.PHONY : juce/include_juce_core.o

# target to build an object file
juce/include_juce_core.cpp.o:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_core.cpp.o
.PHONY : juce/include_juce_core.cpp.o

juce/include_juce_core.i: juce/include_juce_core.cpp.i

.PHONY : juce/include_juce_core.i

# target to preprocess a source file
juce/include_juce_core.cpp.i:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_core.cpp.i
.PHONY : juce/include_juce_core.cpp.i

juce/include_juce_core.s: juce/include_juce_core.cpp.s

.PHONY : juce/include_juce_core.s

# target to generate assembly for a file
juce/include_juce_core.cpp.s:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_core.cpp.s
.PHONY : juce/include_juce_core.cpp.s

juce/include_juce_data_structures.o: juce/include_juce_data_structures.cpp.o

.PHONY : juce/include_juce_data_structures.o

# target to build an object file
juce/include_juce_data_structures.cpp.o:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_data_structures.cpp.o
.PHONY : juce/include_juce_data_structures.cpp.o

juce/include_juce_data_structures.i: juce/include_juce_data_structures.cpp.i

.PHONY : juce/include_juce_data_structures.i

# target to preprocess a source file
juce/include_juce_data_structures.cpp.i:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_data_structures.cpp.i
.PHONY : juce/include_juce_data_structures.cpp.i

juce/include_juce_data_structures.s: juce/include_juce_data_structures.cpp.s

.PHONY : juce/include_juce_data_structures.s

# target to generate assembly for a file
juce/include_juce_data_structures.cpp.s:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_data_structures.cpp.s
.PHONY : juce/include_juce_data_structures.cpp.s

juce/include_juce_events.o: juce/include_juce_events.cpp.o

.PHONY : juce/include_juce_events.o

# target to build an object file
juce/include_juce_events.cpp.o:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_events.cpp.o
.PHONY : juce/include_juce_events.cpp.o

juce/include_juce_events.i: juce/include_juce_events.cpp.i

.PHONY : juce/include_juce_events.i

# target to preprocess a source file
juce/include_juce_events.cpp.i:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_events.cpp.i
.PHONY : juce/include_juce_events.cpp.i

juce/include_juce_events.s: juce/include_juce_events.cpp.s

.PHONY : juce/include_juce_events.s

# target to generate assembly for a file
juce/include_juce_events.cpp.s:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_events.cpp.s
.PHONY : juce/include_juce_events.cpp.s

juce/include_juce_graphics.o: juce/include_juce_graphics.cpp.o

.PHONY : juce/include_juce_graphics.o

# target to build an object file
juce/include_juce_graphics.cpp.o:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_graphics.cpp.o
.PHONY : juce/include_juce_graphics.cpp.o

juce/include_juce_graphics.i: juce/include_juce_graphics.cpp.i

.PHONY : juce/include_juce_graphics.i

# target to preprocess a source file
juce/include_juce_graphics.cpp.i:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_graphics.cpp.i
.PHONY : juce/include_juce_graphics.cpp.i

juce/include_juce_graphics.s: juce/include_juce_graphics.cpp.s

.PHONY : juce/include_juce_graphics.s

# target to generate assembly for a file
juce/include_juce_graphics.cpp.s:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_graphics.cpp.s
.PHONY : juce/include_juce_graphics.cpp.s

juce/include_juce_gui_basics.o: juce/include_juce_gui_basics.cpp.o

.PHONY : juce/include_juce_gui_basics.o

# target to build an object file
juce/include_juce_gui_basics.cpp.o:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_gui_basics.cpp.o
.PHONY : juce/include_juce_gui_basics.cpp.o

juce/include_juce_gui_basics.i: juce/include_juce_gui_basics.cpp.i

.PHONY : juce/include_juce_gui_basics.i

# target to preprocess a source file
juce/include_juce_gui_basics.cpp.i:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_gui_basics.cpp.i
.PHONY : juce/include_juce_gui_basics.cpp.i

juce/include_juce_gui_basics.s: juce/include_juce_gui_basics.cpp.s

.PHONY : juce/include_juce_gui_basics.s

# target to generate assembly for a file
juce/include_juce_gui_basics.cpp.s:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_gui_basics.cpp.s
.PHONY : juce/include_juce_gui_basics.cpp.s

juce/include_juce_gui_extra.o: juce/include_juce_gui_extra.cpp.o

.PHONY : juce/include_juce_gui_extra.o

# target to build an object file
juce/include_juce_gui_extra.cpp.o:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_gui_extra.cpp.o
.PHONY : juce/include_juce_gui_extra.cpp.o

juce/include_juce_gui_extra.i: juce/include_juce_gui_extra.cpp.i

.PHONY : juce/include_juce_gui_extra.i

# target to preprocess a source file
juce/include_juce_gui_extra.cpp.i:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_gui_extra.cpp.i
.PHONY : juce/include_juce_gui_extra.cpp.i

juce/include_juce_gui_extra.s: juce/include_juce_gui_extra.cpp.s

.PHONY : juce/include_juce_gui_extra.s

# target to generate assembly for a file
juce/include_juce_gui_extra.cpp.s:
	$(MAKE) -f CMakeFiles/JUCE.dir/build.make CMakeFiles/JUCE.dir/juce/include_juce_gui_extra.cpp.s
.PHONY : juce/include_juce_gui_extra.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... JUCE"
	@echo "... Amnesia"
	@echo "... rebuild_cache"
	@echo "... UI"
	@echo "... edit_cache"
	@echo "... core/Amnesia.o"
	@echo "... core/Amnesia.i"
	@echo "... core/Amnesia.s"
	@echo "... core/Cd22m3494.o"
	@echo "... core/Cd22m3494.i"
	@echo "... core/Cd22m3494.s"
	@echo "... juce/include_juce_core.o"
	@echo "... juce/include_juce_core.i"
	@echo "... juce/include_juce_core.s"
	@echo "... juce/include_juce_data_structures.o"
	@echo "... juce/include_juce_data_structures.i"
	@echo "... juce/include_juce_data_structures.s"
	@echo "... juce/include_juce_events.o"
	@echo "... juce/include_juce_events.i"
	@echo "... juce/include_juce_events.s"
	@echo "... juce/include_juce_graphics.o"
	@echo "... juce/include_juce_graphics.i"
	@echo "... juce/include_juce_graphics.s"
	@echo "... juce/include_juce_gui_basics.o"
	@echo "... juce/include_juce_gui_basics.i"
	@echo "... juce/include_juce_gui_basics.s"
	@echo "... juce/include_juce_gui_extra.o"
	@echo "... juce/include_juce_gui_extra.i"
	@echo "... juce/include_juce_gui_extra.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

