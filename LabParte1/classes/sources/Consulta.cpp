#include "../headers/Consulta.h"
#include <stdexcept>

Consulta::Consulta (DtFecha& fechaConsulta, std::string motivo){
	this->fechaConsulta = fechaConsulta;
	this->motivo = motivo;
}
	
DtFecha Consulta::getFechaConsulta() const {
	return this->fechaConsulta;
}
string Consulta::getMotivo() const {
	return this->motivo;
}
	
void Consulta::setFechaConsulta(DtFecha& fechaConsulta) const {
	this->fechaConsulta = fechaConsulta;
}

void Consulta::setMotivo(std::string motivo) const{
	this->motivo = motivo;
}
	
Consulta::~Consulta(){
	
}
