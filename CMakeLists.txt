# Specify the version being used 
cmake_minimum_required(VERSION 2.6)

# Name your project here
project(Rogue)

# Add the cmake module path to CMAKE_MODULE_PATH. By doing this, we can totally
# use FindGLFW.cmake and stuff.
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# Add external library directory
link_directories(/usr/lib/)

# Add include directory
include_directories(${CMAKE_SOURCE_DIR}/include})

# Find packages
find_package(OpenGL REQUIRED)
#find_package(GLFW REQUIRED) # TODO: Fails on linux, wonder why...

include_directories(${OPENGL_INCLUDE_DIRS})
set(LIBS ${LIBS} ${OPENGL_LIBRARIES} glfw)

add_executable(Rogue ../src/main.cpp)

target_link_libraries(Rogue ${LIBS})
