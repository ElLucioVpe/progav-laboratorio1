#ifndef SOCIO_H
#define SOCIO_H

#include "../../datatypes/headers/Fecha.h"
#include "../../datatypes/headers/Consulta.h"
#include "../../datatypes/headers/Mascotas.h"

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
	Consulta** consultas;
	Mascota** mascotas;
};

#endif /* SOCIO_H */
