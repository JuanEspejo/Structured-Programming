#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

bool es_primo(int n);
void ordenamiento_rapido(int * p, int ini, int fin);
int particionar(int *p, int ini, int fin);
int con = 0;

int main ()
{
	int primos[25];	
	int k = 0;
	
	for (int j = 2; j < 100; j++)
		if (es_primo(j)) primos[k++] = j;
		
	int aux;
	srand(time(NULL));
	for (int j = 25; j > 1; j--)	
	{
		k = rand() % j;
		aux = primos[j - 1];
		primos[j - 1] = primos[k];
		primos[k] = aux;	
	}	
		
	for (int j = 0; j < 25; j++)
		cout << setw(3) << j << ":" << setw(3) << primos[j] << endl;
		
	ordenamiento_rapido(primos,0,24);	
	cout << " rendimiento por ordenamiento rápido: ";
	cout << setw(3) << con << " comparaciones" << endl;

	for (int j = 0; j < 25; j++)
		cout << setw(3) << j << ":" << setw(3) << primos[j] << endl;
}

void ordenamiento_rapido(int * p, int ini, int fin)
{
	if (ini < fin) 
	{
        int indice = particionar(p, ini, fin);
        ordenamiento_rapido(p, ini, indice);
        ordenamiento_rapido(p, indice + 1, fin);
	}
}

int particionar(int *p, int ini, int fin) 
{
    int pivote = p[ini + (fin - ini) / 2];
    int j = ini - 1;
    int k = fin + 1;
    int aux;
    while (true)
    {
		con--;		
        do
        {
        	j++;
        	con++;
        }
        while (p[j] < pivote);

		con--;		
        do
        {
            k--;
            con++;
        }
        while (p[k] > pivote);
				
        if (j >= k) return k;

		aux = p[j];
		p[j] = p[k];
		p[k] = aux;
	}
}

bool es_primo(int n)
{
	for (int j = 2; j < n; j++)
		if (n % j == 0) return false;
	return true;
}
