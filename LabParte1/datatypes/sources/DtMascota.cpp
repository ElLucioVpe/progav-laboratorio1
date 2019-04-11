#include "../headers/DtMascota.h"

DtMascota::DtMascota(std::string _nombre, const Genero & _genero, float _peso) : genero(_genero){
  this->nombre = _nombre;
  this->peso = _peso;
}

std::string DtMascota::getNombre() const {
  return this->nombre;
}

Genero& DtMascota::getGenero() {
  return this->genero;
}

float DtMascota::getPeso() const {
  return this->peso;
}

float DtMascota::getRacionDiaria() const {
  return this->racionDiaria;
}
