#ifndef DTEMPLEADO_H
#define DTEMPLEADO_H

#include "../headers/Direccion.h"

class DtEmpleado {
public:
    DtEmpleado();
    DtEmpleado(string, string, string, const Direccion &, float);

    string getNombre() const;
    string getApellido() const;
    Direccion getDireccion() const;
    string getCI() const;
    float getSueldo() const;

    virtual ~DtEmpleado();
private:
    string ci;
    string nombre;
    string apellido;
    Direccion direccion;
    float sueldo;
};

std::ostream& operator<<(std::ostream &o, const DtEmpleado& de);
#endif /* EMPLEADO_H */

