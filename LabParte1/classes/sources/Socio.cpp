#include "../headers/Socio.h"

Socio::Socio(string ci, string nombre, const Fecha& fechaIngreso) : fechaIngreso(fechaIngreso) {
	this->ci = ci;
	this->nombre = nombre;
}

string Socio::getCi() const {
	return this->ci;
}

string Socio::getNombre() const {
	return this->nombre;
}

string Socio::getFechaIngreso() const {
	return this->fechaIngreso;
}