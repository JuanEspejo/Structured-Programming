// 1.c
#include <iostream> 
using namespace std; 
main () { 
	float sueldo, aumento;
	char rango;
	cout<<"RANGO DE SUELDO          AUMENTO"<<endl;
	cout<<"a: De $    1 a  $9000      20%"<<endl;
	cout<<"b: De $ 9000 a $15000      10%"<<endl;
	cout<<"c: De $15000 a $20000       5%"<<endl;
	cout<<"d: Más de $20000            3%"<<endl;
	cout<<"Indique su rango de sueldo (a,b,c o d): ";
	cin>>rango;
	cout<<"Ingrese su sueldo actual: ";
	cin>>sueldo;
	switch (rango) {
		case 'a': case 'A': cout<<"Su nuevo sueldo sera: " << sueldo * 1.2  <<endl; break;
		case 'b': case 'B': cout<<"Su nuevo sueldo sera: " << sueldo * 1.1  <<endl; break;
		case 'c': case 'C': cout<<"Su nuevo sueldo sera: " << sueldo * 1.05 <<endl; break;
		case 'd': case 'D': cout<<"Su nuevo sueldo sera: " << sueldo * 1.03 <<endl; break;
		default : cout<<"Opcion no valida";
 }
}
