#ifndef EMPRESAEXTRANJERA_H
#define EMPRESAEXTRANJERA_H

#include "Empresa.h"

class EmpresaExtranjera : public Empresa {
public:
    EmpresaExtranjera(string id, const Direccion& direccion, string nombreFantacia);
    
    string getNombreFantacia() const;
    float getDescuento();
    virtual DtEmpresa* getDtEmpresa();
    
    virtual ~EmpresaExtranjera();
private:
    string nombreFantacia;
};

#endif /* DTEMPRESAEXTRANJERA_H */