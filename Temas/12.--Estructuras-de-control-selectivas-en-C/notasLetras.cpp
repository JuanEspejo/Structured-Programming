/* Programa que muestra el uso de la sentencia "switch" */
#include <iostream>

using namespace std;

main()
{
	char nota;

	cout << " Ingrese una nota en letra: ";
	cin >> nota;
	
	switch (nota)
	{
		case 'A':
		case 'a': 
			cout << " Ha logrado el nivel esperado." << endl;
			break;
		case 'b':
		case 'B': 
			cout << " Ha avanzado pero aún no ha llegado el nivel esperado." << endl;
			break;
		case 'c':
		case 'C': 
			cout << " Necesita reforzamiento." << endl;
			break;
		default:
			cout << " Ingreso incorrecto." << endl; 
	}
}





