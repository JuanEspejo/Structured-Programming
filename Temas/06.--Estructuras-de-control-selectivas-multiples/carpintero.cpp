#include <iostream>

using namespace std;

int main (){
	
	int expe, sillas, mesas, cantidad;
	float pago;
	
	cout << " Ingrese el número de años de experiencia: ";
	cin >> expe;
	cout << " Ingrese el número de sillas: ";
	cin >> sillas;
	cout << " Ingrese el número de mesas: ";
	cin >> mesas;
	
	if (expe > 20) pago = sillas*25 + mesas*40;
	else if (expe > 5) pago = sillas*35 + mesas*60;
	else pago = sillas*20 + mesas*30;
	
	cantidad = sillas + mesas;
	
	if (cantidad > 20) pago = 1.5*pago;
	else if (cantidad > 5) pago = 1.2*pago;

	cout << " El pago es: " << pago << endl;	
}







