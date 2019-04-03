#ifndef DTCONSULTA_H
#define DTCONSULTA_H

#include "../headers/Fecha.h"

class DtConsulta {
public:
    DtConsulta(DtFecha, string);

  DtFecha getFechaConsulta() const;
  string getMotivo() const;

   virutal ~DtConsulta();

 private:
   DtFecha fecha;
   string motivo;
};
