#include "../headers/Mascota.h"

Mascota::Mascota(std::string _nombre, const Genero& _genero, float _peso) : genero(_genero) {
	this->Nombre = _nombre;
	this->Peso = _peso;
}

std::string Mascota::getNombre() {
    return this->Nombre;
}

Genero Mascota::getGenero() {
    return this->genero;
}

float Mascota::getPeso() {
    return 0;
}