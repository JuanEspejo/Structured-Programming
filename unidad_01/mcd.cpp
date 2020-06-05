#include <iostream>
using namespace std;

// prototipo de la funcion mcd
int mcd(int x, int y);

int main() {
	cout <<	"mcd(2,3) = " << mcd(2,3) << endl;
	cout <<	"mcd(2,4) = " << mcd(2,4) << endl;
	cout <<	"mcd(6,9) = " << mcd(6,9) << endl;
}

// definicion de la funcion mcd
int mcd(int x, int y) {
	int divisor;
	for(int n=1; n<=x && n<=y; ++n) {
		if(x%n == 0 && y%n == 0) divisor = n;
	}
	return divisor;
}
