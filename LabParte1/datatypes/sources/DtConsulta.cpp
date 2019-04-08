#include "../headers/DtConsulta.h"

DtConsulta::DtConsulta(std::string motivo, Fecha & fechaConsulta) : fecha(fecha){
    this->motivo = motivo;
}

std::string DtConsulta::getMotivo() const{
  return this->motivo;
}

DtFecha DtConsulta::getFechaConsulta() const {
  return this->fecha;
}

DtConsulta::~DtConsulta() {

}
