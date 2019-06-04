#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;			

int main() {
	int ventas[3][12], min = 31, jMin;
	
	srand(time(NULL));
	for (int j = 0; j < 3; j++) {
		for (int k = 0; k < 12; k++) {
			ventas[j][k] = 1 + rand()%10;
		}
	}
	
	for (int j = 0; j < 3; j++) {
		int suma = 0;
		for (int k = 0; k < 12; k++) {
			suma += ventas[j][k];
		}
		cout << "sucursal " << j << ": " << suma << endl;
	}

	for (int j = 0; j < 12; j++) {
		int suma = 0;
		for (int k = 0; k < 3; k++) {
			suma += ventas[k][j];
		}
		if (suma < min) {jMin = j; min = suma;}
	}
	cout << "mes que menos vendio la compania: " << jMin+1 << endl;
}
