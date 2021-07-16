class persona{
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

void GuardarArchivo(Persona per){
	string nombre = per.GetNombre();
	string apellido = per.GetApellido();
	string cedula = per.GetCedula();
	char nom[61];
	char ape[61];
	char ced[61];
	for (int i=0; i<nombre.length(); i++){
		nom[i] = nombre[i];
		ape[i] = apellido[i];
		ced[i] = cedula[i];
	}
	FILE* ptFichero;
	ptFichero = fopen("persona.txt", "wt");
	fprintf(ptFichero, "El nombre es %s\n", nom);
	fprintf(ptFichero, "El apellido es %s\n", ape);
	fprintf(ptFichero, "La cedula es %s\n", ced);
	fprintf(ptFichero, "La fecha de nacimiento es %d\n", per.GetFecha());
	fprintf(ptFichero, "El peso es %d\n", per.GetPeso());
	fprintf(ptFichero, "La altura es %d\n", per.GetAltura());
	fclose(ptFichero);
	std::cout << "Los datos han sido guardados correctamente\n\n";
}

void LeerArchivo(){
    
    FILE* ficheroU;
	char frase[61];
	ficheroU = fopen("persona.txt", "rt");
	std::cout << "\n";
	std::cout << "Los datos personales obtenidos son:\n\n";
    std::cout << "\n";
	do{
    	fgets(frase, 60, ficheroU);
    	puts(frase);
	}while (!feof(ficheroU));
	fclose(ficheroU);
	getchar();
}
};
