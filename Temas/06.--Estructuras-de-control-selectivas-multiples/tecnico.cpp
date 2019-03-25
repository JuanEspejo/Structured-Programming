#include <iostream>
 
using namespace std;

int main()
{
	char cat;
	int des,lap,cant;
	float pago,     descuento = 0;
	
	cout << " Ingrese #desktops, categoría y #laptops: "; 
	cin >> des >> cat >> lap;

	switch(cat){
		case 'A': pago = 20*des + 30*lap; break;
		case 'B': pago = 30*des + 50*lap; break;
		case 'C': pago = 50*des + 100*lap; break;
	}
	cant = des + lap;
	if (cant > 9) {descuento = 0.25*pago; pago = 0.75*pago;}
	else if (cant > 5) {descuento = 0.20*pago; pago = 0.80*pago;}
	else if (cant > 2) {descuento = (0.10)*pago; pago = 0.90*pago;}
	
	cout << " El pago del tecnico es de " << pago << " soles." << endl;
	cout << " Y el descuento fue de " << descuento << " soles." << endl;
}







