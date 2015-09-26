find_library(Nsl_LIBRARY
    NAMES nsl)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Nsl DEFAULT_MSG Nsl_LIBRARY)

mark_as_advanced(Nsl_LIBRARY)

