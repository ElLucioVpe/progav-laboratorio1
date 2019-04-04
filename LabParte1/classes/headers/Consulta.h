#ifndef CONSULTA_H
#define CONSULTA_H

#include "../../datatypes/headers/DtFecha.h"

class Consulta {
private:
	DtFecha fechaConsulta;
	std::string motivo;
public:
	Consulta(const DtFecha&, std::string);
	DtFecha getFechaConsulta() const;
	std::string getMotivo() const;
	
	void setFechaConsulta() const;
	void setMotivo() const;
	
	virtual ~Consulta();
};

#endif /* CONSULTA_H */
