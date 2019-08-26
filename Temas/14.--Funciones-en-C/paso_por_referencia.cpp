#include<iostream>

using namespace std;

int sumar_dos (int * ref);

int main ()
{
	int nota = 18;
	int * p = &nota; // aqui se define la variable p 
				  // como un 'puntero a entero'

	sumar_dos (p);
	cout << "nota: " << nota << endl;	
}

int sumar_dos (int * ref)
{
	*ref = *ref + 2;
}
