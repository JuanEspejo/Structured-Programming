#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int x0, y0, x, y; 
	float recorrido = 0;

	cout << " Ingrese las coordenas del primer punto: ";      
	cin >> x0 >> y0;
	cout << " Ingrese las coordenadas del siguiente punto: ";    
    cin >> x >> y;

   	while (x != x0 || y != y0) 
   	{
      	recorrido += sqrt(pow(x - x0,2) + pow(y - y0,2));
      	x0 = x; y0 = y; // actualizando la posición de la hormiga     
      	cout << " Ingrese las coordenadas del siguiente punto: ";    
    	cin >> x >> y;
	}
      
	cout << " El recorrido es: " << fixed << setprecision(4);
	cout << recorrido << endl;
}
