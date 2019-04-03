/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Empleado.h
 * Author: matiascubero
 *
 * Created on March 12, 2016, 3:39 PM
 */

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "../../datatypes/headers/Direccion.h"
#include "../../datatypes/headers/DtEmpleado.h"
#include "../headers/RelacionLaboral.h"

class Empleado {
public:
    Empleado(string, string, string, Direccion &);

    string getNombre() const;
    string getApellido() const;
    Direccion getDireccion() const;
    string getCI() const;
    float getSalarioLiquido() const;
    DtEmpleado getDataEmpleado() const;
    
    RelacionLaboral** getRelacionesLaborales() const;
    int getCantidadRelacionesLaborales() const;
    
    DtEmpresa** obtenerEmpresasActivas(int& cantidadEmpresas);
    
    void setNombre(string nombre);
    void setApellido(string apellido);
    void setDireccion(Direccion& direccion);
    void setCI(string ci);
    void setRelacionesLaborales(RelacionLaboral**, int);

    void agregarRelacionLaboral(RelacionLaboral*);
    void finalizarRelacionLaboral(Empresa*, Fecha);
    virtual ~Empleado();

private:
    string nombre;
    string apellido;
    Direccion direccion;
    string ci;
    RelacionLaboral** relacionesLaborales;
    int cantidadRelacionesLaborales;
    static const int MAX_RELACIONES_LABORALES = 50;
};

#endif /* EMPLEADO_H */

