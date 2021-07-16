#include <iostream>
#include <cstdlib>

using namespace std;
#include "colaborador1.h"
#include "colaborador2.h"
#include "colaborador3.h"
#include "colaborador4.h"
#include "colaborador5.h"

class Persona {
	public:
	
	//constructor y destructor
	Persona() {};
	
	private:
	
	char nombre;
	char apellido;
	char cedula;
	char fecha;
	int peso;
	int altura;
	
	public:
	
	void SetNombre(char n) { nombre=n; }
	void SetApellido(char a) { apellido=a; }
	void SetCedula(char c) { cedula=c; }
	void SetFecha(char f) { fecha=f; }
	void SetPeso( int p) { peso = p; }
	void SetAltura( int a ) { altura = a; }
	const char GetNombre( ){ return nombre; }
	const char GetApellido( ){ return apellido; }
	const char GetCedula( ){ return cedula; }
	const char GetFecha( ){ return fecha; }
	const int GetPeso( ){ return peso; }
	const int GetAltura( ){ return altura; }
	
	
	Persona PosInfor(char nom,char ape,char ced,char fec,int pes,int alt){
		Persona per = Persona();
		per.SetNombre(nom);
		per.SetApellido(ape);
		per.SetCedula(ced);
		per.SetFecha(fec);
		per.SetPeso(pes);
		per.SetAltura(alt);
		return per;
	}
	
	void GetInfor(Persona per){
		std::cout << "Nombre: " << per.GetNombre() << '\n';
		std::cout << "Apellido: " << per.GetApellido() << '\n';
		std::cout << "Cedula: " << per.GetCedula() << '\n';
		std::cout << "Fecha: " << per.GetFecha() << '\n';
		std::cout << "Peso: " << per.GetPeso() << '\n';
		std::cout << "Altura: " << per.GetAltura() << '\n';
	}
	
};

int main()
{
    int opcion;
     float altura, peso, IMC;

    int c=0;
    bool repetir = true;

    
    
    do {
        system("cls");
 
           cout<<"       "<<endl;
     cout<<"         ==================================MENU==========================================="<<endl
     cout<<"         <<            1. Ingresar y mostrar los datos personales    					   >>"<<endl;
     cout<<"         <<            2. Mostrar la edad de la persona          						     >>"<<endl;
     cout<<"         >>            3. Mostrar el indice comporal y felicilitarlo si se encuentra bien    <<"<<endl;
     cout<<"         <<            4. Guardar los datos en un archivo .txt   					       >>"<<endl;
     cout<<"         >>            5. Recuperar los datos desde el archivo  .txt     				      <<"<<endl;
     cout<<"         >>            6. SALIR                      										  <<"<<endl;
     cout<<"         ==================================================================================="<<endl;
        cout << "\nIngrese una opcion del menu: "<<endl;
        cin >> opcion;
        
        switch (opcion) {
            case 1:
               Persona per;
	
		char nom,ape,ced,fec;
		int pes,alt;

		std::cout << "Ingrese el nombre\n";
		std::cin >> nom;
		std::cout << "Ingrese el apellido\n";
		std::cin >> ape;
		std::cout << "Ingrese la cedula\n";
		std::cin >> ced;
		std::cout << "Ingrese la fecha de nacimiento\n";
		std::cin >> fec;
		std::cout << "\nIngrese el peso\n";
		std::cin >> pes;
		std::cout << "\nIngrese la altura\n";
		std::cin >> alt;

		per = per.PosInfor(nom,ape,ced,fec,pes,alt);

		per.GetInfor(per);
                break;
                
            case 2:
            
                system("pause>nul"); 
                break;
                
            case 3:
                      
                
                system("pause>nul");            
                break;
                
            case 4:
           	           
                
                system("pause>nul");              
                break;
                
            case 5:
           	
                system("pause>nul");              
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
	 
    return 0;
}
