#ifndef MASCOTA_H
#define MASCOTA_H

#include <string>
#include "../../datatypes/headers/Genero.h"

class Mascota {
	public:
		Mascota(std::string _nombre, const Genero& _genero, float _peso);
		virtual float obtenerRacionDiaria();
	private:
		std::string Nombre;
		Genero genero;
		float Peso;
};

#endif /* MASCOTA_H */
