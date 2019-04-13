#include <iostream>

using namespace std;

main () 
{
	int a, b;
	
	cout << " Ingrese dos numeros: ";
	cin >> a >> b;
	
	if(a < b) 
	{
		cout << a << " es menor que ";
		cout << b; 
	}
	else
	{ 
		if(a > b)
		{
			cout << a << " ese mayor que ";
			cout << b;
		} 
		else 
		{
			cout << "son iguales.";
		}
	}	 
	cout << endl;
}
