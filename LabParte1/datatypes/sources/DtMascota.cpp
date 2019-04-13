#include "../headers/DtMascota.h"

DtMascota::DtMascota(std::string _nombre, const Genero & _genero, float _peso) : genero(_genero){
  this->nombre = _nombre;
  this->peso = _peso;
}

std::string DtMascota::getNombre() const {
  return this->nombre;
}

Genero DtMascota::getGenero() const {
  return this->genero;
}

float DtMascota::getPeso() const {
  return this->peso;
}

float DtMascota::getRacionDiaria() const {
  return this->racionDiaria;
}

DtMascota::~DtMascota() {
}


//Overload de <<
std::ostream& operator<<(std::ostream &o, DtMascota* dtM) {
    o << std::string("Nombre: ") << dtM->getNombre() << std::string("\n");
    
    if(dtM->getGenero()==Genero::Macho){
		o << std::string("Genero: Macho")<< std::string("\n");
	}else{
			o << std::string("Genero: Hembra")<< std::string("\n");
	}
	
    //o << std::string("Genero: ") << dtM->getGenero() << std::string("\n");
    o << std::string("Peso: ") <<  std::to_string (dtM->getPeso());

    return o;
}

