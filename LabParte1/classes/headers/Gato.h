#ifndef GATO_H
#define GATO_H

#include "Mascota.h"
#include "../../datatypes/headers/TipoPelo.h"
#include "../../datatypes/headers/DtGato.h"

class Gato : public Mascota {
  public:
    Gato(TipoPelo _tp, std::string _nombre, const Genero _genero, float _peso);
    TipoPelo getTipoPelo();
    
  private:
    TipoPelo Pelo;
};


#endif /* GATO_H */
