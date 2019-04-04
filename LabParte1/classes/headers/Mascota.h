#ifndef MASCOTA_H
#define MASCOTA_H

#include "../../datatypes/headers/Genero.h"

class Mascota {
public:
	Mascota(std::string, const Genero&, float);
	virtual float obtenerRacionDiaria();
	
private:
	std::string Nombre;
	Genero genero;
	float Peso;
};

#endif /* MASCOTA_H */
