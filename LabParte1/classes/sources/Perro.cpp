#include "../headers/Perro.h"
#include "../../datatypes/headers/RazaPerro.h"

Perro::Perro(RazaPerro _Raza, bool _VacunaCachorro, std::string _NombreMascota, const Genero& _Genero, float _Peso) : Mascota(_NombreMascota, _Genero, _Peso) {
	this->Raza = _Raza;
	this->VacunaCachorro = _VacunaCachorro;
}

RazaPerro Perro::getRaza() {
	return this->Raza;
}

bool Perro::getVacunaCachorro() {
	return this->VacunaCachorro;
}

float Mascota::obtenerRacionDiaria() {
    return 0;
}

//Overload de <<
std::ostream& operator<<(std::ostream &o, DtPerro* dtP) {
    o << std::string("Nombre: ") << dtP->getNombre() << std::string("\n");
    
    if(dtP->getGenero()==Genero::Macho){
		o << std::string("Genero: Macho")<< std::string("\n");
	}else{
			o << std::string("Genero: Hembra")<< std::string("\n");
	}
	
    o << std::string("Peso: ") <<  std::to_string (dtP->getPeso()) << std::string("\n");
    
//Razas
switch(dtP->getRaza()){
	case RazaPerro::Labrador:{
			o << std::string("Raza: Labrador")<< std::string("\n");
			break;
		}
		
	case RazaPerro::Ovejero:{
		o << std::string("Raza: Ovejero")<< std::string("\n");
		break;
	}
	
	case RazaPerro::Bulldog:{
		o << std::string("Raza: Bulldog")<< std::string("\n");
		break;
	}
	
	case RazaPerro::Collie:{
		o << std::string("Raza: Collie")<< std::string("\n");
		break;
	}
	
	case RazaPerro::Pekines:{
		o << std::string("Raza: Pekines")<< std::string("\n");
		break;
	}
	
	case RazaPerro::Otro:{
		o << std::string("Raza: Otro")<< std::string("\n");
		break;
	}
			
}

//Vacunas
if(dtP->getVacunaCachorro()==true){
	o << std::string("Vacunado: Si")<< std::string("\n");
}else{
	o << std::string("Vacunado: No")<< std::string("\n");
}
//*Vacunas
	
    return o;
}
