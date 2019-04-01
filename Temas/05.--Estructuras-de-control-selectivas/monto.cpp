#include <iostream>
#include <iomanip>

using namespace std;

int main () {

	float monto;
	
	cout << " Ingrese el monto total de la compra (S/.): ";
	cin >> monto;
	
	cout << fixed << setprecision(2);
	if (monto > 500000) {
		cout << setw(80) << " El monto a invertir es: "; 
		cout << "S/. " << monto*0.55 << endl;
		cout << " El monto de préstamo al banco es: \t\t\tS/. " << monto*0.30 << endl;
		cout << " El monto del crédito al fabricante es: \t\t\tS/. " << monto*0.15 << endl;
		cout << " El interés del crédito es: \t\t\t\tS/. " << monto*0.15*0.2 << endl;
	}
	else {
		cout << left << setw(45) << " El monto a invertir es:";
		cout << "S/." << right << setw(8) << monto*0.70 << endl;
		cout << left << setw(45) << " El monto del credito al fabricante es:";
		cout << "S/." << right << setw(8) << monto*0.30 << endl;
		cout << left << setw(45) << " El interes del credito es:";
		cout << "S/." << right << setw(8) << monto*0.30*0.2 << endl;
	}
}
