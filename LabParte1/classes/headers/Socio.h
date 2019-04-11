#ifndef SOCIO_H
#define SOCIO_H

//#include <string>

#include "../../datatypes/headers/DtFecha.h"
#include "../../datatypes/headers/DtConsulta.h"
#include "../../datatypes/headers/DtMascota.h"
#include "Mascota.h"
#include "Consulta.h"

class Socio {
	public:
		Socio(std::string ci, std::string nombre, const DtFecha & fechaIngreso);
		std::string getCi() const;
		std::string getNombre() const;

		int getCantidadMascotas() const;
		DtFecha getFechaIngreso() const;
		Consulta** getConsulta();
		Mascota** getMascota();

		void setMascota(Mascota** mascotas, int CantidadMascotas);
		void setConsulta(Consulta** consultas, int CantidadConsultas);

		void agregarMascota(Mascota);
	
		virtual ~Socio();
		
	private:
		std::string Ci;
		std::string Nombre;
		DtFecha FechaIngreso;
		int CantidadMascotas;
		Consulta** Consultas;
		Mascota** Mascotas;
		int CantidadConsultas;
		static const int MAX_MASCOTAS = 10;
		static const int MAX_CONSULTAS = 20;
};

#endif /* SOCIO_H */
