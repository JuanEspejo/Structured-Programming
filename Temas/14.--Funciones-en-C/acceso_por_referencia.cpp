#include<iostream>

using namespace std;

int main ()
{
	int nota = 20;
	int * p = &nota; // aqui se define la variable p 
				  // como un 'puntero a entero'

	cout << "nota: " << nota << endl;
	
	// el operador indireccion va en sentido contrario al 
	// operador direccion 
	cout << "nota: " << *p << endl; 
	// el operando del operador indireccion 
	// tiene que ser un puntero (direccion de memoria) necesariamente
}
