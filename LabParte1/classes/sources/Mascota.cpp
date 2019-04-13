#include "../headers/Mascota.h"

Mascota::Mascota(std::string _nombre, const Genero& _genero, float _peso) : genero(_genero) {
	this->Nombre = _nombre;
	this->Peso = _peso;
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

