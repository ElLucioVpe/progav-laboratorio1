#ifndef PERRO_H
#define PERRO_H

#include "Mascota.h"
#include "../../datatypes/headers/RazaPerro.h"

class Perro : public Mascota {
	public:
		Perro(RazaPerro raza, bool VacunaCachorro, std::string NombreMascota, Genero& Genero, float Peso);
		RazaPerro getRaza();
		bool getVacunaCachorro();
	private:
		RazaPerro Raza;
		bool VacunaCachorro;
};

#endif /* PERRO_H */
