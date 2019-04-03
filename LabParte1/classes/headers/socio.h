#ifndef SOCIO_H
#define SOCIO_H

#include "../../datatypes/headers/Fecha.h"

class Socio {
public:
	Socio(string, string, const Fecha&);
	string getCi() const;
	string getNombre() const;
	Fecha getFechaIngreso() const;
private:
	string Ci;
	string Nombre;
	Fecha FechaIngreso;
}

#endif /* EMPRESA_H */