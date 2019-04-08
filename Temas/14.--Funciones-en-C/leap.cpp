#include <iostream>
using namespace std;

// arreglo global
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// prototipos de funciones
bool leap(int year);
int days(int year, int month);

main () {
	int year, mont;	
	
		
	cout << " year: ";
	cin >> year;
	cout << " month: ";
	cin >> mont;

	cout << " This month has " << days(year, mont);
	cout << " days." << endl; 
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
