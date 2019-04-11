/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.h
 * Author: matiascubero
 *
 * Created on March 12, 2016, 4:11 PM
 */

#ifndef FECHA_H
#define FECHA_H

class Fecha {
public:
    Fecha(int dia, int mes, int anio);
    
    int getDia() const;
    int getMes() const;
    int getAnio() const;

    virtual ~Fecha();
private:
    int dia;
    int mes;
    int anio;
    bool isValid();
};

#endif /* FECHA_H */

