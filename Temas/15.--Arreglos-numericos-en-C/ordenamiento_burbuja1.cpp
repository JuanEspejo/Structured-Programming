#include<iostream>
using namespace std;

int main ()
{
	int nota[4] = {12,20,18,14};
	int aux;
	
	nota[4] = {12,18,14,20}
	j = 2
	k = 0

	for (int j = 1; j < 4; j++)
	{ 
	    for (int k = 0; k < 4 - j; k++)
		{
			if (nota[k] > nota[k + 1])
			{
				aux = nota[k];
				nota[k] = nota[k + 1];
				nota[k + 1] = aux;
			}
		}
	}
		
	






	for (int j = 0; j < 4; j++)
	{
		cout << nota[j] << endl;
	}
	cout << endl;
}
