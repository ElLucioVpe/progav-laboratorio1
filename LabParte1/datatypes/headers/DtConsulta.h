#ifndef DTCONSULTA_H
#define DTCONSULTA_H

#include <string>
#include "DtFecha.h"

class DtConsulta {
   public:
      DtConsulta(std::string motivo, DtFecha & fechaConsulta);
      DtFecha getFechaConsulta() const;
      std::string getMotivo() const;

      virtual ~DtConsulta();
   private:
      DtFecha fecha;
      std::string motivo;
};

#endif /* DTCONSULTA_H */