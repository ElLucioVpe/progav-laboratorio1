#ifndef DTPERRO_H
#define DTPERRO_H

//#include <string>
#include "DtMascota.h"
#include "RazaPerro.h"
#include "DtFecha.h"

class DtPerro : public DtMascota {
  public:
    DtPerro (const RazaPerro raza, bool vacunaCachorro, std::string NombreMascota, const Genero& Genero, float Peso);
    RazaPerro getRaza() const;
    bool getVacunaCachorro() const;
    float obtenerRacionDiaria();

    virtual ~DtPerro();
    friend std::ostream& operator<<(std::ostream &o, DtPerro* dtP);
  private:
    RazaPerro Raza;
    bool VacunaCachorro;
};

#endif /* DTPERRO_H */
