#include "../headers/EmpresaExtranjera.h"
#include "../../datatypes/headers/DtEmpresaExtranjera.h"

EmpresaExtranjera::EmpresaExtranjera(string id, const Direccion& direccion, string nombreFantacia) 
    : Empresa(id, direccion) {
    this->nombreFantacia = nombreFantacia;
}

string EmpresaExtranjera::getNombreFantacia() const {
    return this->nombreFantacia;
}

float EmpresaExtranjera::getDescuento() {
    return 0.25;
}

DtEmpresa* EmpresaExtranjera::getDtEmpresa() {
    return new DtEmpresaExtranjera(this->getId(), this->getDireccion(), this->getNombreFantacia());
}

EmpresaExtranjera::~EmpresaExtranjera() {
}

std::ostream& operator<<(std::ostream &o, DtEmpresaExtranjera* dtee) {
    o << string("Empresa Id: ") << dtee->getId() << string("\n");
    o << string("Direccion: ") << dtee->getDireccion() << string("\n");
    o << string("Nombre Fantacia: ") << dtee->getNombreFantacia();
    return o;
}