#include<iostream>
#include<cstdlib>
using namespace std;

void generar (int * p, int n);
void burbuja (int * p, int n);
void mostrar (int * p, int n);

int main ()
{
	int nota[10];
	srand(time(NULL));	

	generar(nota,10);
	mostrar(nota,10);

	burbuja(nota,10);
	mostrar(nota,10);
}

void generar (int * p, int n)
{
	for (int j = 0; j < n; j++)
		p[j] = 1 + rand()%20;	
}

void burbuja (int * p, int n)
{
	int aux;
	for (int j = 1; j < n; j++)
	{ 
	    for (int k = 0; k < n - j; k++)
		{
			if (p[k] > p[k + 1])
			{
				aux = p[k];
				p[k] = p[k + 1];
				p[k + 1] = aux;
			}
		}
	}
}

void mostrar (int * p, int n)
{
	for (int j = 0; j < n; j++)
		cout << p[j] << endl;
	cout << endl;
}
