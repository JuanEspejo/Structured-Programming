#include <iostream>
using namespace std;

// prototipos de las funciones
int mcd(int x, int y);
int mcm(int x, int y);

int main() {
	cout <<	"mcm(2,3) = " << mcm(2,3) << endl;
	cout <<	"mcm(4,6) = " << mcm(4,6) << endl;
}

// definicion de la funcion mcd
int mcm(int x, int y) {
	return (x*y) / mcd(x,y);
}

// definicion de la funcion mcd
int mcd(int x, int y) {
	int divisor;
	for(int n=1; n<=x && n<=y; ++n) {
		if(x%n == 0 && y%n == 0) divisor = n;
	}
	return divisor;
}
