#ifndef DTCONSULTA_H
#define DTCONSULTA_H

#include "DtFecha.h"

class DtConsulta {
   public:
      DtConsulta(DtFecha, std::string);
      DtFecha getFechaConsulta() const;
      std::string getMotivo() const;

      virtual ~DtConsulta();
   private:
      DtFecha fecha;
      std::string motivo;
};

#endif /* DTCONSULTA_H */