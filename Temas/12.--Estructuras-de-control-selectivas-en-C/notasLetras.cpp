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
			cout << " Lograste el nivel esperado." << endl;
			break;
		case 'B': 
			cout << " Has avanzado pero aún no llegado el nivel esperado." << endl;
			break;
		case 'C': 
			cout << " Necesita reforzamiento." << endl;
			break;
		default:
			cout << " Ingreso incorrecto." << endl; 
	}
}
