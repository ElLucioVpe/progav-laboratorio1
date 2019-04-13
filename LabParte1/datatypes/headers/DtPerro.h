#ifndef DTPERRO_H
#define DTPERRO_H

//#include <string>
#include "DtMascota.h"
#include "RazaPerro.h"
#include "DtFecha.h"

class DtPerro : public DtMascota {
  public:
    DtPerro (RazaPerro raza, bool vacunaCachorro, std::string NombreMascota, const Genero& Genero, float Peso);
    RazaPerro getRaza() const;
    bool getVacunaCachorro() const;
    
    virtual ~DtPerro();
  private:
    RazaPerro Raza;
    bool VacunaCachorro;
};

#endif /* DTPERRO_H */
