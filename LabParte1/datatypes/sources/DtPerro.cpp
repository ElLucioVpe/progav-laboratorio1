#include "../headers/DtPerro.h"
//#include "RazaPerro.h"

DtPerro::DtPerro(RazaPerro _Raza, bool _vacunaCachorro, std::string NombreMascota, Genero& Genero, float Peso) : DtMascota(NombreMascota, Genero, Peso) {
	this->Raza = _Raza;
	this->VacunaCachorro = _vacunaCachorro;
}

RazaPerro DtPerro::getRaza() const {
	return this->Raza;
}

bool DtPerro::getVacunaCachorro() const {
	return this->VacunaCachorro;
}

DtPerro::~DtPerro() {
}
