#include<iostream>
using namespace std;
#ifndef Persona_h
#define Persona_h

class Persona {
	
	public:
	
		//constructor y destructor
		Persona() {};
	
	private:
	
		string nombre;
		string apellido;
		string cedula;
		int fecha;
		int peso;
		int altura;
	
	public:
	
		void SetNombre(string n) { nombre=n; }
		void SetApellido(string a) { apellido=a; }
		void SetCedula(string c) { cedula=c; }
		void SetFecha(int f) { fecha=f; }
		void SetPeso( int p) { peso = p; }
		void SetAltura( int a ) { altura = a; }
		const string GetNombre( ){ return nombre; }
		const string GetApellido( ){ return apellido; }
		const string GetCedula( ){ return cedula; }
		const int GetFecha( ){ return fecha; }
		const int GetPeso( ){ return peso; }
		const int GetAltura( ){ return altura; }
	
};

#endif
