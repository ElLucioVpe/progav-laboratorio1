#ifndef DTPERRO_H
#define DTPERRO_H

#include <string>
#include "DtMascota.h"
#include "RazaPerro.h"
#include "DtFecha.h"

class DtPerro : public DtMascota {
public:
<<<<<<< Updated upstream
      DtPerro (RazaPerro raza, bool vacunaCachorro, std::string NombreMascota, Genero& Genero, float Peso);
      RazaPerro getRaza() const;
      bool getVacunaCachorro() const;
private:
=======
      DtPerro (std::string NombreMascota, Genero& Genero const, float Peso, RazaPerro& raza const, boolean VacunaCachorro);
      RazaPerro getRaza(); const
      boolean getVacunaCachorro(); const
}
  Private:
>>>>>>> Stashed changes
  RazaPerro Raza;
  bool VacunaCachorro;

};

#endif /* DTPERRO_H */
