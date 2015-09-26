find_library(Resolve_LIBRARY
    NAMES resolve)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Resolve DEFAULT_MSG Resolve_LIBRARY)

mark_as_advanced(Resolve_LIBRARY)

