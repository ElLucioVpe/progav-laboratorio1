#ifndef EMPRESANACIONAL_H
#define EMPRESANACIONAL_H

#include "Empresa.h"

class EmpresaNacional : public Empresa {
public:
    EmpresaNacional(string id, const Direccion& direccion, string rut);
    
    string getRut() const;
    float getDescuento();
    virtual DtEmpresa* getDtEmpresa();

    virtual ~EmpresaNacional();
private:
    string rut;
};

#endif /* EMPRESANACIONAL_H */

