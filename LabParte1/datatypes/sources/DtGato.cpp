#include "../headers/DtGato.h"

DtGato::DtGato(TipoPelo _tipo,std::string NombreMascota, const Genero& Genero, float Peso) : DtMascota(NombreMascota, Genero, Peso) {
	this->Tipo = _tipo;
}

TipoPelo DtGato::getPelo() const{
  return this->Tipo;
}

DtGato::~DtGato() {
}
