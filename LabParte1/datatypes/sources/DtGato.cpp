#include "../headers/DtGato.h"

DtGato::DtGato(TipoPelo _tipo,std::string NombreMascota, const Genero& Genero, float Peso) : DtMascota(NombreMascota, Genero, Peso) {
	this->Tipo = _tipo;
}

TipoPelo DtGato::getPelo() const{
  return this->Tipo;
}

DtGato::~DtGato() {
}



//Overload de <<
std::ostream& operator<<(std::ostream &o, DtGato* dtG) {

    o << std::string("Nombre: ") << dtG->getNombre() << std::string("\n");
    
    if(dtG->getGenero()==Genero::Macho){
		o << std::string("Genero: Macho")<< std::string("\n");
	}else{
        o << std::string("Genero: Hembra")<< std::string("\n");
	}
	
    o << std::string("Peso: ") <<  std::to_string (dtG->getPeso()) << std::string("\n");
    
     if(dtG->getPelo()==TipoPelo::Corto){
		o << std::string("Tipo de Pelo: Corto")<< std::string("\n");
	}else if(dtG->getPelo()==TipoPelo::Mediano){
         o << std::string("Tipo de Pelo: Mediano")<< std::string("\n");
	}else{
         o << std::string("Tipo de Pelo: Largo")<< std::string("\n");
	}
     
    return o;
}

