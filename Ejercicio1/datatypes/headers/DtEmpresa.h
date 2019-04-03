#ifndef DTEMPRESA_H
#define DTEMPRESA_H

#include "Direccion.h"

class DtEmpresa {
public:
    DtEmpresa(string, const Direccion&);
    string getId() const;
    Direccion getDireccion() const;
    virtual ~DtEmpresa();
private:
    string id;
    Direccion direccion;
};

#endif /* DTEMPRESA_H */

