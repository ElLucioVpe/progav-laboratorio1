#include "../headers/RelacionLaboral.h"

RelacionLaboral::RelacionLaboral(Empresa* empresa, float sueldo) {
    this->empresa = empresa;
    this->sueldo = sueldo;
    this->fechaDesvinculacion = NULL;
}

void RelacionLaboral::setEmpresa(Empresa* empresa) {
    this->empresa = empresa;
}

Fecha* RelacionLaboral::getFechaDesvinculacion() const {
    return this->fechaDesvinculacion;
}

void RelacionLaboral::setFechaDesvinculacion(Fecha* fechaDesvinculacion) {
    if (this->fechaDesvinculacion != NULL) {
        delete this->fechaDesvinculacion;
    }
    
    this->fechaDesvinculacion = fechaDesvinculacion;
}

Empresa* RelacionLaboral::getEmpresa() const {
    return this->empresa;
}

float RelacionLaboral::getSueldo() const {
    return this->sueldo;
}

void RelacionLaboral::setSueldo(float sueldo) {
    this->sueldo = sueldo;
}

float RelacionLaboral::getSueldoLiquido() const {
    return this->sueldo * (1 - this->empresa->getDescuento());
}

RelacionLaboral::~RelacionLaboral() {
    if (this->fechaDesvinculacion != NULL) {
        delete this->fechaDesvinculacion;
    }
}
