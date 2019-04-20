#include <iostream>

using namespace std;

main()
{
	int entrada;

	cout << " Ingrese un número del 1 al 3: ";
	cin >> entrada;
	
	switch (entrada)
	{
		case 1: 
		{
			cout << " Ingresaste el 1." << endl;
			break;
		}
		case 2: 
		{
			cout << " Ingresaste el 3." << endl;
			break;
		}
		case 3: 
		{
			cout << " Ingresaste el 3." << endl;
			break;
		}
		default:
			cout << " ¡Fuera del rango!" << endl; 
	}
}
