#ifndef DTMASCOTA_H
#define DTMASCOTA_H

#include <string>
#include "Genero.h"


class DtMascota {
  public:
    DtMascota(std::string _nombre, const Genero & _genero, float _peso);
    std::string getNombre () const;
    Genero getGenero() const;
    float getPeso() const;
    float getRacionDiaria() const;
  private:
    std::string nombre;
    Genero genero;
    float peso;
    float racionDiaria;
};

#endif
