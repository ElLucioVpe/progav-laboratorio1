#ifndef CONSULTA_H
#define CONSULTA_H

#include "../../datatypes/headers/DtFecha.h"

class Consulta {
private:
	DtFecha fechaConsulta;
	string motivo;
public:
	Consulta(const DtFecha&, string);
	DtFecha getFechaConsulta() const;
	string getMotivo() const;
	
	void setFechaConsulta() const;
	void setMotivo() const;
	
	virtual ~Consulta();
};

#endif /* CONSULTA_H */
