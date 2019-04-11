#include <cstdlib>
#include <stdexcept>
#include <iostream>

#include "classes/headers/Empleado.h"
#include "classes/headers/Empresa.h"
#include "datatypes/headers/DtEmpleado.h"
#include "datatypes/headers/DtEmpresa.h"
#include "datatypes/headers/DtEmpresaExtranjera.h"
#include "datatypes/headers/DtEmpresaNacional.h"
#include "classes/headers/EmpresaNacional.h"
#include "classes/headers/EmpresaExtranjera.h"
#include "classes/headers/RelacionLaboral.h"

using namespace std;

const int MAX_EMPLEADOS = 50;
const int MAX_EMPRESAS = 50;

Empleado** empleados = new Empleado* [MAX_EMPLEADOS];
int cantidadEmpleados = 0;

Empresa** empresas = new Empresa* [MAX_EMPRESAS];
int cantidadEmpresas = 0;

void agregarEmpleado(string ci, string nombre, string apellido, Direccion dir);
void agregarEmpresa(DtEmpresa* empresa);
DtEmpleado* listarEmpleados(int& cantEmpleados);
void agregarEmpresaEmpleado(string ciEmpleado, string idEmpresa, float sueldo);
void eliminarEmpresaEmpleado(string ciEmpleado, string idEmpresa, Fecha desvinculacion);
DtEmpresa** obtenerInfoEmpresaPorEmpleado(string ciEmpleado, int& cantidadEmpresas);

Empresa* obtenerEmpresaPorId(string idEmpresa);
Empleado* obtenerEmpleadoPorCI(string ci);

int main(int argc, char** argv) {
    
    cout << "Bienvenido al sistema" << endl;
    cout << "Comandos:" << endl;
    cout << "agregarEmpleado ci nombre apellido pais ciudad calle numero" << endl;
    cout << "agregarEmpresa [Nacional|Extrajera] id pais ciudad calle numero [rut|nombre_fantacia]" << endl;
    cout << "listarEmpleados" << endl;
    cout << "agregarEmpresaEmpleado ciEmpleado idEmpresa sueldo" << endl;
    cout << "finalizarRelacionLaboral ciEmpleado idEmpresa dia mes anio" << endl;
    cout << "obtenerInfoEmpresaPorEmpleado ciEmpleado" << endl;
    cout << "exit" << endl;
    
    string command;
    cout << ">";
    cin >> command;
    
    while (command != "exit") {
        try {
            if (command == "agregarEmpleado") {
                string ci, nombre, apellido, pais, ciudad, calle, numero;
                cin >> ci >> nombre >> apellido >> pais >> ciudad >> calle >> numero;
                agregarEmpleado(ci, nombre, apellido, Direccion(pais, ciudad, calle, numero));
            }
            else if (command == "agregarEmpresa") {
                string tipo;
                cin >> tipo;
                if (tipo == "Nacional") {
                    string id, pais, ciudad, calle, numero, rut;
                    cin >> id >> pais >> ciudad >> calle >> numero >> rut;
                    agregarEmpresa(new DtEmpresaNacional(id, Direccion(pais, ciudad, calle, numero), rut));
                }
                else {
                    string id, pais, ciudad, calle, numero, nombreFantacia;
                    cin >> id >> pais >> ciudad >> calle >> numero >> nombreFantacia;
                    agregarEmpresa(new DtEmpresaExtranjera(id, Direccion(pais, ciudad, calle, numero), nombreFantacia));
                }
            }
            else if (command == "listarEmpleados") {
                int cantEmpleados;
                DtEmpleado* empleados = listarEmpleados(cantEmpleados);
                for(int i = 0; i < cantEmpleados; i++) {
                    cout << empleados[i] << endl;
                }
            }
            else if (command == "agregarEmpresaEmpleado") {
                string ciEmpleado, ciEmpresa;
                float sueldo;
                cin >> ciEmpleado >> ciEmpresa >> sueldo;
                agregarEmpresaEmpleado(ciEmpleado, ciEmpresa, sueldo);
            }
            else if (command == "finalizarRelacionLaboral") {
                string ciEmpleado, ciEmpresa;
                int dia, mes, anio;
                cin >> ciEmpleado >> ciEmpresa >> dia >> mes >> anio;

                eliminarEmpresaEmpleado(ciEmpleado, ciEmpresa, Fecha(dia, mes, anio));
            }
            else if (command == "obtenerInfoEmpresaPorEmpleado") {
                string ciEmpleado;
                cin >> ciEmpleado;
                int cantidadEmpresasActivas;
                DtEmpresa** empresas;

                empresas = obtenerInfoEmpresaPorEmpleado(ciEmpleado, cantidadEmpresasActivas);
                
                for(int i = 0; i < cantidadEmpresasActivas; i++) {
                    if (dynamic_cast<DtEmpresaNacional*>(empresas[i])) {
                        cout << (DtEmpresaNacional*) empresas[i] << endl;
                    }
                    else {
                        cout << (DtEmpresaExtranjera*) empresas[i] << endl;
                    }
                }
            }
            else {
                throw std::invalid_argument("Comando no reconocido");
            }
            
            cout << "Comando ejecutado correctamente" << endl;
        }
        catch(std::invalid_argument &ia) {
            cout << "Error: " << ia.what() << endl;
        }
        
        cout << ">";
        cin >> command;

    }
    
    return 0;
}

Empresa* obtenerEmpresaPorId(string idEmpresa){
    for(int i = 0; i < cantidadEmpresas; i++) {
        if (empresas[i]->getId() == idEmpresa) {
            return empresas[i];
        }
    }
    return NULL;
}

Empleado* obtenerEmpleadoPorCI(string ci) {
    for(int i = 0; i < cantidadEmpleados; i++) {
        if (empleados[i]->getCI() == ci) {
            return empleados[i];
        }
    }
    return NULL;
}

void agregarEmpleado(string ci, string nombre, string apellido, Direccion dir) {
    if (cantidadEmpleados == MAX_EMPLEADOS) {
        throw std::invalid_argument("No se pueden agregar mas empleados");
    }
    
    Empleado* empleado = obtenerEmpleadoPorCI(ci);
    
    if (empleado != NULL) { throw std::invalid_argument("Ya existe un empleado con la ci ingresada"); }

    empleados[cantidadEmpleados] = new Empleado(ci, nombre, apellido, dir);
    cantidadEmpleados++;
}

void agregarEmpresa(DtEmpresa* dtEmpresa) {
    if (cantidadEmpresas == MAX_EMPRESAS) {
        throw std::invalid_argument("No se pueden agregar mas empresas");
    }
    
    Empresa* empresa = obtenerEmpresaPorId(dtEmpresa->getId());
    
    if (empresa != NULL) { throw std::invalid_argument("Ya existe una empresa con el identificador ingresado"); }

    DtEmpresaNacional* den = dynamic_cast<DtEmpresaNacional*>(empresa);
    
    if (den) {
        empresas[cantidadEmpresas] = new EmpresaNacional(
            den->getId(),
            den->getDireccion(),
            den->getRut()
        );
    }
    else {
        DtEmpresaExtranjera* dee = (DtEmpresaExtranjera*) empresa;
        empresas[cantidadEmpresas] = new EmpresaExtranjera(
            dee->getId(),
            dee->getDireccion(),
            dee->getNombreFantacia()
        );
    }
    
    cantidadEmpresas++;
}

DtEmpleado* listarEmpleados(int& cantEmpleados) {
    cantEmpleados = cantidadEmpleados;
    DtEmpleado* retorno = new DtEmpleado[cantEmpleados];
    
    for(int i = 0; i < cantEmpleados; i++) {
        retorno[i] = empleados[i]->getDataEmpleado();
    }
    
    return retorno;
}

void agregarEmpresaEmpleado(string ciEmpleado, string idEmpresa, float sueldo){
    Empresa* empresa = obtenerEmpresaPorId(idEmpresa);
    Empleado* empleado = obtenerEmpleadoPorCI(ciEmpleado);
    
    if (empresa == NULL) { throw std::invalid_argument("Empresa inexistente"); }
    if (empleado == NULL) { throw std::invalid_argument("Empleado inexistente"); }
    
    RelacionLaboral* rl = new RelacionLaboral(empresa, sueldo);
    empleado->agregarRelacionLaboral(rl);
}

void eliminarEmpresaEmpleado(string ciEmpleado, string idEmpresa, Fecha desvinculacion) {
    Empresa* empresa = obtenerEmpresaPorId(idEmpresa);
    Empleado* empleado = obtenerEmpleadoPorCI(ciEmpleado);
    
    if (empresa == NULL) { throw std::invalid_argument("Empresa inexistente"); }
    if (empleado == NULL) { throw std::invalid_argument("Empleado inexistente"); }
    
    empleado->finalizarRelacionLaboral(empresa, desvinculacion);
}

DtEmpresa** obtenerInfoEmpresaPorEmpleado(string ciEmpleado, int& cantidadEmpresas) {
    Empleado* empleado = obtenerEmpleadoPorCI(ciEmpleado);

    if (empleado == NULL) { throw std::invalid_argument("Empleado inexistente"); }
    
    return empleado->obtenerEmpresasActivas(cantidadEmpresas);
}