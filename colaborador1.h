#include<iostream>
using namespace std;
#include "colaborador5.h"


void GetInfor(Persona per){
	std::cout << "\n";
	std::cout << "Los datos personales son:\n\n";
    std::cout << "\n";
	std::cout << "Nombre: " << per.GetNombre() << '\n';
	std::cout << "Apellido: " << per.GetApellido() << '\n';
	std::cout << "Cedula: " << per.GetCedula() << '\n';
	std::cout << "Fecha: " << per.GetFecha() << '\n';
	std::cout << "Peso: " << per.GetPeso() << '\n';
	std::cout << "Altura: " << per.GetAltura() << '\n';	
}

Persona PosInfor(string nom,string ape,string ced,int fec,int pes,int alt){
	Persona per = Persona();
	per.SetNombre(nom);
	per.SetApellido(ape);
	per.SetCedula(ced);
	per.SetFecha(fec);
	per.SetPeso(pes);
	per.SetAltura(alt);
	return per;
}
