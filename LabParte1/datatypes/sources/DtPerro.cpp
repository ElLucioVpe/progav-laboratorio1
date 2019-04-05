#include "../headers/DtPerro.h"
#include "razaperro.h"

DtPerro::DtPerro(Razaperro raza,boolean vacunaCachorro) : Mascota(std::string NombreMascota, Genero& Genero, float Peso) {
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
