#include "../headers/Empleado.h"
#include <cstdlib>

Empleado::Empleado( string ci, string nombre, string apellido, Direccion& direccion) 
    : direccion(direccion) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->ci = ci;
    this->relacionesLaborales = new RelacionLaboral*[MAX_RELACIONES_LABORALES];
    this->cantidadRelacionesLaborales = 0;
}

string Empleado::getNombre() const {
    return this->nombre;
}

string Empleado::getApellido() const {
    return this->apellido;
}

Direccion Empleado::getDireccion() const {
    return this->direccion;
}

float Empleado::getSalarioLiquido() const {
    float sueldo = 0;
    
    for(int i = 0; i < this->cantidadRelacionesLaborales; i++) {
        if (relacionesLaborales[i]->getFechaDesvinculacion() == NULL) {
            sueldo += this->relacionesLaborales[i]->getSueldoLiquido();   
        }
    }

    return sueldo;
}

DtEmpleado Empleado::getDataEmpleado() const {
    return DtEmpleado(
        this->ci,
        this->nombre,
        this->apellido,
        this->direccion,
        this->getSalarioLiquido()
    );
}

RelacionLaboral** Empleado::getRelacionesLaborales() const {
    return this->relacionesLaborales;
}

int Empleado::getCantidadRelacionesLaborales() const {
    return this->cantidadRelacionesLaborales;
}

string Empleado::getCI() const {
    return this->ci;
}

void Empleado::setNombre(string nombre) {
    this-> nombre = nombre;
}

void Empleado::setApellido(string apellido) {
    this->apellido = apellido;
}

void Empleado::setDireccion(Direccion& direccion) {
    this->direccion = direccion;
}

void Empleado::setCI(string ci) {
    this->ci = ci;
}

void Empleado::setRelacionesLaborales(RelacionLaboral** relacionesLaborales, int cantidad) {
    this->relacionesLaborales = relacionesLaborales;
    this->cantidadRelacionesLaborales = cantidad;
}
    
void Empleado::agregarRelacionLaboral(RelacionLaboral* rl) {
    if (this->cantidadRelacionesLaborales == MAX_RELACIONES_LABORALES) {
        throw std::invalid_argument("El empleado no puede tener mas relaciones laborales");
    }
    
    this->relacionesLaborales[this->cantidadRelacionesLaborales] = rl;
    this->cantidadRelacionesLaborales++;
}

void Empleado::finalizarRelacionLaboral(Empresa* empresa, Fecha fecha) {
    for(int i = 0; i < this->cantidadRelacionesLaborales; i++) {
        if (this->relacionesLaborales[i]->getEmpresa() == empresa) {
            this->relacionesLaborales[i]->setFechaDesvinculacion(
                    new Fecha(fecha.getDia(), fecha.getMes(), fecha.getAnio())
            );
        }
    }
}

DtEmpresa** Empleado::obtenerEmpresasActivas(int& cantidadEmpresasActivas) {
    DtEmpresa** empresas = new DtEmpresa* [this->cantidadRelacionesLaborales];
    cantidadEmpresasActivas = 0;

    for(int i = 0; i < this->cantidadRelacionesLaborales; i++) {
        if (relacionesLaborales[i]->getFechaDesvinculacion() == NULL) {
            empresas[cantidadEmpresasActivas] = this->relacionesLaborales[i]->getEmpresa()->getDtEmpresa();
            cantidadEmpresasActivas++;
        }
    }
    
    return empresas;
}

Empleado::~Empleado() {
    delete [] relacionesLaborales;
}

