#include<iostream>

using namespace std;

int main()
{
	int a, b, c, menor;
	cout << "Ingrese tres numeros: " << endl;
	cin >> a >> b >> c;

	menor = a;
	if (b < menor)
		menor = b;
	if (c < menor)
		menor = c;
	cout << "El menor es " << menor << "." << endl;
}
