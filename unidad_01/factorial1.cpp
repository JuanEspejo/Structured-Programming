#include <iostream>
using namespace std;

// prototipo de la funcion factorial
int factorial1(int n);

int main () {
	cout <<	"factorial1(1) = " << factorial1(1) << endl;
	cout <<	"factorial1(2) = " << factorial1(2) << endl;
	cout <<	"factorial1(3) = " << factorial1(3) << endl;
}

// definicion de la funcion sumar
int factorial1(int n) {
	if(n == 1) 
		return 1;
	else
		return n * factorial1(n-1);
}
