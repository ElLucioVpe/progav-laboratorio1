#include "../headers/Socio.h"

Socio::Socio(std::string ci, std::string nombre, const Fecha& fechaIngreso) : fechaIngreso(fechaIngreso) {
	this->ci = ci;
	this->nombre = nombre;
}

std::string Socio::getCi() const {
	return this->ci;
}

std::string Socio::getNombre() const {
	return this->nombre;
}

std::string Socio::getFechaIngreso() const {
	return this->fechaIngreso;
}

Socio::~Socio() {
	delete [] FechaIngreso;
}