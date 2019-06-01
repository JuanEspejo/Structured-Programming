// 2.c
#include <iostream>
using namespace std;
int main(void){
	int numero=101, cont, suma;
	bool encontrado = false;
	while (!encontrado){
		suma = 1;
		for (cont = 2; cont < numero; cont++)  if(numero % cont == 0) suma = suma + cont;
		if (suma == numero) encontrado = true;
		else numero++;
	}
	cout << "Primer numero perfecto mayor que 100 = " << numero << endl;
}
