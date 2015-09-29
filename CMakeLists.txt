cmake_minimum_required(VERSION 2.8)
project(simpletin)

set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)


include_directories(${PROJECT_BINARY_DIR}
    ${PROJECT_SOURCE_DIR}/include)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ggdb")

if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_C_COMPILER_ID STREQUAL "GNU")
        set (CMAKE_C_FLAGS "-std=gnu99 ${CMAKE_C_FLAGS}")
    endif ()
else ()
    set (CMAKE_C_STANDARD 99)
endif ()

add_subdirectory(src)
