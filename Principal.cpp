#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "colaborador1.h"
#include "colaborador2.h"
#include "colaborador3.h"
#include "colaborador4.h"
using namespace std;

int main() {
	
	Persona per;
	
	int opcion;
    int c=0;
    bool repetir = true;
    
	string nomb,ape,ced,vacio;
	int fec,pes,alt;
	
	
	do {
        system("cls");
 
        std::cout<<"       "<<endl;
	    std::cout<<"         ==================================MENU==========================================="<<endl;
	    std::cout<<"         <<            1. Ingresar y mostrar los datos personales    					   >>"<<endl;
	    std::cout<<"         <<            2. Mostrar la edad de la persona          						     >>"<<endl;
	    std::cout<<"         >>            3. Mostrar el indice comporal y felicilitarlo si se encuentra bien    <<"<<endl;
	    std::cout<<"         <<            4. Guardar los datos en un archivo .txt   					       >>"<<endl;
	    std::cout<<"         >>            5. Recuperar los datos desde el archivo  .txt     				      <<"<<endl;
	    std::cout<<"         >>            6. SALIR                      										  <<"<<endl;
	    std::cout<<"         ==================================================================================="<<endl;
        std::cout << "\nIngrese una opcion del menu: "<<endl;
        cin >> opcion;
        
        switch (opcion) {
            case 1:
        		system("cls");
            	std::cout << "Ingrese datos personales\n\n";
            	std::cout << "\n";
				getline(cin, vacio);
            	std::cout << "Ingrese el Nombre\n";
				getline(cin, nomb);
				std::cout << "Ingrese el Apelido\n";
				getline(cin, ape);
				std::cout << "Ingrese la Cedula\n";
				getline(cin, ced);
				std::cout << "Ingrese la Fecha de nacimiento\n";
				std::cin >> fec;
				std::cout << "\nIngrese el Peso(kg)\n";
				std::cin >> pes;
				std::cout << "\nIngrese la Altura(cm)\n";
				std::cin >> alt;
				
				per = PosInfor(nomb,ape,ced,fec,pes,alt);
				
				GetInfor(per);
				system("PAUSE()");
                break;       
            case 2:
            	system("cls");
                GetEdad(per);
                system("PAUSE()");
                break;
                
            case 3:
    			system("cls");
                GetPeso(per);
                system("PAUSE()");            
                break;
                
            case 4: 
    			system("cls");  
                GuardarArchivo(per);
                system("PAUSE()");             
                break;
                
            case 5:
           		system("cls");  
                LeerArchivo();
                system("PAUSE()");               
                break;
            
            case 6:
            	cout<<endl<<endl<<endl<<endl<<endl;
				cout<<" ================================================"<<endl;
				cout<<" >>                                            <<"<<endl;
				cout<<" <<    TRABAJO REALIZADO POR:                  >>"<<endl;
				cout<<" >>                                            <<"<<endl;
				cout<<" <<                     * Genesi Simisterra    >>"<<endl;
				cout<<" <<                     * Tigua Vivero         >>"<<endl;
				cout<<" <<                     * Clarisa Stefania     >>"<<endl;
				cout<<" <<                     * Kevin Antonio        >>"<<endl;
				cout<<" >>                                            <<"<<endl;
				cout<<" <<    Programa finalizado...                  >>"<<endl;
				cout<<" ================================================"<<endl;
            	repetir = false;
            	break;
        }        
    } while (repetir);
	
}
