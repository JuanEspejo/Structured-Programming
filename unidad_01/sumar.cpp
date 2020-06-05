#include <iostream>

using namespace std;

// prototipo de la funcion sumar
int sumar(int x, int y);

int main () {
	cout <<	"sumar(2,3) = " << sumar(2,3) << endl;
}

// definicion de la funcion sumar
int sumar(int x, int y) {
	return x + y;
}
