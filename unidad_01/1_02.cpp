#include <iostream>
using namespace std;

// prototipo de la funcion es_primo
int fibo(int n);

int main () {
	for(int k = 0; k <= 24; ++k) {
		cout << "Fibonacci(" << k << ") = ";
		cout << fibo(k) << endl;
	}
}

// definicion de la funcion es_primo
int fibo(int n) {
	if(n == 0 || n == 1) return 1;
	else return fibo(n-1) + fibo(n-2);
}
