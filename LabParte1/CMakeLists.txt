cmake_minimum_required(VERSION 3.13)
project(LabParte1)

set(CMAKE_CXX_STANDARD 14)

include_directories(classes/headers)
include_directories(datatypes/headers)

include_directories(classes/sources)
include_directories(datatypes/sources)

add_executable(LabParte1
        classes/headers/Consulta.h
        classes/headers/Gato.h
        classes/headers/Mascota.h
        classes/headers/Perro.h
        classes/headers/Socio.h
        classes/sources/Consulta.cpp
        classes/sources/Gato.cpp
        classes/sources/Mascota.cpp
        classes/sources/Perro.cpp
        classes/sources/Socio.cpp
        datatypes/headers/DtConsulta.h
        datatypes/headers/DtFecha.h
        datatypes/headers/DtMascota.h
        datatypes/headers/DtGato.h
        datatypes/sources/DtGato.cpp
        datatypes/headers/DtPerro.h
        datatypes/headers/Genero.h
        datatypes/headers/RazaPerro.h
        datatypes/headers/TipoPelo.h
        datatypes/sources/DtFecha.cpp
        datatypes/sources/DtMascota.cpp
        datatypes/sources/DtPerro.cpp
        main.cpp)
