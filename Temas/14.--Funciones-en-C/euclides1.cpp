#include <iostream>
using namespace std;

// prototipos de funciones
int mcd (int a, int b); 

main () {
	int x, y;
	
	cout << " x: ";
	cin >> x;
	cout << " y: ";
	cin >> y;

	cout << " mcd = " << mcd(x,y) << endl; 
}

// funcion que retorna el MCD de dos enteros positivos
int mcd (int a, int b) {
	int resto = a%b;
	while (resto != 0) {
		a = b;
		b = resto;
		resto = a%b;
	}
	return b; // b almacena al mayor divisor común de a y b
}




















