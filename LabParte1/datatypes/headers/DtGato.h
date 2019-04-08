#ifndef DTPERRO_H
#define DTPERRO_H

#include <string>
#include "DtMascota.h"
#include "TipoPelo.h"
#include "DtFecha.h"

class DtGato : public DtMascota {
public:
<<<<<<< Updated upstream
    DtGato (TipoPelo Tipo, std::string NombreMascota, Genero& Genero, float Peso);
    TipoPelo getPelo(); const;

private:
    DtPerro (std::string NombreMascota, Genero& Genero const, float Peso, TipoPelo& Tipo);
      TipoPelo getPelo(); const;
}

Private:
>>>>>>> Stashed changes
TipoPelo tipo;

};

#endif /* DTGATO_H */
