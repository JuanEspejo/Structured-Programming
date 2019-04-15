#include<iostream>
using namespace std;

int ingresar ();
int primo(int n);

int main() {
	int n = ingresar(); // a estas variables las iremos asignando todos los posibles divisores de n
	for(int j = 2; j < n; j++) {
		if (primo(j)*primo(n/j) == 1  &&  n%j == 0) { 
		// esto es verdad si y solo si n es semiprimo
			cout << " Es semiprimo: " << n << " = ";
			cout << j << "*" << n/j << endl;
			return 0;
		}
	}
	cout << " No es semiprimo." << endl << endl;
}

int ingresar () {
	int k;
	do {
		cout << endl << " Ingresar un entero positivo: ";
		cin >> k;
	}
	while (k < 1);
	return k;
}
	
int primo(int n) {
	for (int d = 2; d < n ; d++)
		if (n%d == 0) return 0; 
	return 1; 
}
