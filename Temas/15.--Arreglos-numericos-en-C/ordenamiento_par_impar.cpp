#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

void generar (int * p, int n);
void mostrar_par (int * p, int n);
void mostrar_impar (int * p, int n);

void burbuja_impar (int * p, int n);
void insercion_par (int * p, int n);

int main ()
{
	int nota[20];
	srand(time(NULL));	
	generar(nota,20);

	mostrar_impar(nota,20);
	burbuja_impar(nota,20);
	mostrar_impar(nota,20);

	mostrar_par(nota,20);
	insercion_par(nota,20);
	mostrar_par(nota,20);
}

void generar (int * p, int n)
{
	for (int j = 0; j < n; j++)
		p[j] = 1 + rand()%20;	
}

void burbuja_impar (int * p, int n)
{
	int aux;
	for (int j = 1; j < n; j += 2)
	{ 
	    for (int k = 1; k < n - j; k += 2)
		{
			if (p[k] > p[k + 2])
			{
				aux = p[k];
				p[k] = p[k + 2];
				p[k + 2] = aux;
			}
		}
	}
}

void insercion_par (int * p, int n)
{
	int aux;
	for (int j = 2; j < n; j += 2)
	{ 
	    for (int k = j; k > 0 && p[k - 2] > p[k]; k -= 2)
		{
			aux = p[k - 2];
			p[k - 2] = p[k];
			p[k] = aux;
		}
	}
}

void mostrar_impar (int * p, int n)
{
	cout << " elementos de indice impar:" << endl;
	for (int j = 1; j < n; j += 2)
		cout << setw(3) << j << ":" << setw(4) << p[j] << endl;
	cout << endl;
}

void mostrar_par (int * p, int n)
{
	cout << " elementos de indice par:" << endl;
	for (int j = 0; j < n; j += 2)
		cout << setw(3) << j << ":" << setw(4) << p[j] << endl;
	cout << endl;
}
