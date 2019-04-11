#ifndef CONSULTA_H
#define CONSULTA_H

#include <string>
#include "../../datatypes/headers/DtFecha.h"

class Consulta {
	private:
		DtFecha FechaConsulta;
		std::string Motivo;
	public:
		Consulta(DtFecha &_fechaConsulta, std::string _motivo, DtFecha fechaConsulta);
		DtFecha getFechaConsulta() const;
		std::string getMotivo() const;
		
		void setFechaConsulta(DtFecha& fechaConsulta);
		void setMotivo(std::string motivo);
		
		virtual ~Consulta();
};

#endif /* CONSULTA_H */
