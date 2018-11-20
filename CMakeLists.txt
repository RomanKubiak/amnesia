project (Amnesia)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_C_COMPILER "/usr/local/gcc-8.1.0//bin/gcc-8.1.0")
set(CMAKE_CXX_COMPILER "/usr/local/gcc-8.1.0//bin/g++-8.1.0")
set(ENV{PATH} /usr/local/gcc-8.1.0/bin)

include(CMake/PrecompiledHeader.cmake)

add_compile_options (
	"-std=c++14"
	"-O3"
	"-pthread"
)

include_directories (
	"juce"
]	"juce/modules"
	"/usr/include/freetype2"
	"/usr/include/arm-linux-gnueabihf"
	"core"
)

add_definitions (
	-DLINUX
)

add_library (
	JUCE STATIC
	"juce/include_juce_core.cpp"
	"juce/include_juce_data_structures.cpp"
	"juce/include_juce_events.cpp"
	"juce/include_juce_graphics.cpp"
	"juce/include_juce_gui_basics.cpp"
	"juce/include_juce_gui_extra.cpp"
)

file(GLOB UI "ui/Source/*.cpp")
add_library (UI STATIC ${UI_SOURCES})

add_executable (
	Amnesia
	core/Amnesia.cpp
	core/Cd22m3494.cpp
)

target_link_libraries(
	Amnesia
	JUCE
	UI
	freetype
	X11
	Xext
	Xinerama
	curl
	dl
	pthread
	wiringPi)

