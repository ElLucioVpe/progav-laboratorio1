#ifndef SOCIO_H
#define SOCIO_H

#include "../../datatypes/headers/Fecha.h"
#include "../../datatypes/headers/Consulta.h"
#include "../../datatypes/headers/Mascotas.h"

class Socio {
public:
	Socio(std::string, std::string, const Fecha&);
	std::string getCi() const;
	std::string getNombre() const;
	Fecha getFechaIngreso() const;

	virtual ~Socio();
private:
	std::string Ci;
	std::string Nombre;
	Fecha FechaIngreso;
	Consulta** consultas;
	Mascota** mascotas;
};

#endif /* SOCIO_H */
