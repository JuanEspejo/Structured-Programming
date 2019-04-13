#include <iostream>

using namespace std;

main () 
{
	int n;
	
	cout << " Ingrese un numero positivo: ";
	cin >> n;
	
	if (n%2 == 0) 
	{
		cout << " El nro " << n << " es par."; 
	}
	else
	{
		cout << " El nro " << n;
		cout << " es impar."; 
	}	
	cout << endl;
}
