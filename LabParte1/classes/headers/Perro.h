#ifndef PERRO_H
#define PERRO_H

#include "Mascota.h"
#include "../../datatypes/headers/RazaPerro.h"
#include "../../datatypes/headers/DtPerro.h"

class Perro : public Mascota {
	public:
		Perro(RazaPerro _Raza, bool _VacunaCachorro, std::string _NombreMascota, const Genero& _Genero, float _Peso);
		RazaPerro getRaza();
		bool getVacunaCachorro();
		virtual std::ostream& operator<<(std::ostream &o, DtPerro* dtP);
	private:
		RazaPerro Raza;
		bool VacunaCachorro;
};

#endif /* PERRO_H */
