set(SOURCES
    action.c
    alias.c
    antisub.c
    files.c
    glob.c
    help.c
    highlight.c
    history.c
    ivars.c
    llist.c
    main.c
    misc.c
    net.c
    parse.c
    path.c
    session.c
    substitute.c
    ticks.c
    utils.c
    variables.c
    events.c
    user.c
    run.c
    colors.c
    routes.c
    bind.c
    telnet.c
    crc.c
    hash.c
    regexp.c
    prof.c
    hooks.c
    unicode.c
    user_pipe.c
    user_tty.c
    wcwidth.c
    chinese.c
    print.c
    ssl.c)

include(CheckIncludeFile)
include(CheckFunctionExists)
include(CheckSymbolExists)
include(CheckLibraryExists)
include(TestBigEndian)

check_include_file("strings.h" HAVE_STRINGS_H)
check_include_file("string.h" HAVE_STRING_H)
check_include_file("sys/time.h" HAVE_SYS_TIME_H)
check_include_file("termios.h" HAVE_TERMIOS_H)
check_include_file("unistd.h" HAVE_UNISTD_H)
check_include_file("stropts.h" HAVE_STROPTS_H)
check_include_file("pty.h" HAVE_PTY_H)
check_include_file("libutil.h" HAVE_LIBUTIL_H)
check_include_file("inttypes.h" HAVE_INTTYPES_H)
check_include_file("memory.h" HAVE_MEMORY_H)
check_include_file("stdint.h" HAVE_STDINT_H)
check_include_file("stdlib.h" HAVE_STDLIB_H)
check_include_file("sys/stat.h" HAVE_SYS_STAT_H)
check_include_file("sys/types.h" HAVE_SYS_TYPES_H)
check_include_file("sys/wait.h" HAVE_SYS_WAIT_H)

check_function_exists("getaddrinfo" HAVE_GETADDRINFO)
check_function_exists("getpt" HAVE_GETPT)
check_function_exists("grantpt" HAVE_GRANTPT)
check_function_exists("openpt" HAVE_POSIX_OPENPT)
check_function_exists("ptsname" HAVE_PTSNAME)
check_function_exists("regcomp" HAVE_REGCOMP)
check_function_exists("strlcpy" HAVE_STRLCPY)
check_function_exists("wcwidth" HAVE_WCWIDTH)
check_function_exists("_getpty" HAVE__GETPTY)
check_function_exists("iconv" HAVE_ICONV)

check_symbol_exists("snprintf" "stdio.h" HAVE_SNPRINTF)
check_symbol_exists("vprintf" "stdio.h" HAVE_VPRINTF)
check_symbol_exists("vsnprintf" "stdio.h" HAVE_VSNPRINTF)
check_symbol_exists("memcpy" "string.h" HAVE_MEMCPY)

check_library_exists("util" "forkpty" "" HAVE_FORKPTY)

find_file(HAVE_DEV_PTMX NAMES /dev/ptmx PATHS / NO_DEFAULT_PATH)
test_big_endian(WORDS_BIGENDIAN)

add_executable(${PROJECT_NAME} ${SOURCES})
add_executable(ansi2html ansi2html.c)
add_executable(ansi2txt ansi2txt.c)
add_executable(ttyrec2ansi ttyrec2ansi.c)

set_property(TARGET ${PROJECT_NAME} PROPERTY C_STANDARD 99)

# generate helpfile.
add_custom_command(TARGET ${PROJECT_NAME}
    PRE_BUILD
    COMMAND gzip -n9 < ${PROJECT_SOURCE_DIR}/data/kbtin_help.in > ${PROJECT_BINARY_DIR}/KBtin_help.gz)

find_package(GLIB2)
find_package(Util)
find_package(Nsl)
find_package(Resolve)
find_package(Socket)
find_package(GnuTLS)
find_package(ZLIB)
find_package(PCRE REQUIRED)

target_link_libraries(${PROJECT_NAME}
    ${PCRE_LIBRARIES})

include_directories(${PCRE_INCLUDE_DIRS})

if (UTIL_FOUND)
    target_link_libraries(${PROJECT_NAME} ${Util_LIBRARY})
    set(HAVE_UTIL 1)
endif (UTIL_FOUND)

if (NSL_FOUND)
    target_link_libraries(${PROJECT_NAME} ${Nsl_LIBRARY})
    set(HAVE_NSL 1)
endif (NSL_FOUND)

if (RESOLVE_FOUND)
    target_link_libraries(${PROJECT_NAME} ${Resolve_LIBRARY})
    set(HAVE_RESOLVE 1)
endif (RESOLVE_FOUND)

if (SOCKET_FOUND)
    target_link_libraries(${PROJECT_NAME} ${Socket_LIBRARY})
    set(HAVE_SOCKET 1)
endif (SOCKET_FOUND)

if (GLIB2_FOUND)
    set(HAVE_GLIB 1)
    include_directories(${GLIB2_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} ${GLIB2_LIBRARIES})
endif (GLIB2_FOUND)

if (GNUTLS_FOUND)
    target_link_libraries(${PROJECT_NAME} ${GNUTLS_LIBRARIES})
    include_directories(${GNUTLS_INCLUDE_DIR})
    set(HAVE_GNUTLS 1)
endif (GNUTLS_FOUND)

if (ZLIB_FOUND)
    set(HAVE_ZLIB 1)
    target_link_libraries(${PROJECT_NAME} ${ZLIB_LIBRARIES})
    include_directories(${ZLIB_INCLUDE_DIRS})
endif (ZLIB_FOUND)

configure_file(${PROJECT_SOURCE_DIR}/include/kbtin_config.h.in ${PROJECT_BINARY_DIR}/kbtin_config.h)
