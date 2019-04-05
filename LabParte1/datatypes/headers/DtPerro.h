#ifndef DTPERRO_H
#define DTPERRO_H

#include "DtMascota.h"
#include "RazaPerro.h"

class DtPerro : public DtMascota {
public:
      DtPerro (string Ci, string Nombre, Fecha& FechaIngreso, string NombreMascota, Genero& Genero, float Peso, RazaPerro& raza, boolean VacunaCachorro);
      RazaPerro getRaza(); const
      boolean getVacunaCachorro(); const
}
  Private:
  RazaPerro Raza;
  Boolean VacunaCachorro;

}
