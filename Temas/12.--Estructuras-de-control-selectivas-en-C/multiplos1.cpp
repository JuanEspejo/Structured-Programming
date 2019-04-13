#include <iostream>

using namespace std;

main () 
{
	int n;
	
	cout << " Ingrese un numero: ";
	cin >> n;
	
	cout << " Es multiplo de";
	if(n%2 == 0) 
	{
		cout << " dos"; 
	}
	if(n%3 == 0)
	{
		cout << " tres";
	} 
	if(n%5 == 0) 
	{
		cout << " dos"; 
	}
	if(n%7 == 0)
	{
		cout << " tres";
	} 
	cout << endl;
}
