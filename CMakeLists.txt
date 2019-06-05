# Main cmake file for royalc

cmake_minimum_required(VERSION 3.2)

project(royalc)

# Sets the prefix for installations
# Change this if you want a different
# installation path
set(CMAKE_INSTALL_PREFIX /usr/local)

add_subdirectory(build)
message("Building with version: ${ROYALC_NAMED_VERSION}")

add_subdirectory(src)

enable_testing()

add_subdirectory(tests)
