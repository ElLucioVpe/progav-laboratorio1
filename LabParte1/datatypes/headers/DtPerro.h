#ifndef DTPERRO_H
#define DTPERRO_H

#include <string>
#include "DtMascota.h"
#include "RazaPerro.h"
#include "DtFecha.h"

class DtPerro : public DtMascota {
public:
      DtPerro (std::string Ci, std::string Nombre, DtFecha & FechaIngreso const, std::string NombreMascota, Genero & Genero const, float Peso, RazaPerro& raza const, boolean VacunaCachorro);
      RazaPerro getRaza() const;
      bool getVacunaCachorro() const;
private:
  RazaPerro Raza;
  bool VacunaCachorro;

};

#endif /* DTPERRO_H */

