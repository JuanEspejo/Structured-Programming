#include<iostream>

using namespace std;

int busqueda_lineal (int * p, int lon);

int main ()
{
	int nota[4] = {12,16,17,19};
    int indice = busqueda_lineal(nota, 4);
    
    if (indice >= 0)
    {
	    cout << "se encontró el 17 en el índice ";
	    cout << indice << " del arreglo nota." << endl;
	}
	else
	    cout << "no se encontró el 17 en el arreglo." << endl;	
}

int busqueda_lineal (int * p, int lon)
{
    for (int j = 0; j < lon; j++)
	    if (p[j] == 17) return j;
    return -1;
}
