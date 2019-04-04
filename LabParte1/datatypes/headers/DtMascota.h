#ifndef DTMASCOTA_H
#define DTMASCOTA_H

#include "Genero.h"


class DtMascota {
public:
  DtMascota(std::string, const Genero&, float, float );
  std::string getNombre () const;
  Genero getGenero() const;
  float getPeso() const;
  float getRacionDiaria const;
private:
  std::string nombre;
  Genero genero;
  float peso;
  float racionDiaria;
}
#endif
