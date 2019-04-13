#include "../headers/Gato.h"

Gato::Gato(TipoPelo _tp, std::string _nombre, const Genero _genero, float _peso) : Mascota(_nombre, _genero, _peso) {
  this->Pelo = _tp;
}

TipoPelo Gato::getTipoPelo(){
  return this->Pelo;
}


//Overload de <<
std::ostream& operator<<(std::ostream &o, DtGato* dtG) {
    o << std::string("Nombre: ") << dtG->getNombre() << std::string("\n");
    
    if(dtG->getGenero()==Genero::Macho){
		o << std::string("Genero: Macho")<< std::string("\n");
	}else{
			o << std::string("Genero: Hembra")<< std::string("\n");
	}
	
    //o << std::string("Genero: ") << dtM->getGenero() << std::string("\n");
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

