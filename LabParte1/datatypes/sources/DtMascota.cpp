#include "../headers/DtMascota.h"

DtMascota::DtMascota(string nombre, const Genero& genero, float peso, float racionDiaria) : genero(genero){
  this->nombre = nombre;
  this->peso = peso;
  this->racionDiaria = racionDiaria;
}
string DtMascota::getNombre() const {
  return this->nombre;
}
Genero DtMascota::getGenero() const {
  return this->Genero;
}
float DtMascota::getPeso() const {
  return this->Peso;
}
float DtMascota::getRacionDiaria() const {
  return this->racionDiaria;
}

DtMascota::~DtMascota() {
}
