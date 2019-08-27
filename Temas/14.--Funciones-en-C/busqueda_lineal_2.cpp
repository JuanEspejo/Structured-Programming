#include<iostream>

using namespace std;

int busqueda_lineal (int * p, int lon, int elemento);

int main ()
{
	int nota[4] = {12,16,17,19};
	int nab = 20;
    int indice = busqueda_lineal(nota, 4, nab);
    
    if (indice >= 0)
    {
	    cout << "se encontró " << nab << " en el índice ";
	    cout << indice << " del arreglo nota." << endl;
	}
	else
	    cout << "no se encontró " << nab << " en el arreglo." << endl;	
}

int busqueda_lineal (int * p, int lon, int elemento)
{
    for (int j = 0; j < lon; j++)
	    if (p[j] == elemento) return j;
    return -1;
}
