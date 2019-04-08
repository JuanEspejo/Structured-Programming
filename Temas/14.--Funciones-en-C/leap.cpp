#include <iostream>
using namespace std;

int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int year;

// prototipos de funciones
int leap(int n); 

main () {
	int x, y;
	
	cout << " x: ";
	cin >> x;
	cout << " y: ";
	cin >> y;

	cout << " mcd = " << euclides2(x,y) << endl; 
}

// funcion que retorna el MCD de dos enteros positivos
bool leap(int year) {
	return (year%400 == 0) || (year%4 == 0 && year%100 != 0); 
}


int days(int year, int mont) {
	if(mont == 2 && leap(year)) 
		return 29;
	else 
		return month[mont];
}








