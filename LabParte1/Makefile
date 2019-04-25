CPP      = g++
CC       = gcc
OBJ      = main.o classes/sources/Mascota.o classes/sources/Consulta.o classes/sources/Gato.o classes/sources/Perro.o classes/sources/Socio.o datatypes/sources/DtConsulta.o datatypes/sources/DtFecha.o datatypes/sources/DtGato.o datatypes/sources/DtMascota.o datatypes/sources/DtPerro.o
LINKOBJ  = main.o classes/sources/Mascota.o classes/sources/Consulta.o classes/sources/Gato.o classes/sources/Perro.o classes/sources/Socio.o datatypes/sources/DtConsulta.o datatypes/sources/DtFecha.o datatypes/sources/DtGato.o datatypes/sources/DtMascota.o datatypes/sources/DtPerro.o
BIN      = LabParte1
CXXFLAGS = $(CXXINCS) -std=c++14
CFLAGS   = $(INCS) 
RM       = rm -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

classes/sources/Mascota.o: classes/sources/Mascota.cpp
	$(CPP) -c classes/sources/Mascota.cpp -o classes/sources/Mascota.o $(CXXFLAGS)

classes/sources/Consulta.o: classes/sources/Consulta.cpp
	$(CPP) -c classes/sources/Consulta.cpp -o classes/sources/Consulta.o $(CXXFLAGS)

classes/sources/Gato.o: classes/sources/Gato.cpp
	$(CPP) -c classes/sources/Gato.cpp -o classes/sources/Gato.o $(CXXFLAGS)

classes/sources/Perro.o: classes/sources/Perro.cpp
	$(CPP) -c classes/sources/Perro.cpp -o classes/sources/Perro.o $(CXXFLAGS)

classes/sources/Socio.o: classes/sources/Socio.cpp
	$(CPP) -c classes/sources/Socio.cpp -o classes/sources/Socio.o $(CXXFLAGS)

datatypes/sources/DtConsulta.o: datatypes/sources/DtConsulta.cpp
	$(CPP) -c datatypes/sources/DtConsulta.cpp -o datatypes/sources/DtConsulta.o $(CXXFLAGS)

datatypes/sources/DtFecha.o: datatypes/sources/DtFecha.cpp
	$(CPP) -c datatypes/sources/DtFecha.cpp -o datatypes/sources/DtFecha.o $(CXXFLAGS)

datatypes/sources/DtGato.o: datatypes/sources/DtGato.cpp
	$(CPP) -c datatypes/sources/DtGato.cpp -o datatypes/sources/DtGato.o $(CXXFLAGS)

datatypes/sources/DtMascota.o: datatypes/sources/DtMascota.cpp
	$(CPP) -c datatypes/sources/DtMascota.cpp -o datatypes/sources/DtMascota.o $(CXXFLAGS)

datatypes/sources/DtPerro.o: datatypes/sources/DtPerro.cpp
	$(CPP) -c datatypes/sources/DtPerro.cpp -o datatypes/sources/DtPerro.o $(CXXFLAGS)