# Clases y Objetos 

![](https://4.bp.blogspot.com/-wVh72KjMVOc/WRpbSYryjRI/AAAAAAAAL7M/-Ue9b4JDvekwtu8KxWuRn3i_i3SdHh0gwCLcB/s1600/Encabezados-de-Blog.gif)


**Tabla de contenido**

[TOCM]

[TOC]



###**Participantes 👏**

------------


![](https://avatars.githubusercontent.com/u/86116060?v=4)
####♦Nombre y Apellido del participante♦
Genesis Simisterra
#### ♦Descipcion♦
Encarga de ingresar los datos personales del usuario como su nombre, apellido, altura, peso, edad y fecha nacimiento, parar ello se crea una clase llamada **Persona. per** se utilizo un **void persona per****** para ingresar los datos, para mas informacion sobre la modicicacion e participacion de este usuario de clic [aqui](https://github.com/GENESI-SIMISTERRA-PEREA "aqui"), 

------------


![](https://avatars.githubusercontent.com/u/86172650?v=4)
####♦Nombre y Apellido del participante♦
Kevin Antonio Tapuy Cañola
#### ♦Descipcion♦
Encarga de ingresar los datos personales del usuario como su nombre, apellido, altura, peso, edad y fecha nacimiento, parar ello se crea una clase llamada **Persona. per** se utilizo un **void persona per****** para ingresar los datos, para mas informacion sobre la modicicacion e participacion de este usuario de clic [aqui](https://github.com/ke212002), 


------------
![](https://avatars.githubusercontent.com/u/86218442?v=4)
####♦Nombre y Apellido del participante♦
Clarisa Ortiz Castillo
#### ♦Descipcion♦
Encargado crear un codigo para  visualizar la edad del usurio, al mismo tiempo calular la edad apartir de la fecha de nacimiento, para mas detalle sobre esta codificacion de clic [aqui](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador4.h "aqui"). 

------------


![](https://avatars.githubusercontent.com/u/86115235?v=4)
####♦Nombre y Apellido del participante♦
Cristopher Justyn Tigua Vivero
####♦ Descipcion♦
Encargado crear un codigo para recuperar la información que se guarda en colaborador4.h, usando constructor y destructor a demas tambien calculo el índice corporal de un persona introduciendo un mensaje que indica si la persona tiene sobre peso o esta muy delgada, definio una class persona con el apodos de pass para que busque la line del código mas rápido para futuras modificaciones del codigo, para mas detalle sobre esta codificacion de clic [aqui](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador5.h"aqui"). 


------------
Los archivos utilizados para la cracion del codigo son:
🙋‍♀️[colaborador1.h](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador1.h "colaborador1.h")
🙋‍♂️[colaborador2.h](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador2.h "colaborador2.h")
🙋‍♂️[colaborador3.h](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador3.h "colaborador3.h")
🙋‍♀️[colaborador4.h](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador4.h "colaborador4.h")
🙋‍♂️[colaborador5.h](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/colaborador5.h "colaborador5.h")

------------
*El tipo de clase utiliza al igual que los demas colabores es **Persona per** *

------------

▶El codigo principal es; [principal.cpp](https://github.com/CrisJ117/C2.-2-Uso-de-Clases-y-Objetivo/blob/main/Principal.cpp "principal.cpp").
 
	}#include <iostream>
	#include <stdlib.h>
	#include "colaborador1.h" // Genesi Simisterra
	#include "colaborador2.h" // Kevin Antonio Tapuy Cañola
	#include "colaborador3.h" // 
	#include "colaborador4.h" // Clarisa Ortiz Castillo
	#include "colaborador5.h" // Cristopher Justyn Tigua Vivero
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
	    std::cout<<"         ==================================MENU=============================================="<<endl;
	    std::cout<<"         <<            1. Ingresar y mostrar los datos personales    			   >>"<<endl;
	    std::cout<<"         <<            2. Mostrar la edad de la persona                                    >>"<<endl;
	    std::cout<<"         >>            3. Mostrar el indice comporal y felicilitarlo si se encuentra bien  <<"<<endl;
	    std::cout<<"         <<            4. Guardar los datos en un archivo .txt   			   >>"<<endl;
	    std::cout<<"         >>            5. Recuperar los datos desde el archivo  .txt     		   <<"<<endl;
	    std::cout<<"         >>            6. SALIR                      					   <<"<<endl;
	    std::cout<<"         ===================================================================================="<<endl;
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


▶En el colaborador1 `<persona>` se ingreso el siguiente codigo fuente.


    void GetInfor(Persona){
	}
	Persona PosInfor()


| Nombre de la funcion      | Descripcion                   |
| ----------------------------------- | ------------------------------ |
| `void Getlnfor(){}`                        | Para obtener información relevante sobre la edad.       |
| `Persona PosInfor()`          |  Obtiene información relacionada a getinfo     |

------------


▶En el colaborador2 `<class persona >` se ingreso el siguiente codigo fuente.


    void GetEdad(Persona per){
	int edad = 1>50-per.GetFecha();

------------


| Nombre de la funcion      | Descripcion                   |
| ----------------------------------- | ------------------------------ |
| `void GetEdad(){}`                        | Para obtener información relevante a la edad       |
| `GetFecha()`          |  Obtiene información relacionada a la fecha     |

------------


▶En el colaborador3 `<persona >` se ingreso el siguiente codigo fuente.

	private:
	
	public:
| Nombre de la funcion      | Descripcion                   |
| ----------------------------------- | ------------------------------ |
| `private`                        |no se puede acceder (o ver) a los miembros desde fuera de la clase       |
|`public`             |  los miembros son accesibles desde fuera de la clase     |


------------


▶En el colaborador4 `<class persona >` se ingreso el siguiente codigo fuente.

	void GuardarArchivo(Persona per){
	}
	void LeerArchivo(){
	}
| Nombre de la funcion      | Descripcion                   |
| ----------------------------------- | ------------------------------ |
| `void GuardarArchivo()`                        |guardar datos      |
|`void LeerArchivo()`             |  Leer datos guardados     |

------------


▶En el colaborador5 `<class persona >` se ingreso el siguiente codigo fuente.

	destructor
	constructor
*Inf sobre destructor y constructor [link](https://www.geeksforgeeks.org/constructors-c/ "link")*

| Nombre de la funcion      | Descripcion                   |
| ----------------------------------- | ------------------------------ |
| `destructor`                        |útiles para destruir objetos de almacenamiento dinámico|
|`constructor`             |  Crea el objeto     |


------------
