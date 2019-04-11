#ifndef PERRO_H
#define PERRO_H

#include "../../datatypes/headers/RazaPerro.h"
#include "../../datatypes/headers/Genero.h"
#include "Mascota.h"

class Perro : public Mascota {
	public:
		Perro(RazaPerro raza, bool VacunaCachorro, std::string NombreMascota, Genero& Genero, float Peso);
		RazaPerro getRaza();
		bool getVacunaCachorro();

		virtual ~Perro();
	private:
		RazaPerro Raza;
		bool VacunaCachorro;
};

#endif /* PERRO_H */
