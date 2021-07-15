#include <iostream>
#include <cstdlib>

using namespace std;
#include "colaborador1.h"
#include "colaborador2.h"
#include "colaborador3.h"
#include "colaborador4.h"
#include "colaborador5.h"

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
               
                system("pause>nul");
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
