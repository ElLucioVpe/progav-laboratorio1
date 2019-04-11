#include "../headers/EmpresaNacional.h"
#include "../../datatypes/headers/DtEmpresaNacional.h"

EmpresaNacional::EmpresaNacional(string id, const Direccion& direccion, string rut) :
    Empresa(id, direccion) {
    this->rut = rut;
}

string EmpresaNacional::getRut() const {
    return this->rut;
}

float EmpresaNacional::getDescuento() {
    return 0.20;
}

DtEmpresa* EmpresaNacional::getDtEmpresa() {
    return new DtEmpresaNacional(this->getId(), this->getDireccion(), this->getRut());
}

EmpresaNacional::~EmpresaNacional() {
}

std::ostream& operator<<(std::ostream &o, DtEmpresaNacional* dten) {
    o << string("Empresa Id: ") << dten->getId() << string("\n");
    o << string("Direccion: ") << dten->getDireccion() << string("\n");
    o << string("RUT: ") << dten->getRut();
    return o;
}
