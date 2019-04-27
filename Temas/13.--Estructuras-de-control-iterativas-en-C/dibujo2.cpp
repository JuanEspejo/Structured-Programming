#include<iostream>

using namespace std;

main ()
{
	int j, k;
	
	j = 0;
	while (j < 7)
	{
		k = 0;
		while(k < 4)
		{
			cout << "*";
			k = k + 1; 
		}	
		cout << endl;
		j = j + 1;
	} 
}
