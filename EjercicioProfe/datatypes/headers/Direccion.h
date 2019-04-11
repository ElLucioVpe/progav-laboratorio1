#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>

using namespace std;

class Direccion {
public:
    Direccion();
    Direccion(string, string, string, string);
    string getPais() const;
    string getCiudad() const;
    string getNumero() const;
    string getCalle() const;
    virtual ~Direccion();
private:
    string pais;
    string ciudad;
    string numero;
    string calle;
};

std::ostream& operator<<(std::ostream &o, const Direccion& d);
#endif /* DIRECCION_H */

