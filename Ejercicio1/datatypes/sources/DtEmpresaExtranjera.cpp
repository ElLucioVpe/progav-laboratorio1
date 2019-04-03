#include "../headers/DtEmpresaExtranjera.h"

DtEmpresaExtranjera::DtEmpresaExtranjera(string id, const Direccion& direccion, string nombreFantacia) 
    : DtEmpresa(id, direccion) {
    this->nombreFantacia = nombreFantacia;
}

string DtEmpresaExtranjera::getNombreFantacia() const {
    return this->nombreFantacia;
}

DtEmpresaExtranjera::~DtEmpresaExtranjera() {
}

