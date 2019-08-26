#include<iostream>

using namespace std;

int cuadrado (int N);

int main ()
{
	int a = 3;

	cout << "cuadrado: " << cuadrado(a) << endl;
	cout << "a: " << a << endl;
}

int cuadrado (int N)
{
	return N*N;
}
