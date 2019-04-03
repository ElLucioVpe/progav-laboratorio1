#include "../headers/Fecha.h"

Fecha::Fecha(int dia, int mes, int anio) {
	this->dia = dia;
    this->mes = mes;
    this->anio = anio;
    
    if (!isValid()) {
        throw std::invalid_argument("Fecha invalida");
    }
}

int Fecha::getDia() const {
    return dia;
}

int Fecha::getMes() const {
    return mes;
}

int Fecha::getAnio() const {
    return anio;
}

bool Fecha::isValid() {
    return this->dia >= 1 && this->dia <= 31 &&
            this->mes >= 1 && this->mes <= 12 &&
            this->anio >= 1900;
}

Fecha::~Fecha() {
}
