#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

bool es_primo(int n);

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

	int con = 0;
	for (int j = 1; j < 25; j++)
	{ 
	    for (int k = 0; k < 25 - j; k++)
		{
			if (primos[k] > primos[k + 1])
			{
				aux = primos[k];
				primos[k] = primos[k + 1];
				primos[k + 1] = aux;
			}
			con++;
		}
	}
	cout << " rendimiento por ordenamiento de burbuja: ";
	cout << setw(3) << con << " comparaciones" << endl;

	for (int j = 0; j < 25; j++)
		cout << setw(3) << j << ":" << setw(3) << primos[j] << endl;
}

bool es_primo(int n)
{
	for (int j = 2; j < n; j++)
		if (n % j == 0) return false;
	return true;
}
