#include<iostream>

using namespace std;

int main() {

	int suma = 0;

	for (int j = 1; j < 6; j++) 
		suma = suma + 3*j;

	cout << "La suma de los 5 primeros numeros multiplos de 3 es" << suma << endl;
}
