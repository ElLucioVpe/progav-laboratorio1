#include "../headers/Mascota.h"

Mascota::Mascota(std::string _nombre, Genero& _genero, float _peso) : genero(_genero) {
	this->Nombre = _nombre;
	this->Peso = _peso;
}