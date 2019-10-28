#include <iostream>
#include <cstdlib>
#include<iomanip> 

using namespace std;

int main ()
{
	int * notas;
	int k, i, r;

	cout << " ingrese la longitud del arreglo: ";
	cin >> k;
	notas = (int *)malloc( k*sizeof(int) );
	
	if (notas == NULL)
	{
		cout << " NO se pudo asignar memoria" << endl;
		return 1;
	}
	
	cout << " se ha creado un arreglo de enteros de longitud " << k << endl;

	cout << " ingrese la nueva longitud del arreglo: ";
	cin >> r;
	notas = (int *)realloc(notas, r*sizeof(int));

	if (notas == NULL)
	{
		cout << " NO se pudo reasignar memoria" << endl;
		return 1;
	}
	
	cout << " el arreglo de enteros ahora tiene longitud " << r << endl;

	free (notas); // liberando
}
