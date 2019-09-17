#include<iostream>
#include<iomanip>

using namespace std;

bool es_primo(int n);

int main ()
{
	int primos[25];	
	int k = 0;
	for (int j = 2; j < 100; j++)
		if (es_primo(j)) primos[k++] = j;
	for (int j = 0; j < 25; j++)
		cout << setw(3) << j << ":" << setw(3) << primos[j] << endl;
}

bool es_primo(int n)
{
	for (int j = 2; j < n; j++)
		if (n % j == 0) return false;
	return true;
}
