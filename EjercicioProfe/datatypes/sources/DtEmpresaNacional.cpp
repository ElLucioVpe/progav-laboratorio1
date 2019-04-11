#include "../headers/DtEmpresaNacional.h"

DtEmpresaNacional::DtEmpresaNacional(string id, const Direccion& direccion, string rut) :
    DtEmpresa(id, direccion) {
    this->rut = rut;
}

string DtEmpresaNacional::getRut() const {
    return this->rut;
}

DtEmpresaNacional::~DtEmpresaNacional() {
}

