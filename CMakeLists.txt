cmake_minimum_required(VERSION 2.8)
project(kbtin)

set(VERSION_MAJOR 0)
set(VERSION_MINOR 1)
set(VERSION_PATCH 0)


include_directories(${PROJECT_BINARY_DIR}
    ${PROJECT_SOURCE_DIR}/include)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Werror")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ggdb")

add_subdirectory(src)

