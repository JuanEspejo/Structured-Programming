// 2.cpp
#include<iostream>
using namespace std;

bool primo(int n);
int goldbach(int n);

int main()
{
	for (int n = 1978 ;n <= 2018; n += 2)
		goldbach(n);
}
	
bool primo(int n) // cabecera de la función primo
{
	for (int j = 2; j < n; j++)
		if (n%j == 0) return false;
	return true;
}

int goldbach(int n) // cabecera de la función golbach
{
	for(int j = 2; j < n; j++)
	{
		if (primo(j) && primo(n - j))
		{ 
			cout << n << " = " << j << " + " << n - j << endl;
			return 0;
		}
	}
}
