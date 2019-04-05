#ifndef SOCIO_H
#define SOCIO_H

#include "../../datatypes/headers/Fecha.h"
#include "../../datatypes/headers/Consulta.h"
#include "../../datatypes/headers/Mascota.h"

class Socio {
public:
	Socio(std::string, std::string, const Fecha&, Mascota&);
	std::string getCi() const;
	std::string getNombre() const;
	Fecha getFechaIngreso() const;

	void agregarMascota(const Mascota&);

	virtual ~Socio();
private:
	std::string Ci;
	std::string Nombre;
	Fecha FechaIngreso;
	int CantidadMascotas = 0;
	Consulta** Consultas;
	Mascota** Mascotas;
};

#endif /* SOCIO_H */
