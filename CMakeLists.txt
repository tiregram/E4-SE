
cmake_minimum_required (VERSION 2.6)
project (SE)

set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)
set (PROJECT_SOURCE_DIR src)
include_directories ("${PROJECT_SOURCE_DIR}/")

add_executable(bin/exo1 ${PROJECT_SOURCE_DIR}/exo1.c)
add_executable(bin/exo2 ${PROJECT_SOURCE_DIR}/exo2.c)
add_executable(bin/mrun ${PROJECT_SOURCE_DIR}/exo2_mrun.c)
add_executable(bin/exo3 ${PROJECT_SOURCE_DIR}/exo3.c)


