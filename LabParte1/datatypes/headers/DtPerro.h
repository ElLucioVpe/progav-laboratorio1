#ifndef DTPERRO_H
#define DTPERRO_H

#include "DtMascota.h"
#include "RazaPerro.h"

class DtPerro : public DtMascota {
public:
      DtPerro (std::string Ci, std::string Nombre, Fecha& FechaIngreso const, std::string NombreMascota, Genero& Genero const, float Peso, RazaPerro& raza const, boolean VacunaCachorro);
      RazaPerro getRaza(); const
      boolean getVacunaCachorro(); const
}
  Private:
  RazaPerro Raza;
  Boolean VacunaCachorro;

}

#endif /* DTPERRO_H */

