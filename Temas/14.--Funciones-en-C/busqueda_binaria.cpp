#include<iostream>

using namespace std;

int busqueda_binaria (int * p, int lon, int elemento);

int main ()
{
	int nota[7] = {12,13,15,16,17,19,20};
	int nab = 13;
    int indice = busqueda_binaria(nota, 7, nab);
    
    if (indice >= 0)
    {
	    cout << "se encontró " << nab << " en el índice ";
	    cout << indice << " del arreglo nota." << endl;
	}
	else
	    cout << "no se encontró " << nab << " en el arreglo." << endl;	
}

int busqueda_binaria (int * p, int lon, int elemento)
{
    int L = 0;
    int R = lon - 1;
    int m;
    while (L <= R)
    {
        m = (L + R) / 2;
	    if (p[m] < elemento) L = m;
	    else if (elemento < p[m]) R = m;
	    else return m;
    }
    return -1;
}
