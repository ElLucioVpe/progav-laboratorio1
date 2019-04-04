#ifndef PERRO_H
#define PERRO_H

#include "Mascota.h"
#include "../../datatypes/headers/RazaPerro.h"

class Perro : public Mascota {
public:
	Perro(string Ci, string Nombre, Fecha& FechaIngreso, string NombreMascota, Genero& Genero, float Peso, RazaPerro raza, boolean VacunaCachorro);
	RazaPerro getRaza();
	boolean getVacunaCachorro();
private:
	RazaPerro raza;
	boolean VacunaCachorro;
}
