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

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota){
	
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
