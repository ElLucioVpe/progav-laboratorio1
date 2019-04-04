#ifndef DTCONSULTA_H
#define DTCONSULTA_H

#include "../headers/Fecha.h"

class DtConsulta {
public:
    DtConsulta(DtFecha, std::string);

  DtFecha getFechaConsulta() const;
  std::string getMotivo() const;

   virutal ~DtConsulta();

 private:
   DtFecha fecha;
   std::string motivo;
};
