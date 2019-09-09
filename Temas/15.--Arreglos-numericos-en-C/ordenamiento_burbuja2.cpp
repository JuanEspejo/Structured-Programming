#include<iostream>
using namespace std;

void burbuja (int * p, int n);
void mostrar (int * p, int n);

int main ()
{
	int nota[4] = {12,20,18,14};
	int edades[4] = {18,22,17,19};

	burbuja(nota,4);
	mostrar(nota,4);
	cout << "edades:" << endl; 
	burbuja(edades,4);
	mostrar(edades,4);
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
