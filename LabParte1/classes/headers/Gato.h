#ifndef GATO_H
#define GATO_H
#include "Mascota.h"
#include "../../datatypes/headers/TipoPelo.h"
class Gato : public Mascota {
  public:
    Gato(TipoPelo Tipopelo);
    TipoPelo getTipoPelo();
  private:
    TipoPelo pelo;
}


#endif
