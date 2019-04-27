#include<iostream>
#include<cmath>

using namespace std;

main ()
{
	int n;
	cout << " ingrese n: ";
	cin >> n;
	for(int j = n-1; j >= -(n-1); j = j-1)
	{
		for(int k=0; k <= (n-1)-abs(j); k = k+1)
		{
			cout << " *";
		}
		cout << endl;
	} 
}
