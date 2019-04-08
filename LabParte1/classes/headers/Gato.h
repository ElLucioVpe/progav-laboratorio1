#ifndef GATO_H
#define GATO_H

#include "Mascota.h"
#include "../../datatypes/headers/TipoPelo.h"

class Gato : public Mascota {
  public:
    Gato(TipoPelo _tp, std::string _nombre, Genero _genero, float _peso);
    TipoPelo getTipoPelo();
  private:
    TipoPelo Pelo;
};


#endif
