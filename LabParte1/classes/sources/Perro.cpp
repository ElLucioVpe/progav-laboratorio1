#include "../headers/Perro.h"
#include "../../datatypes/headers/RazaPerro.h"

Perro::Perro(RazaPerro raza, boolean VacunaCachorro) : Mascota(std::string NombreMascota, Genero& Genero, float Peso) {
	this->Raza = Raza;
	this->VacunaCachorro = VacunaCachorro;
}

RazaPerro Perro::getRaza() {
	return this->Raza;
}

boolean Perro::getVacunaCachorro() {
	return this->VacunaCachorro;
}