# building cmake for royalc #

string(TIMESTAMP ROYALC_BUILD_TIME PARENT_SCOPE)

# This sets the package specific versioning
set(ROYALC_MAJOR_VERSION 1)
set(ROYALC_MINOR_VERSION 0)
set(ROYALC_PATCH_VERSION 0)

# This sets the name used in installation and packaging 
set(ROYALC_NAME royalc PARENT_SCOPE)
set(ROYALC_NAMED_VERSION ${ROYALC_NAME}.${ROYALC_MAJOR_VERSION}.${ROYALC_MINOR_VERSION}.${ROYALC_PATCH_VERSION} PARENT_SCOPE)
