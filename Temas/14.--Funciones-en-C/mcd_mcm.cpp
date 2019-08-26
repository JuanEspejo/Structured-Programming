#include<iostream>

using namespace std;

int mcd (int a, int b);
int mcm (int a, int b);

int compu;// esta es una variable global 
		  // pq esta definida fuera de todas las funciones	

int main ()
{
	int x, y;// 'x' e 'y' son variables locales pq estan 
			 // definidas dentro de la funcion 'main'
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	cout << "mcd: " << mcd(x,y) << endl;
	cout << "mcm: " << mcm(x,y) << endl;
}

int mcd (int a, int b)
{ 	// a : 15
	// b : 20
	// d : 1,2,3,4,5,6,7...,15
	// m : 1,5
	int m;
	for (int d = 1; d <= a && d <= b; d++)
		if (a % d == 0  &&  b % d == 0) m = d;
	return m;
}

int mcm (int a, int b)
{
	int m = mcd(a,b);
	return (a*b)/m;
}






