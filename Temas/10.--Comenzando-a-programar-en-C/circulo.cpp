#include <iostream>
#include <cmath>
 
using namespace std;

main() 
{
	#define PI 3.14
	float radio;
	
	cout << " Ingrese el radio del circulo: ";
	cin >> radio;

	cout << " diametro = " << 2*radio << endl;
	cout << " perimetro = " << 2*PI*radio << endl;
	cout << " area = " << PI*pow(radio,2) << endl;
}
