#include "../headers/DtPerro.h"
#include "RazaPerro.h"

DtPerro::DtPerro(RazaPerro raza, bool vacunaCachorro, std::string NombreMascota, Genero& Genero, float Peso) : DtMascota(NombreMascota, Genero, Peso) {
	this->Raza = Raza;
	this->VacunaCachorro = VacunaCachorro;
}

RazaPerro Perro::getRaza() {
	return this->Raza;
}

boolean Perro::getVacunaCachorro() {
	return this->VacunaCachorro;
}

DtPerro::~DtPerro() {
  
}
