#ifndef EMPRESA_H
#define EMPRESA_H

#include "../../datatypes/headers/Direccion.h"
#include "../../datatypes/headers/DtEmpresa.h"

class Empresa {
public:
    Empresa(string, const Direccion&);
    string getId() const;
    Direccion getDireccion() const;
    
    virtual float getDescuento() = 0;
    virtual DtEmpresa* getDtEmpresa() = 0;
    
    virtual ~Empresa();
private:
    string id;
    Direccion direccion;
};

#endif /* EMPRESA_H */

