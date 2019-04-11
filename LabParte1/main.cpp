#include <iostream>
#include <stdexcept>
#include <ctime>

#include "datatypes/headers/Genero.h"
#include "datatypes/headers/RazaPerro.h"
#include "datatypes/headers/TipoPelo.h"

#include "classes/headers/Consulta.h"
#include "classes/headers/Mascota.h"
#include "classes/headers/Perro.h"
#include "classes/headers/Gato.h"
#include "classes/headers/Socio.h"

#include "datatypes/headers/DtConsulta.h"
#include "datatypes/headers/DtMascota.h"
#include "datatypes/headers/DtFecha.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const int MAX_SOCIOS = 50;
//const int MAX_MASCOTAS = 10;
//const int MAX_CONSULTAS = 20; 

Socio** socios = new Socio* [MAX_SOCIOS];
int cantidadSocios = 0;

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota);
void agregarMascota(std::string ci, const DtMascota& dtMascota);
void ingresarConsulta(std::string motivo, std::string ci);
DtConsulta** verConsultasAntesDeFecha(const DtFecha* Fecha, std::string ciSocio, int& cantConsultas);
void eliminarSocio(std::string ci);
DtMascota** obtenerMascotas(std::string ci, int& cantMascotas);
DtMascota crearDtMascota (std::string tipoMascota);
DtMascota* obtenerMascotaPorNombre(string basicString, int mascotas);

int main(int argc, char** argv) {
	int opcionUsuario;
	while(true){
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

		try {

			switch(opcionUsuario){
				case 0:
					return 0;
				case 1:
                {
                    std::string cedulaPersona, nombrePersona, tipoMascota;
                    cout << "Ingrese en orden ci, nombre y que mascota tiene: ";
                    cin >> cedulaPersona >> nombrePersona >> tipoMascota;
                    DtMascota mascota = crearDtMascota(tipoMascota);
                    registrarSocio(cedulaPersona, nombrePersona, mascota);
                    break;
                }
				case 2:
                {
                    std::string ci;
                    cout << "Ingrese la cedula del socio a eliminar: ";
                    cin >> ci;
                    eliminarSocio(ci);
                    break;
                }
				case 3:
                {
                    std::string ci, tipoMascota;
                    cout << "Ingrese la cedula del socio al cual quiere agregar una mascota, seguido del tipo de mascota: ";
                    cin >> ci >> tipoMascota;
                    DtMascota mascota = crearDtMascota(tipoMascota);
                    agregarMascota(ci, mascota);
                    break;
                }
				case 4:
                {
                    std::string ci;
                    int cantMascotas;
                    cout << "Ingrese la cedula del socio y la cantidad de mascotas: ";
                    cin >> ci >> cantMascotas;
                    DtMascota** mascotas = obtenerMascotas(ci, cantMascotas);
                    //Mostrar el contenido del arreglo, probablemente solo nombre y tipo
                    break;
                }
				case 5:
                {
                    std::string ci, motivo;
                    cout << "Ingrese su cedula: ";
                    cin >> ci;
                    cout << "\nIngrese su consulta: ";
                    cin >> motivo;
                    ingresarConsulta(motivo, ci);
                    break;
                }
				case 6:
                {
                    int dia, mes, anio, cantConsultas;
                    std::string ci;
                    cout << "Ingrese la ci del socio: ";
                    cin >> ci;
                    cout << "Ingrese la cantidad de consultas que desea ver: ";
                    cin >> cantConsultas;
                    cout << "\nIngrese una fecha (dia mes anio), se mostraran todas las consultas anteriores a esta: ";
                    cin >> dia >> mes >> anio;
                    DtConsulta** consultas = verConsultasAntesDeFecha(new DtFecha(dia, mes, anio), ci, cantConsultas);
                    //Mostrar el contenido del arreglo

                    /*
					for (int i=0; i < consultas.length(); i++) {
                        cout << (i +1) << " - " << consultas[i]->motivo; //???
					}
                     */

                    break;
                }
				default:
					throw std::invalid_argument("La opcion ingresada no es correcta");     
			}
		}
		catch(std::invalid_argument &arroz){
			cout << "Error " << arroz.what() << endl;
		}
	}
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

DtMascota* obtenerMascotaPorNombre(string nombre, int cantMascotas) {
    return nullptr;
}

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota){
	if(cantidadSocios == MAX_SOCIOS) { 
		throw std::invalid_argument("No se pueden agregar mas socios."); 
	}else { 
		Socio* socio = obtenerSocio(ci);
 
	    if (socio != NULL) { 
			throw std::invalid_argument("Ya existe un socio con la ci ingresada");
		}
		std::time_t t = std::time(0);      // Obtener tiempo actual
    	std::tm* now = std::localtime(&t); //

	    socios[cantidadSocios] = new Socio(ci, nombre, DtFecha(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900)); //Agregar dia, mes y anio actuales a DtFecha
	    socios[cantidadSocios]->agregarMascota(dtMascota);
	    cantidadSocios++;
	}
        /*DtMascota* mascota = agregarMascota(dtMascota.getNombre(), socio->getCantidadMascotas());
        socios[++cantidadSocios] = new Socio(ci, nombre, FechaIngreso, mascota);
	    socio->agregarMascota(mascota);*/
}


void agregarMascota(std::string ci, const DtMascota& dtMascota){
	Socio* socio = obtenerSocio(ci);
 
	if (socio == NULL) { 
		throw std::invalid_argument("No existe un socio con la ci ingresada"); 
	}
	socio->agregarMascota(dtMascota);
}

void ingresarConsulta(std::string motivo, std::string ci){
	Socio* socio = obtenerSocio(ci);
	
	if (socio == NULL) { 
		throw std::invalid_argument("No existe un socio con la ci ingresada"); 
	}
	
	std::time_t t = std::time(0);      // Obtener tiempo actual
	std::tm* now = std::localtime(&t); //
	
	DtConsulta consulta = new DtConsulta(DtFecha(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900), motivo);
	socio->agregarConsulta(consulta);
}

DtConsulta** verConsultasAntesDeFecha(const DtFecha* Fecha, std::string ciSocio, int& cantConsultas){
	Socio* socio = obtenerSocio(ciSocio);
	
	if (socio == NULL) { 
		throw std::invalid_argument("No existe un socio con la ci ingresada"); 
	}
	
	DtConsulta** retornoConsultas = new DtConsulta*[cantConsultas];
	Consulta** consultasSocio = socio->getConsulta();
	
	int j = 0;

	/*
	for (int i=0; i < cantConsultas; i++) {
		if ((consultasSocio[i]->getFechaConsulta()) < Fecha) {
			retornoConsultas[j] = consultas[i];
			j++;
		}
	}
	 */

	if (retornoConsultas == NULL) {
		throw std::invalid_argument("No existen consultas antes de esa fecha"); 
	}
	return retornoConsultas;
}

void eliminarSocio(std::string ci){
	Socio* socio = obtenerSocio(ci);
	if (socio == NULL) { 
		throw std::invalid_argument("No existe el socio que quiere eliminar"); 
	}
	delete socio;
	std::cout << "El Socio se ha eliminado efectivamente" << '\n';
}

DtMascota** obtenerMascotas(std::string ci, int& cantMascotas){
	Socio* socio = obtenerSocio(ci);
 
	if (socio == NULL) { throw std::invalid_argument("No existe un socio con la ci ingresada"); }
	
	DtMascota** ejemplo = NULL;

	return ejemplo;
}

//Auxiliares 
DtMascota crearDtMascota (std::string tipoMascota){
	std::string nombreMascota, generoMascota;
	float pesoMascota;
    if(tipoMascota == "Perro"){
        std::string raza, vacuna; 
        cout << "Ingrese en orden el nombre, genero, raza y si esta vacunada la mascota (Si/No)";
        cin >> nombreMascota >> generoMascota >> raza >> vacuna; 
            	 
		Genero genero; 
        if (generoMascota == "Macho"){
			genero = Macho;
		}else{
			genero = Hembra;
		} 
            	 
        RazaPerro razaPerro; 
		if(raza == "Labrador"){
			razaPerro = Labrador;
		}else{ 
			if(raza == "Ovejero"){
				razaPerro = Ovejero;
			}else{ 
				if(raza == "Bulldog"){
					razaPerro = Bulldog;
				}else{ 
					if(raza == "Collie"){
						razaPerro = Collie;
					else{ 
						if(raza == "Pekines"){
							razaPerro = Pekines;
						}else{ 
							if (raza == "Otro"){
								razaPerro = Otro;
							} 
						} 
					} 
				} 
			} 
		} 
            	 
        bool vacunabool = false;

        if (vacuna == "Si") {
            vacunabool = true;
        } else {
			std::string tipoPelo, vacuna; 
			cout << "Ingrese en orden el nombre, genero, y su tipo de pelo" 
			cin >> nombreMascota >> generoMascota >> tipoPelo; 
				
			Genero genero; 
        	if (generoMascota == "Macho"){
				genero = Macho;
			}else{
				genero = Hembra;
			} 
            TipoPelo pelo; 
       		if(tipoPelo == "Corto"){
				tipoPelo = Corto;
			}else{ 
				if(tipoPelo == "Mediano"){
					tipoPelo = Mediano;
				}else{ 
					if(tipoPelo == "Largo"){
						tipoPelo = Largo;
					} 
				} 
			} 
			mascota = new DtGato(nombreMascota, genero, pesoMascota, pelo); 
		} 
		return mascota; 
	} 
} 
