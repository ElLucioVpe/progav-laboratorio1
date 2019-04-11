#include "../headers/DtEmpresa.h"

DtEmpresa::DtEmpresa(string id, const Direccion& direccion) : direccion(direccion){
    this->id = id;
}

string DtEmpresa::getId() const {
    return this->id;
}

Direccion DtEmpresa::getDireccion() const {
    return this->direccion;
}

DtEmpresa::~DtEmpresa() {
}
