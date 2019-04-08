#ifndef SOCIO_H
#define SOCIO_H

#include <string>

#include "../../datatypes/headers/DtFecha.h"
#include "../../datatypes/headers/DtConsulta.h"
#include "../../datatypes/headers/DtMascota.h"
#include "Mascota.h"
#include "Consulta.h"

class Socio {
public:
	Socio(std::string ci, std::string nombre, const DtFecha & fechaIngreso);
	std::string getCi() const;
	std::string getNombre() const;
    DtFecha getFechaIngreso() const;

	void agregarMascota(const Mascota&);

	virtual ~Socio();
private:
	std::string Ci;
	std::string Nombre;
    DtFecha FechaIngreso;
	int CantidadMascotas = 0;
	Consulta** Consultas;
	Mascota** Mascotas;
};

#endif /* SOCIO_H */
