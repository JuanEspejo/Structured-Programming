#include <iostream>
using namespace std;

int invertir(int n);

int main () {
	int n;
	cout << "Ingrese un entero positivo: ";
	cin >> n;
	cout << "Numero invertido: ";
	invertir(n);
}	

int invertir(int n) {
	int unidades;
	bool primer_no_cero = false;
	do {
		unidades = n%10;
		n = n/10;
		if(unidades > 0) primer_no_cero = true;
		if(primer_no_cero) cout << unidades;
	} while(n > 0);
	cout << endl;
}
