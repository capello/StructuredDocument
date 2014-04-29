cmake_minimum_required(VERSION 2.8)

project(structureddocument)
FIND_PACKAGE(Qt4 REQUIRED)


INCLUDE(${QT_USE_FILE})
ADD_DEFINITIONS(${QT_DEFINITIONS})

add_subdirectory(UI)
add_subdirectory(depends)

add_subdirectory(Tests)