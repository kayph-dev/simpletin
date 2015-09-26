find_library(Util_LIBRARY
    NAMES util)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Util DEFAULT_MSG Util_LIBRARY)

mark_as_advanced(Util_LIBRARY)

