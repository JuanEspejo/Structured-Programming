#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

void generar (int * p, int n);
void rapido (int * p, int ini, int fin);
int  particionar (int * p, int ini, int fin);
void mostrar (int * p, int n);


int main ()
{
	int nota[10];
	srand(time(NULL));	
	generar(nota,10);

	mostrar(nota,10);
	rapido(nota,0,9);
	mostrar(nota,10);
}

void generar (int * p, int n)
{
	for (int j = 0; j < n; j++)
		p[j] = 1 + rand()%20;	
}

void rapido (int * p, int ini, int fin)
{
	if (ini < fin)
	{
		int indice = particionar(p,ini,fin);
		rapido(p,ini,indice - 1);
		rapido(p,indice + 1,fin);  
	}
}

int particionar (int * p, int ini, int fin)
{
	int pivote = p[fin];
    int i = ini;
	int aux;
    for (int j = ini; j < fin; j++)
	{
        if (p[j] < pivote) 
		{
			aux = p[i];
            p[i] = p[j];
			p[j] = aux;
            i++;
		}
	}
    aux = p[i];
    p[i] = p[fin];
	p[fin] = aux;
    return i;
}

void mostrar (int * p, int n)
{
	cout << " elementos del vector:" << endl;
	for (int j = 0; j < n; j += 1)
		cout << setw(3) << j << ":" << setw(4) << p[j] << endl;
	cout << endl;
}
