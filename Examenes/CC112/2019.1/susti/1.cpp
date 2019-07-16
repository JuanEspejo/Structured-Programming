//1.c
#include <iostream>
using namespace std;

int main(){

	int n=5, arr[n], *p=arr, i, max;
	cout << "\nIngrese " << n << " enteros:\n";

	for (i=0; i < n; i++){
		cout << "Numero ("<< i+1 <<"): ";
		cin >> *p++;
	}

	cout << "\nValores del arreglo" << endl;
	cout << "indice Dirección
	Valor" << endl;

	for (i=0, p=arr, max = *p; i<n; i++){
		if(max<*p) max = *p;
		cout << " " << i << " " << p << " " << *p++ << endl;
	}

	cout << "\nEl maximo es: " << max << endl;
}
