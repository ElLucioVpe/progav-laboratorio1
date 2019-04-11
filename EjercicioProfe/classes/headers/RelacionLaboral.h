#ifndef RELACIONLABORAL_H
#define RELACIONLABORAL_H

#include "Empresa.h"
#include "../../datatypes/headers/Fecha.h"

class RelacionLaboral {
public:
    RelacionLaboral(Empresa* empresa, float sueldo);
    
    Empresa* getEmpresa() const;
    Fecha* getFechaDesvinculacion() const;
    float getSueldo() const;
    float getSueldoLiquido() const;
    
    void setEmpresa(Empresa*);
    void setFechaDesvinculacion(Fecha*);
    void setSueldo(float);

    virtual ~RelacionLaboral();
private:
    Empresa* empresa;
    Fecha* fechaDesvinculacion;
    float sueldo;
};

#endif /* RELACIONLABORAL_H */

