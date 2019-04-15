#include<iostream>
using namespace std;

void inicializar(int a[], int k);
void mostrar(int a[], int k);

main() {
	int edades[5];
	inicializar(edades,5);
	mostrar(edades,5);
	mostrar(edades,5);
}

void inicializar(int a[], int k) {
	for (int j = 0; j < k; j++)
		a[j] = 2*j; 
}

void mostrar(int a[], int k) {
	for (int j = 0; j < k; j++)
		cout << a[j] << endl;
	cout << endl; 
}













