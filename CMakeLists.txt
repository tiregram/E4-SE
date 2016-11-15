
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


add_executable(bin/testGestionFile src/td1m/testgestiondisk.c src/td1m/gestionFichier.c)
add_executable(bin/test2b1 src/td1m/test2b1.c src/td1m/gestionFichier.c)
add_executable(bin/test2b2 src/td1m/test2b2.c src/td1m/gestionFichier.c)
add_executable(bin/test2b3 src/td1m/test2b3.c src/td1m/gestionFichier.c)
add_executable(bin/test2b4 src/td1m/test2b4.c src/td1m/gestionFichier.c)
add_executable(bin/test2b5 src/td1m/test2b5.c src/td1m/gestionFichier.c)
