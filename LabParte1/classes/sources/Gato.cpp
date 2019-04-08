#include <Genero.h>
#include "../headers/Gato.h"

Gato::Gato(TipoPelo _tp, std::string _nombre, Genero _genero, float _peso) : Mascota(_nombre, _genero, _peso) {
  this->Pelo = _tp;
}

TipoPelo Gato::getTipoPelo(){
  return this->Pelo;
}
