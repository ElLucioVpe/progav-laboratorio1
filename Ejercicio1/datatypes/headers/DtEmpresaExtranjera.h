#ifndef DTEMPRESAEXTRANJERA_H
#define DTEMPRESAEXTRANJERA_H

#include "DtEmpresa.h"

class DtEmpresaExtranjera : public DtEmpresa {
public:
    DtEmpresaExtranjera(string id, const Direccion& direccion, string nombreFantacia);
    string getNombreFantacia() const;
    virtual ~DtEmpresaExtranjera();
private:
    string nombreFantacia;
};

std::ostream& operator<<(std::ostream &o, DtEmpresaExtranjera* dtee);
#endif /* DTEMPRESAEXTRANJERA_H */