#include <iostream>
#include <cstdlib>
 
using namespace std; 
 
int main ()
{
	int * notas;
	size_t k;

	cout << " ingrese la longitud del arreglo: ";
	cin >> k;
	notas = (int *) malloc( k*sizeof(int) );

	if (notas == NULL)
	{
		cout << " NO se pudo asignar memoria." << endl;
		return 1;
	}
	
	cout << " se ha asignado un arreglo de longitud " << k << endl;
	cout << " notas  : " << notas << endl;
	cout << " notas+1: " << notas+1 << endl;
	
	free (notas); // liberando
}
