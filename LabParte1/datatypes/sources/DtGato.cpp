#include "../headers/DtGato.h"
#include "TipoPelo.h"

DtGato::DtGato(TipoPelo _tipo,std::string NombreMascota, Genero& Genero, float Peso) : DtMascota(NombreMascota, Genero, Peso) {
	this->Tipo = _tipo;
}

TipoPelo DtGato::getPelo() const{
  return this->Tipo;
}