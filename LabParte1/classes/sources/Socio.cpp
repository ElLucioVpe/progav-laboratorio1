#include "../headers/Socio.h"

#include <stdexcept>
const int MAX_MASCOTAS = 10;
const int MAX_CONSULTAS = 20;

Socio::Socio(std::string ci, std::string nombre, const DtFecha & _fechaIngreso) : FechaIngreso(_fechaIngreso) {
	this->Ci = ci;
	this->Nombre = nombre;
	this->Mascotas = new Mascota*[MAX_MASCOTAS];
	this->Consultas = new Consulta*[MAX_CONSULTAS];
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

void Socio::agregarMascota(DtMascota m1) {
    if (this->CantidadMascotas == MAX_MASCOTAS) {
        throw std::invalid_argument("El socio no puede tener más mascotas.");
    } else {
        this->Mascotas[this->CantidadMascotas] = new Mascota(
                m1.getNombre(),
                m1.getGenero(),
                m1.getPeso()
                );

    	this->CantidadMascotas++;
    }
}

void Socio::agregarConsulta(Consulta c1) {
	if (this->CantidadConsultas == MAX_CONSULTAS) {
		throw std::invalid_argument("El socio no puede hacer más consultas.");
	} else {
		this->Consultas[this->CantidadConsultas] = &c1;
		this->CantidadMascotas++;
	}
}

int Socio::getCantidadMascotas() const {
    return this->CantidadMascotas;
}

Mascota** Socio::getMascota()  {
	return this->Mascotas;
}

void Socio::setMascota(Mascota** mascotas, int CantidadMascotas) {
	this->Mascotas= mascotas;
	this->CantidadMascotas = CantidadMascotas;
}

Consulta** Socio::getConsulta()  {
		return this->Consultas;
}

void Socio::setConsulta(Consulta** consultas, int CantidadConsultas)  {
	this->Consultas= consultas;
	this->CantidadConsultas= CantidadConsultas;
}