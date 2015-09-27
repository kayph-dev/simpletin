# Copyright (C) 2015 Alexander Borgerth<kayph.dev@gmail.com>
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#
# PCRE_FOUND        - Set if library is found.
# PCRE_INCLUDE_DIRS - Include dirs where pcre.h is found.
# PCRE_LIBRARIES    - Requires libraries.

find_path(PCRE_INCLUDE_DIR NAMES pcre.h)

find_library(PCRE_LIBRARY NAMES pcre)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(PCRE DEFAULT_MSG PCRE_LIBRARY PCRE_INCLUDE_DIR)

if (PCRE_FOUND)
    set(PCRE_LIBRARIES ${PCRE_LIBRARY})
    set(PCRE_INCLUDE_DIRS ${PCRE_INCLUDE_DIR})
else (PCRE_FOUND)
    set(PCRE_LIBRARIES)
    set(PCRE_INCLUDE_DIRS)
endif (PCRE_FOUND)

mark_as_advanced(PCRE_INCLUDE_DIRS PCRE_LIBRARIES)
