# Main cmake file for royalc

cmake_minimum_required(VERSION 3.2)

project(royalc)

# Sets the prefix for installations
# Change this if you want a different
# installation path
set(CMAKE_INSTALL_PREFIX /usr/local)

add_subdirectory(src)
