#include "../headers/Direccion.h"
#include <ostream>

Direccion::Direccion() {
}

Direccion::Direccion(string pais, string ciudad, string calle, string numero) {
    this->pais = pais;
    this->ciudad = ciudad;
    this->calle = calle;
    this->numero = numero;
}

string Direccion::getPais() const {
    return pais;
}

string Direccion::getCiudad() const {
    return ciudad;
}

string Direccion::getNumero() const {
    return numero;
}

string Direccion::getCalle() const {
    return calle;
}

Direccion::~Direccion() {
}

std::ostream& operator<<(std::ostream &o, const Direccion& d) {
    o << d.getCalle() <<  " " << d.getNumero() << " - " << d.getCiudad() << ", " << d.getPais();
    return o;
}
