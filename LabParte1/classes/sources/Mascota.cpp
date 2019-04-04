#include "../headers/Mascota.h"

Mascota::Mascota(std::string n, float p, const Genero& gen) : gen(gen) {
	this->Nombre = n;
	this->Peso = p;
}
