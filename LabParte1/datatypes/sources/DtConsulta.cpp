#include "../headers/DtConsulta.h"

DtConsulta::DtConsulta(string motivo, Fecha& fechaConsulta) : fecha(fecha){
this->motivo = motivo;
}

string DtConsulta::getMotivo() const{
  return this->motivo;
}
Fecha DtConsulta::getFechaConsulta() const {
  return this->fecha;
}
DtConsulta::~DtConsulta(){
}
