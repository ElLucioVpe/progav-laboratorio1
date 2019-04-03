#include "../headers/Empresa.h"

Empresa::Empresa(string id, const Direccion& direccion) : direccion(direccion){
    this->id = id;
}

string Empresa::getId() const {
    return this->id;
}

Direccion Empresa::getDireccion() const {
    return this->direccion;
}

Empresa::~Empresa() {
}

