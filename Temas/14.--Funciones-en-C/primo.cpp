#include<iostream>

using namespace std;

bool es_primo (int N);

int main ()
{
	cout << "Los primos menores o iguales a 10 son: " << endl;
	for (int j = 2; j <= 10; j++)
		if (es_primo(j)) cout << j << endl;
}

bool es_primo (int N)
{ 
	for (int d = 2; d < N; d++)
	{
		if (N % d == 0) return false;
	}
	return true;
}
