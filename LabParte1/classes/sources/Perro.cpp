#include "../headers/Perro.h"
#include "../../datatypes/headers/RazaPerro.h"

Perro::Perro(RazaPerro raza, bool VacunaCachorro, std::string NombreMascota, Genero& Genero, float Peso) : Mascota(NombreMascota, Genero, Peso) {
	this->Raza = Raza;
	this->VacunaCachorro = VacunaCachorro;
}

RazaPerro Perro::getRaza() {
	return this->Raza;
}

bool Perro::getVacunaCachorro() {
	return this->VacunaCachorro;
}

float Mascota::obtenerRacionDiaria() {
    return 0;
}