find_library(Socket_LIBRARY
    NAMES socket)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Socket DEFAULT_MSG Socket_LIBRARY)

mark_as_advanced(Socket_LIBRARY)

