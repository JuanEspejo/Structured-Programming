#include<iostream>

using namespace std;

main ()
{
	int n, u, d;
	
	cout << " Ingrese un nuemro (1-99): ";
	cin >> n;
	d = n/10;
	u = n%10; 

	cout << " Representación en romano: ";
	switch(d)
	{
		case 1: cout << "X"; break;
		case 2: cout << "XX"; break;
		case 3: cout << "XXX"; break;
		case 4: cout << "XL"; break;
		case 5: cout << "L"; break;
		case 6: cout << "LX"; break;
		case 7: cout << "LXX"; break;
		case 8: cout << "LXXX"; break;
		case 9: cout << "XC"; break;
	}
	switch(u)
	{
		case 1: cout << "I"; break;
		case 2: cout << "II"; break;
		case 3: cout << "III"; break;
		case 4: cout << "IV"; break;
		case 5: cout << "V"; break;
		case 6: cout << "VI"; break;
		case 7: cout << "VII"; break;
		case 8: cout << "VIII"; break;
		case 9: cout << "IX"; break;
	}
	cout << endl;
}





