#include <iostream>
#include <cstdlib>
#include<iomanip> 

using namespace std;

int main ()
{
	int * notas;
	int k, i;

	cout << " ingrese la longitud del arreglo: ";
	cin >> k;
	notas = (int *) calloc( k, sizeof(int) );
	
	if (notas == NULL)
	{
		cout << " NO se pudo asignar memoria" << endl;
		return 1;
	}
	
	cout << " se ha creado un arreglo de enteros de longitud " << k << endl;

	for(i = 0; i < k; i++)
		cout << setw(4) << notas[i];
	cout << endl;

	free (notas); // liberando
}
