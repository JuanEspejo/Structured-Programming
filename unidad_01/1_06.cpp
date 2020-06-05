#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int lanzar();

int main () {
	int const SUMA = 5;
	cout << setprecision(3) << fixed;

	int contador = 0;
	for(int k = 1; k <= 100; ++k) {
		if(lanzar() == SUMA) ++contador;
	}
	cout << "Luego de 100 lances el cociente es ";
	cout << (double)contador/100 << endl;

	contador = 0; // reasignamos para hacer un nuevo conteo
	for(int k = 1; k <= 1000; ++k) {
		if(lanzar() == SUMA) ++contador;
	}
	cout << "Luego de 1,000 lances el cociente es ";
	cout << (double)contador/1000 << endl;

	contador = 0; // reasignamos para hacer un nuevo conteo
	for(int k = 1; k <= 100000; ++k) {
		if(lanzar() == SUMA) ++contador;
	}
	cout << "Luego de 100,000 lances el cociente es ";
	cout << (double)contador/100000 << endl;

	cout << "En virtud de la combinatoria, dicha probabilidad es ";
	cout << "4/35 lo cual es aproximadamente " << (double)4/35 << endl;
}	

int lanzar() {
	int dado1 = 1 + rand()%6;
	int dado2 = 1 + rand()%6;
	return dado1 + dado2;
}

/*

 2: 1+1 
 3: 1+2, 2+1
 4: 1+3, 3+1, 2+2
 5: 1+4, 2+3, 3+2, 4+1
 6: 1+5, 2+4, 3+3, 4+2, 5+1
 7: 1+6, 2+5, 3+4, 4+3, 5+2, 6+1
 8: 2+6, 3+5, 4+4, 5+3, 6+2
 9: 3+6, 4+5, 5+4, 6+3
10: ...
11: ...
12: 6+6

probabilidad de sacar 5 es igual a
  (# combinaciones que suman 5) / (total) = 4 / 35

*/  
