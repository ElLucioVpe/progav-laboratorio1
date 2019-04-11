#include "../headers/DtEmpleado.h"
#include <sstream>

DtEmpleado::DtEmpleado(){
    
}

DtEmpleado::DtEmpleado(string ci, string nombre, string apellido, const Direccion& direccion, float sueldo) 
    : direccion(direccion) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->ci = ci;
    this->sueldo = sueldo;
}

string DtEmpleado::getNombre() const {
    return this->nombre;
}

string DtEmpleado::getApellido() const {
    return this->apellido;
}

Direccion DtEmpleado::getDireccion() const {
    return this->direccion;
}

string DtEmpleado::getCI() const {
    return this->ci;
}
    
float DtEmpleado::getSueldo() const {
    return this->sueldo;
}

DtEmpleado::~DtEmpleado() {
}

std::string fromFloatToString (float number){
    std::ostringstream buff;
    buff<<number;
    return buff.str();   
}

std::ostream& operator<<(std::ostream &o, const DtEmpleado& de) {
    o << string("ci: ") << de.getCI() << string(" - ");
    o << de.getNombre() << string(" ") << de.getApellido() << string(" - ");
    o << de.getDireccion() << string(" - ");
    o << string("Sueldo: ") <<  fromFloatToString(de.getSueldo());
    return o;
}