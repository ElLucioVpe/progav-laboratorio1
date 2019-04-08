#include <stdexcept>
#include "../headers/DtFecha.h"

DtFecha::DtFecha(int dia, int mes, int anio) {
	this->dia = dia;
    this->mes = mes;
    this->anio = anio;

    if (!isValid()) {
        throw std::invalid_argument("Fecha invalida");
    }
}

int DtFecha::getDia() const {
    return dia;
}

int DtFecha::getMes() const {
    return mes;
}

int DtFecha::getAnio() const {
    return anio;
}

bool DtFecha::isValid() {
    return this->dia >= 1 && this->dia <= 31 &&
            this->mes >= 1 && this->mes <= 12 &&
            this->anio >= 1900;
}

DtFecha::~DtFecha() {
}
