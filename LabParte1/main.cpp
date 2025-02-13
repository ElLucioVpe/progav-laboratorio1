#include <iostream>
#include <stdexcept>
#include <ctime>
#include <string>

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
#include "datatypes/headers/DtPerro.h"
#include "datatypes/headers/DtGato.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

const int MAX_SOCIOS = 50;

Socio** socios = new Socio* [MAX_SOCIOS];
int cantidadSocios = 0;

void registrarSocio(std::string ci, std::string nombre, const DtMascota& dtMascota);
void agregarMascota(std::string ci, const DtMascota& dtMascota);
void ingresarConsulta(std::string motivo, std::string ci);
DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, std::string ciSocio, int& cantConsultas);
void eliminarSocio(std::string ci);
DtMascota** obtenerMascotas(std::string ci, int& cantMascotas);
DtMascota* crearDtMascota (std::string tipoMascota);

int main(int argc, char** argv) {
	int opcionUsuario;
	cout << "Bienvenido al sistema" << endl;
	while(true){
		//Opciones para el Usuario.
		cout << "\tElegir una Opcion:\n" << endl;
		cout << "1 Registrar Socio.\n" << endl;
		cout << "2 Eliminar Socio.\n" << endl;
		cout << "3 Agregar Mascota.\n" << endl;             //Solo cuando el socio a agregar ya existe. Osea la 2da o mas mascota del socio.
		cout << "4 Mostrar Lista de Mascotas.\n" << endl;   //Lista mascotas por ci de socio.
		cout << "5 Ingresar Consulta.\n" << endl;           //Pregunta de Usuario a un socio existente.
		cout << "6 Ver Consultas antes de una fecha.\n" << endl;
		cout << "Pulse 0 para salir.\n" << endl;
		
		cin >> opcionUsuario;
		try {

			switch(opcionUsuario){
				case 0:
				{
					cout << "Gracias por usar nuestro programa";
					return 0;
				}
				case 1:
                {
                    std::string cedulaPersona, nombrePersona, tipoMascota;
                    cout << "Ingrese en orden ci, nombre y que mascota tiene: ";
                    cin >> cedulaPersona >> nombrePersona >> tipoMascota;
                    const DtMascota* mascota = crearDtMascota(tipoMascota);
                    registrarSocio(cedulaPersona, nombrePersona, *mascota);
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
                    DtMascota* mascota = crearDtMascota(tipoMascota);
                    agregarMascota(ci, *mascota);
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
                    for (int i=0; i < cantMascotas; i++) { 
                    	cout << (i+1) << endl;

                        if (dynamic_cast<DtPerro*>(mascotas[i])) {
                            std::cout << (DtPerro*) mascotas[i];
                        } else {
                            std::cout << (DtGato*) mascotas[i];
                        }
					}
                    break;
                }
				case 5:
                {
                    std::string ci, motivo;
                    cout << "Ingrese su cedula: ";
                    cin >> ci;
                    cout << "\nIngrese su consulta: ";
                    cin.ignore();
                    getline(cin, motivo);
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
                    DtFecha fecha(dia, mes, anio);
                    DtConsulta** consultas = verConsultasAntesDeFecha(fecha, ci, cantConsultas);
                    //Mostrar el contenido del arreglo
					for (int i=0; i < cantConsultas; i++) {
                        cout << (i+1) << " - " << consultas[i]->getMotivo() << endl;
					}
                    break;
                }
				default:
					throw std::invalid_argument("La opcion ingresada no es correcta");
			}
		}
		catch(std::invalid_argument &e){
			cout << "\nError: " << e.what() << endl;
		}
		if (opcionUsuario != 5) { cin.ignore(); }
		cout << "\nPresione ENTER para continuar...";
		cin.get();
		cout << endl;
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
	    socios[cantidadSocios]->agregarMascota(&dtMascota);
	    cantidadSocios++;
	}
}

void agregarMascota(std::string ci, const DtMascota& dtMascota){
	Socio* socio = obtenerSocio(ci);
 
	if (socio == NULL) { 
		throw std::invalid_argument("No existe un socio con la ci ingresada"); 
	}
	socio->agregarMascota(&dtMascota);
}

void ingresarConsulta(std::string motivo, std::string ci){
	Socio* socio = obtenerSocio(ci);
	
	if (socio == NULL) { 
		throw std::invalid_argument("No existe un socio con la ci ingresada"); 
	}
	
	std::time_t t = std::time(0);      // Obtener tiempo actual
	std::tm* now = std::localtime(&t); //
	
	DtConsulta* consulta = new DtConsulta(motivo, DtFecha(now->tm_mday, now->tm_mon + 1, now->tm_year + 1900));
	socio->agregarConsulta(consulta);
}

DtConsulta** verConsultasAntesDeFecha(const DtFecha& Fecha, std::string ciSocio, int& cantConsultas){
	Socio* socio = obtenerSocio(ciSocio);
	
	if (socio == NULL) { 
		throw std::invalid_argument("No existe un socio con la ci ingresada"); 
	}
	
	DtConsulta** retornoConsultas = new DtConsulta*[cantConsultas];
	Consulta** consultasSocio = socio->getConsulta();
	
	if (socio->getCantidadConsultas() < cantConsultas){ cantConsultas = socio->getCantidadConsultas(); }
	int i, j = 0;
	for (i=0; i < socio->getCantidadConsultas() && j < cantConsultas; i++) {
		if (consultasSocio[i]->getFechaConsulta() < Fecha) {
			retornoConsultas[j] = new DtConsulta(
				consultasSocio[i]->getMotivo(),
				consultasSocio[i]->getFechaConsulta()
			);
			j++;
		}
	}
	
	if (i == socio->getCantidadConsultas() && j == 0) {
		throw std::invalid_argument("No existen consultas antes de esa fecha");
	}
	return retornoConsultas;
}

void eliminarSocio(std::string ci){
	Socio* socio = NULL;
	
	int i;
	for(i = 0; i < cantidadSocios && socio == NULL; i++) {
        if (socios[i]->getCi() == ci) {
            socio = socios[i];
        }
    }
    
	if (socio == NULL) { 
		throw std::invalid_argument("No existe el socio que quiere eliminar"); 
	}
	
	delete socios[i-1];
	for (int j = i-1; j < cantidadSocios; j++) {
		socios[j] = socios[j+1];
	}
	cantidadSocios--;
	
	std::cout << "El Socio se ha eliminado efectivamente" << '\n';
}

DtMascota** obtenerMascotas(std::string ci, int& cantMascotas){
	Socio* socio = obtenerSocio(ci);
 
	if (socio == NULL) { throw std::invalid_argument("No existe un socio con la ci ingresada"); }
	
	DtMascota** retornoMascota = new DtMascota*[cantMascotas];
	Mascota** mascotasSocio = socio->getMascota();
	
	if (socio->getCantidadMascotas() < cantMascotas){ cantMascotas = socio->getCantidadMascotas(); }
	int j = 0;
	for (int i=0; i < socio->getCantidadMascotas() && j < cantMascotas; i++) {

		Perro * p = dynamic_cast<Perro*>(mascotasSocio[i]);
	    if (p) {
	        retornoMascota[j] = new DtPerro(
	        	p->getRaza(),
	        	p->getVacunaCachorro(),
	            p->getNombre(),
	            p->getGenero(),
	            p->getPeso()
	        );
	    }
	    else {
	        auto g = (Gato*) mascotasSocio[i];
	        retornoMascota[j] = new DtGato(
	        	g->getTipoPelo(),
	            g->getNombre(),
	            g->getGenero(),
	            g->getPeso()
	        );
	    }
		j++;
	}
	
	return retornoMascota;
}

//Auxiliares 
DtMascota* crearDtMascota (std::string tipoMascota){
	std::string nombreMascota, generoMascota;
	float pesoMascota;
	
	DtMascota* mascota;
    if(tipoMascota == "Perro"){
        std::string raza, vacuna; 
        cout << "Ingrese en orden el nombre, genero, peso, raza y si esta vacunada la mascota (Si/No): ";
        cin >> nombreMascota >> generoMascota >> pesoMascota >> raza >> vacuna; 
            	 
		Genero genero; 
        if (generoMascota == "Macho"){
			genero = Genero::Macho;
		}else{
			if (generoMascota == "Hembra"){
				genero = Genero::Hembra;
			}
			else{
				throw std::invalid_argument("Genero invalido");
			}
		}
            	 
        RazaPerro razaPerro; 
		if(raza == "Labrador"){
			razaPerro = RazaPerro::Labrador;
		}else{ 
			if(raza == "Ovejero"){
				razaPerro = RazaPerro::Ovejero;
			}else{ 
				if(raza == "Bulldog"){
					razaPerro = RazaPerro::Bulldog;
				}else{ 
					if(raza == "Collie") {
                        razaPerro = RazaPerro::Collie;
                    } else { 
						if(raza == "Pekines"){
							razaPerro = RazaPerro::Pekines;
						}else{ 
							if (raza == "Otro"){
								razaPerro = RazaPerro::Otro;
							}
							else{
								throw std::invalid_argument("Raza invalida");
							}
						} 
					} 
				} 
			} 
		} 
            	 
        bool vacunabool = false;
        if (vacuna == "Si") {
            vacunabool = true;
        }
        
        mascota = new DtPerro(razaPerro, vacunabool, nombreMascota, genero, pesoMascota);
    }
	else{ 
		if (tipoMascota == "Gato") {
			std::string tipoPelo, vacuna; 
			cout << "Ingrese en orden el nombre, genero, peso, y su tipo de pelo: ";
			cin >> nombreMascota >> generoMascota >> pesoMascota >> tipoPelo; 
				
			Genero genero; 
	        if (generoMascota == "Macho"){
				genero = Genero::Macho;
			}else{
				if (generoMascota == "Hembra"){
					genero = Genero::Hembra;
				}
				else{
					throw std::invalid_argument("Genero invalido");
				}
			} 
	        	
	        TipoPelo pelo; 
	        	
	       	if(tipoPelo == "Corto"){
	            pelo = TipoPelo::Corto;
			}else{ 
				if(tipoPelo == "Mediano"){
	                pelo = TipoPelo::Mediano;
				}else{ 
					if(tipoPelo == "Largo"){
	                    pelo = TipoPelo::Largo;
					}
					else{
						throw std::invalid_argument("Tipo de Pelo invalido");
					}
				}
			}
			
			mascota = new DtGato(pelo, nombreMascota, genero, pesoMascota);
		} else {
			throw std::invalid_argument("Tipo de mascota invalido, por favor ingrese Perro o Gato");
		}    
	}
    return mascota;
}  
