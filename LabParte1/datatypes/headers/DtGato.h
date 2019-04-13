#ifndef DTGATO_H
#define DTGATO_H

#include <string>
#include "DtMascota.h"
#include "TipoPelo.h"
#include "DtFecha.h"

class DtGato : public DtMascota {
    public:
        DtGato (TipoPelo Tipo, std::string NombreMascota, const Genero& Genero, float Peso);
        TipoPelo getPelo() const;
		
		virtual ~DtGato();
    private:
        TipoPelo Tipo;
};

#endif /* DTGATO_H */
