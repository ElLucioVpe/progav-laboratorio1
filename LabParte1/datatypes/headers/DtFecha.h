#ifndef DTFECHA_H
#define DTFECHA_H

class DtFecha {
    private:
        int dia;
        int mes;
        int anio;
        bool isValid();

    public:
        DtFecha(int dia, int mes, int anio);

        int getDia() const;
        int getMes() const;
        int getAnio() const;
        bool operator<(DtFecha);
        
        virtual ~DtFecha();
};

#endif /* FECHA_H */
