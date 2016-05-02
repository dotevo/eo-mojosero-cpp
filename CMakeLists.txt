cmake_minimum_required(VERSION 2.8.4)
project(mojosero CXX)

set(mojosero_LIBRARIES mojosero)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -stdlib=libc++")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
include(FindPkgConfig)

SET(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

#===AGORDOJ===
option(MOJOSERO_KONSTRUI_TESTOJN "Konstrui testojn por Mojosero" ON)

#DIFINOJ
if(WIN32)
	add_definitions( -DWIN32 )
endif(WIN32)

#SDL
list(APPEND LIBS SDL2)

#Mojosero
include_directories(${CMAKE_SOURCE_DIR}/enhavo)
file(GLOB_RECURSE HEADERS "${CMAKE_SOURCE_DIR}/enhavo/*.h")
aux_source_directory(fontkodo SOURCES)
add_library(mojosero ${SOURCES} ${HEADERS})

if(MOJOSERO_KONSTRUI_TESTOJN)
	add_subdirectory(testoj)
endif()
