#include <iostream>
#include <stdexcept>

#include "classes/headers/Consulta.h"
#include "classes/headers/Mascota.h"
#include "classes/headers/Perro.h"
#include "classes/headers/Gato.h"
#include "classes/headers/Socio.h"
#include "datatypes/headers/DtConsulta.h"
#include "datatypes/headers/DtMascota.h"
#include "datatypes/headers/DtFecha.h"
#include "datatypes/headers/Genero.h"
#include "datatypes/headers/RazaPerro.h"
#include "datatypes/headers/TipoPelo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const int MAX_SOCIOS = 50;
const int MAX_MASCOTAS = 10;

Socio** socios = new Socio* [MAX_SOCIOS];
int cantidadSocios = 0;

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota);
void agregarMascota(std::string ci, const DtMascota& dtMascota);
void ingresarConsulta(std::string motivo, std::string ci);
DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, std::string ciSocio, int& cantConsultas);
void eliminarSocio(std::string ci);
DtMascota** obtenerMascotas(std::string ci, int& cantMascotas);

int main(int argc, char** argv) {
	cout << "Bienvenido al sistema" << endl;
	return 0;
}

Socio* obtenerSocio(std::string ci) {
    for(int i = 0; i < cantidadSocios; i++) {
        if (socios[i]->getCi() == ci) {
            return socios[i];
        }
    }
    return NULL;
}

void registrarSocio(std::string ci, std::string nombre, Fecha FechaIngreso, const DtMascota& dtMascota){
	if(cantidadSocios == MAX_SOCIOS) {
		throw std::invalid_argument("No se pueden agregar más socios.");
	} else {
		Socio* socio = obtenerSocioPorCI(ci);

	    if (socio != NULL) { throw std::invalid_argument("Ya existe un socio con la ci ingresada"); }

	    Mascota* mascota = obtenerMascotaPorNombre(dtMascota);
	    socios[++cantidadSocios] = new Socio(ci, nombre, FechaIngreso, mascota);
	    socio->agregarMascota(mascota);
	}
}

void agregarMascota(std::string ci, const DtMascota& dtMascota){
	
}

void ingresarConsulta(std::string motivo, std::string ci){
	
}

DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, std::string ciSocio, int& cantConsultas){
	DtConsulta** ejemplo = NULL;
	
	return ejemplo;
}

void eliminarSocio(std::string ci){
	
}

DtMascota** obtenerMascotas(std::string ci, int& cantMascotas){
	DtMascota** ejemplo = NULL;
	
	return ejemplo;
}
