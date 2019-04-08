#include "../headers/Socio.h"

Socio::Socio(std::string ci, std::string nombre, const DtFecha & _fechaIngreso) : FechaIngreso(_fechaIngreso) {
	this->Ci = ci;
	this->Nombre = nombre;
}

std::string Socio::getCi() const {
	return this->Ci;
}

std::string Socio::getNombre() const {
	return this->Nombre;
}

DtFecha Socio::getFechaIngreso() const {
	return this->FechaIngreso;
}

/*
void Socio::agregarMascota(const Mascota* m1) {
    if (this->CantidadMascotas == MAX_MASCOTAS) {
        throw std::invalid_argument("El socio no puede tener más mascotas.");
    } else {
    	this->Mascotas[this->CantidadMascotas] = m1;
    	this->CantidadMascotas++;
    }
}*/

Socio::~Socio() {

}