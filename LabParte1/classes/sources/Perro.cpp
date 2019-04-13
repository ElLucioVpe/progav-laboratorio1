#include "../headers/Perro.h"
#include "../../datatypes/headers/RazaPerro.h"

Perro::Perro(RazaPerro _Raza, bool _VacunaCachorro, std::string _NombreMascota, const Genero& _Genero, float _Peso) : Mascota(_NombreMascota, _Genero, _Peso) {
	this->Raza = _Raza;
	this->VacunaCachorro = _VacunaCachorro;
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


