#ifndef DTEMPRESANACIONAL_H
#define DTEMPRESANACIONAL_H

#include "DtEmpresa.h"

class DtEmpresaNacional : public DtEmpresa {
public:
    DtEmpresaNacional(string id, const Direccion& direccion, string rut);
    string getRut() const;
    virtual ~DtEmpresaNacional();
private:
    string rut;
};

std::ostream& operator<<(std::ostream &o, DtEmpresaNacional* dten);
#endif /* DTEMPRESANACIONAL_H */

