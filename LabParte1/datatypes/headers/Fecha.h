#ifndef FECHA_H
#define FECHA_H

class Fecha {
private:
    int dia;
    int mes;
    int anio;
    bool isValid();
    
public:
    Fecha(int dia, int mes, int anio);
    
    int getDia() const;
    int getMes() const;
    int getAnio() const;

    virtual ~Fecha();
};

#endif /* FECHA_H */

