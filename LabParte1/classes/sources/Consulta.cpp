#include "../headers/Consulta.h"
#include <stdexcept>

Consulta::Consulta(DtFecha &_fechaConsulta, std::string _motivo, DtFecha fechaConsulta) : FechaConsulta(fechaConsulta) {
	this->FechaConsulta = _fechaConsulta;
	this->Motivo = _motivo;
}
	
DtFecha Consulta::getFechaConsulta() const {
	return this->FechaConsulta;
}

std::string Consulta::getMotivo() const {
	return this->Motivo;
}
	
void Consulta::setFechaConsulta(DtFecha& fechaConsulta) {
	this->FechaConsulta = fechaConsulta;
}

void Consulta::setMotivo(std::string motivo) {
	this->Motivo = motivo;
}
	
Consulta::~Consulta(){
	
}
