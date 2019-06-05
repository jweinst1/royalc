# building cmake for royalc #

string(TIMESTAMP ROYALC_BUILD_TIME PARENT_SCOPE)

# This sets the package specific versioning
set(ROYALC_MAJOR_VERSION 1 PARENT_SCOPE)
set(ROYALC_MINOR_VERSION 0 PARENT_SCOPE)
set(ROYALC_PATCH_VERSION 0 PARENT_SCOPE)

# This sets the name used in installation and packaging 
set(ROYALC_NAME royalc PARENT_SCOPE)
set(ROYALC_NAMED_VERSION ${ROYALC_NAME}.${ROYALC_MAJOR_VERSION}.${ROYALC_MINOR_VERSION}.${ROYALC_PATCH_VERSION} PARENT_SCOPE)

# This sets the files and directories that contain the source code.
set(ROYALC_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(ROYALC_SINGLE_HEADER_FILE royalc-h.h)
set(ROYALC_LIB_HEADER_FILE royalc-lib-h.h)

# These create, if needed, the installation directories.
# for now, there is no versioning config, as royal is intended to be
# backwards compatible. In the future, this may be added.
install(DIRECTORY DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${ROYALC_NAME})
install(DIRECTORY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/${ROYALC_NAME})

# Installs the header files 
install(FILES ${ROYALC_SOURCE_DIR}/${ROYALC_SINGLE_HEADER_FILE} DESTINATION include/${ROYALC_NAME})
install(FILES ${ROYALC_SOURCE_DIR}/${ROYALC_LIB_HEADER_FILE} DESTINATION include/${ROYALC_NAME})
