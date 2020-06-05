#include <iostream>
#include <iomanip>
using namespace std;

// prototipo de la funcion es_primo
bool es_primo(int n);

int main () {
	for(int k = 2; k <= 10; ++k) {
		cout << setw(2) << k;
		if(es_primo(k)) cout << " es ";
		else cout << " no es "; 
		cout << "primo" << endl;
	}
}

// definicion de la funcion es_primo
bool es_primo(int n) {
	for(int j = 2; j < n; ++j) {
		if(n%j == 0) return false; 
	}
	return true;
}
