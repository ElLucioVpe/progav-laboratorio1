#ifndef PERRO_H
#define PERRO_H

#include "Mascota.h"
#include "../../datatypes/headers/RazaPerro.h"

class Perro : public Mascota {
public:
	Perro(std::string Ci, std::string Nombre, Fecha& FechaIngreso, std::string NombreMascota, Genero& Genero, float Peso, RazaPerro raza, boolean VacunaCachorro);
	RazaPerro getRaza();
	boolean getVacunaCachorro();

	virtual ~Perro();
private:
	RazaPerro raza;
	boolean VacunaCachorro;
}
