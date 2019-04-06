#include <iostream>
 
using namespace std;

main() 
{
	/* definiendo la constante de conversión de kilogramos a libras */
	#define LIBRASxKILOGRAMO 2.2

	/* declarando variables */
	float masa_kg, masa_lb;
	
	cout << " Ingrese su masa en kilogramos: ";
	cin >> masa_kg;
	
	/* realizando la conversión */
	masa_lb = masa_kg * LIBRASxKILOGRAMO;

	cout << " Su masa es de " << masa_lb << " libras." << endl;
}
