# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Cachen/Desktop/rpg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Cachen/Desktop/rpg

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/Cachen/Desktop/rpg/CMakeFiles /Users/Cachen/Desktop/rpg/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/Cachen/Desktop/rpg/CMakeFiles 0
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
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named main

# Build rule for target.
main: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 main
.PHONY : main

# fast build rule for target.
main/fast:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/build
.PHONY : main/fast

Arme.o: Arme.cpp.o

.PHONY : Arme.o

# target to build an object file
Arme.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Arme.cpp.o
.PHONY : Arme.cpp.o

Arme.i: Arme.cpp.i

.PHONY : Arme.i

# target to preprocess a source file
Arme.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Arme.cpp.i
.PHONY : Arme.cpp.i

Arme.s: Arme.cpp.s

.PHONY : Arme.s

# target to generate assembly for a file
Arme.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Arme.cpp.s
.PHONY : Arme.cpp.s

Aventurier.o: Aventurier.cpp.o

.PHONY : Aventurier.o

# target to build an object file
Aventurier.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Aventurier.cpp.o
.PHONY : Aventurier.cpp.o

Aventurier.i: Aventurier.cpp.i

.PHONY : Aventurier.i

# target to preprocess a source file
Aventurier.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Aventurier.cpp.i
.PHONY : Aventurier.cpp.i

Aventurier.s: Aventurier.cpp.s

.PHONY : Aventurier.s

# target to generate assembly for a file
Aventurier.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Aventurier.cpp.s
.PHONY : Aventurier.cpp.s

Bouclier.o: Bouclier.cpp.o

.PHONY : Bouclier.o

# target to build an object file
Bouclier.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Bouclier.cpp.o
.PHONY : Bouclier.cpp.o

Bouclier.i: Bouclier.cpp.i

.PHONY : Bouclier.i

# target to preprocess a source file
Bouclier.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Bouclier.cpp.i
.PHONY : Bouclier.cpp.i

Bouclier.s: Bouclier.cpp.s

.PHONY : Bouclier.s

# target to generate assembly for a file
Bouclier.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Bouclier.cpp.s
.PHONY : Bouclier.cpp.s

Maps.o: Maps.cpp.o

.PHONY : Maps.o

# target to build an object file
Maps.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Maps.cpp.o
.PHONY : Maps.cpp.o

Maps.i: Maps.cpp.i

.PHONY : Maps.i

# target to preprocess a source file
Maps.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Maps.cpp.i
.PHONY : Maps.cpp.i

Maps.s: Maps.cpp.s

.PHONY : Maps.s

# target to generate assembly for a file
Maps.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Maps.cpp.s
.PHONY : Maps.cpp.s

Monstre.o: Monstre.cpp.o

.PHONY : Monstre.o

# target to build an object file
Monstre.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Monstre.cpp.o
.PHONY : Monstre.cpp.o

Monstre.i: Monstre.cpp.i

.PHONY : Monstre.i

# target to preprocess a source file
Monstre.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Monstre.cpp.i
.PHONY : Monstre.cpp.i

Monstre.s: Monstre.cpp.s

.PHONY : Monstre.s

# target to generate assembly for a file
Monstre.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Monstre.cpp.s
.PHONY : Monstre.cpp.s

Objet.o: Objet.cpp.o

.PHONY : Objet.o

# target to build an object file
Objet.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Objet.cpp.o
.PHONY : Objet.cpp.o

Objet.i: Objet.cpp.i

.PHONY : Objet.i

# target to preprocess a source file
Objet.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Objet.cpp.i
.PHONY : Objet.cpp.i

Objet.s: Objet.cpp.s

.PHONY : Objet.s

# target to generate assembly for a file
Objet.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Objet.cpp.s
.PHONY : Objet.cpp.s

Personnage.o: Personnage.cpp.o

.PHONY : Personnage.o

# target to build an object file
Personnage.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Personnage.cpp.o
.PHONY : Personnage.cpp.o

Personnage.i: Personnage.cpp.i

.PHONY : Personnage.i

# target to preprocess a source file
Personnage.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Personnage.cpp.i
.PHONY : Personnage.cpp.i

Personnage.s: Personnage.cpp.s

.PHONY : Personnage.s

# target to generate assembly for a file
Personnage.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/Personnage.cpp.s
.PHONY : Personnage.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... main"
	@echo "... Arme.o"
	@echo "... Arme.i"
	@echo "... Arme.s"
	@echo "... Aventurier.o"
	@echo "... Aventurier.i"
	@echo "... Aventurier.s"
	@echo "... Bouclier.o"
	@echo "... Bouclier.i"
	@echo "... Bouclier.s"
	@echo "... Maps.o"
	@echo "... Maps.i"
	@echo "... Maps.s"
	@echo "... Monstre.o"
	@echo "... Monstre.i"
	@echo "... Monstre.s"
	@echo "... Objet.o"
	@echo "... Objet.i"
	@echo "... Objet.s"
	@echo "... Personnage.o"
	@echo "... Personnage.i"
	@echo "... Personnage.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system
