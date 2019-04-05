#include "../headers/Gato.h"
#include "../../datatypes/headers/TipoPelo.h"
Gato::Gato(TipoPelo pelo) : Mascota(string NombreMascota, Genero& Genero, float Peso) {
  this->TipoPelo = pelo;
}
TipoPelo Gato::getTipoPelo(){
  return this->Pelo;
}
