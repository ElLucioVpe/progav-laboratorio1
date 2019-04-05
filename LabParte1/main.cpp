#include <iostream>
#include <stdexcept>

#include "classes/headers/Consulta.h"
#include "classes/headers/Mascota.h"
#include "classes/headers/Perro.h"
#include "classes/headers/Gato.h"
#include "classes/headers/Socio.h"
#include "datatypes/headers/DtConsulta.h"
#include "datatypes/headers/DtMascota.h"
#include "datatypes/headers/DtFecha.h"
#include "datatypes/headers/Genero.h"
#include "datatypes/headers/RazaPerro.h"
#include "datatypes/headers/TipoPelo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const int MAX_SOCIOS = 50;
const int MAX_MASCOTAS = 20;

Socio** socios = new Socio* [MAX_SOCIOS];
int cantidadSocios = 0;

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota);
void agregarMascota(std::string ci, const DtMascota& dtMascota);
void ingresarConsulta(std::string motivo, std::string ci);
DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, std::string ciSocio, int& cantConsultas);
void eliminarSocio(std::string ci);
DtMascota** obtenerMascotas(std::string ci, int& cantMascotas);

int main(int argc, char** argv) {
	int opcionUsuario;
	cout << "Bienvenido al sistema" << endl;
    cout << "\t\tLos comandos se mostraran tras elegir una opcion.\n\n" << endl;
    //Opciones para el Usuario.
    cout << "\tElegir una Opcion:\n" << endl;
    cout << "1 Registrar Socio.\n" << endl;
    cout << "2 Eliminar Socio.\n" << endl;
    cout << "3 Agregar Mascota.\n" << endl;             //Solo cuando el socio a agregar ya existe. Osea la 2da o mas mascota del socio.
    cout << "4 Mostrar Lista de Mascotas.\n" << endl;   //Lista mascotas por ci de socio.
    cout << "5 Ingresar Consulta.\n" << endl;           //Pregunta de Usuario a un socio existente.
    cout << "6 Ver Consutas antes de una fecha.\n" << endl; 
    cout << "Pulse 0 para salir.\n" << endl;


    switch(opcionUsuario){
        case 0:
            return 0;
        case 1:
           // std::string nombrePersona, cedulaPersona, DtMascota        terminar aca.
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        default:
            throw std::invalid_argument("La opcion ingresada no es correct");     }
    //cout << "   " << endl;
	return 0;
}

Socio* obtenerSocio(std::string ci) {
    for(int i = 0; i < cantidadSocios; i++) {
        if (socios[i]->getCi() == ci) {
            return socios[i];
        }
    }
    return NULL;
}

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota){
	if(cantidadSocios == MAX_SOCIOS) { 
		throw std::invalid_argument("No se pueden agregar más socios."); 
	} else { 
		Socio* socio = obtenerSocioPorCI(ci); 
 
	    if (socio != NULL) { throw std::invalid_argument("Ya existe un socio con la ci ingresada"); } 
 
	    Mascota* mascota = obtenerMascotaPorNombre(dtMascota); 
	    socios[++cantidadSocios] = new Socio(ci, nombre, FechaIngreso, mascota); 
	    socio->agregarMascota(mascota); 
	} 
}

void agregarMascota(std::string ci, const DtMascota& dtMascota){

}

void ingresarConsulta(std::string motivo, std::string ci){

}

DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, std::string ciSocio, int& cantConsultas){
	DtConsulta** ejemplo = NULL;

	return ejemplo;
}

void eliminarSocio(std::string ci){
	Socio* socio = obtenerSocio(ci);
	if (socio == NULL) { throw std::invalid_argument("No existe el socio que quiere eliminar"); }
	delete socio;
	std::cout << "El Socio se ha eliminado efectivamente" << '\n';
}

DtMascota** obtenerMascotas(std::string ci, int& cantMascotas){
	DtMascota** ejemplo = NULL;

	return ejemplo;
}
