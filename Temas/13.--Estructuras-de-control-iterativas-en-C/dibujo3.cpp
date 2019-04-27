#include<iostream>

using namespace std;

main ()
{
	int j, k;
	
	j = 1;
	while (j <= 10)
	{
		k = 1;
		while(k <= j)
		{
			cout << " *";
			k = k + 1; 
		}	
		cout << endl;
		j = j + 1;
	} 
}
