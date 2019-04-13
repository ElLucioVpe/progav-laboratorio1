#include "../headers/Socio.h"

#include <stdexcept>

Socio::Socio(std::string ci, std::string nombre, const DtFecha & _fechaIngreso) : FechaIngreso(_fechaIngreso) {
	this->Ci = ci;
	this->Nombre = nombre;
	this->Mascotas = new Mascota*[MAX_MASCOTAS];
	this->Consultas = new Consulta*[MAX_CONSULTAS];
	this->CantidadMascotas = 0;
	this->CantidadConsultas = 0;
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

void Socio::agregarMascota(const DtMascota* m1) {
    if (this->CantidadMascotas == MAX_MASCOTAS) {
        throw std::invalid_argument("El socio no puede tener mas mascotas.");
    } else {
		auto p = dynamic_cast<const DtPerro*>(m1);
	    if (p) {
	        this->Mascotas[this->CantidadMascotas] = new Perro(
	        	p->getRaza(),
	        	p->getVacunaCachorro(),
	            p->getNombre(),
	            p->getGenero(),
	            p->getPeso()
	        );
	    }
	    else {
	        DtGato* g = (DtGato*) m1;
	        this->Mascotas[this->CantidadMascotas] = new Gato(
	        	g->getPelo(),
	            g->getNombre(),
	            g->getGenero(),
	            g->getPeso()
	        );
	    }
    	this->CantidadMascotas++;
    }
}

void Socio::agregarConsulta(DtConsulta c1) {
	if (this->CantidadConsultas == MAX_CONSULTAS) {
		throw std::invalid_argument("El socio no puede hacer más consultas.");
	} else {
		this->Consultas[this->CantidadConsultas] = new Consulta(
                c1.getMotivo(),
                c1.getFechaConsulta()
                );
        ;
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

Socio::~Socio() {

}
