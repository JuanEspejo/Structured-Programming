#include <iostream>

using namespace std;

main () 
{
	int n;
	
	cout << " Ingrese un numero: ";
	cin >> n;
	cout << " Es multiplo de ";
	
	if(n%2 == 0) 
	{
		cout << "dos"; 
	}
	else if(n%3 == 0)
	{
		cout << "tres";
	} 
	else if(n%5 == 0) 
	{
		cout << "cinco"; 
	}
	else
	{
		cout << "siete";
	}	 
	cout << endl;
}
