#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void explicar();
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

	explicar();	
	for (int j = 0; j < 25; j++)
		cout << setw(3) << j << ":" << setw(3) << primos[j] << endl;
}

void explicar()
{
	cout << "\n En el primer ciclo del bucle:\n";
	cout << " se selecciona un indice entre 0,1,...,24 y se almacena en k.\n";
	cout << " Luego, se intercambian los valores de primos[k] y primos[24].\n\n";

	cout << " En el segundo ciclo del bucle:\n";
	cout << " se selecciona un indice entre 0,1,...,23 y se almacena en k.\n";
	cout << " Luego, se intercambian los valores de primos[k] y primos[23].";

	cout << "\n\n ...\n\n";

	cout << " En el último ciclo del bucle:\n";
	cout << " se selecciona un indice entre 0,1 y se almacena en k.\n";
	cout << " Luego, se intercambian los valores de primos[k] y primos[1].\n\n";
	
	cout << " En conclusión: se realiza una permutación del vector primos.\n\n"; 
}

bool es_primo(int n)
{
	for (int j = 2; j < n; j++)
		if (n % j == 0) return false;
	return true;
}
