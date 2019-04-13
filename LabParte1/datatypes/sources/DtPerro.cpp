#include "../headers/DtPerro.h"
//#include "RazaPerro.h"

DtPerro::DtPerro(RazaPerro _Raza, bool _vacunaCachorro, std::string NombreMascota, const Genero& Genero, float Peso) : DtMascota(NombreMascota, Genero, Peso) {
	this->Raza = _Raza;
	this->VacunaCachorro = _vacunaCachorro;
}

RazaPerro DtPerro::getRaza() const {
	return this->Raza;
}

bool DtPerro::getVacunaCachorro() const {
	return this->VacunaCachorro;
}

DtPerro::~DtPerro() {
}

/*
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
*/
