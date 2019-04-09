#ifndef DTPERRO_H
#define DTPERRO_H

#include <string>
#include "DtMascota.h"
#include "TipoPelo.h"
#include "DtFecha.h"

class DtGato : public DtMascota {
public:
    DtGato (TipoPelo Tipo, std::string NombreMascota, Genero& Genero, float Peso);
    TipoPelo getPelo() const;

private:
    TipoPelo Tipo;
};

#endif /* DTGATO_H */
