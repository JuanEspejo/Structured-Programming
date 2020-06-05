#include <iostream>
using namespace std;

// prototipo de la funcion factorial
int factorial2(int n);

int main () {
	cout <<	"factorial2(1) = " << factorial2(1) << endl;
	cout <<	"factorial2(2) = " << factorial2(2) << endl;
	cout <<	"factorial2(3) = " << factorial2(3) << endl;
}

// definicion de la funcion sumar
int factorial2(int n) {
	int producto = 1;
	for(int j = 2; j <= n; ++j) {
		producto *= j;
	}
	return producto;
}
