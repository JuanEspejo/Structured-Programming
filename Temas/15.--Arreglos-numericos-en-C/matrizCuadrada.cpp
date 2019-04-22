#include<iostream>
#include<cstdlib>
#define LENGTH 2

using namespace std;

void fill(int* a, int n);

main()
{
	srand(time(NULL));
	int notas[LENGTH][LENGTH];
	fill((int *)notas, LENGTH);
}

void fill(int* a, int n)
{
	for(int j = 0; j < n; j++)
	{
		for(int k = 0; k < n; k++)
		{
			*(a + n*j + k) = 1 + rand()%20;
			cout << "	a[" << j << "]["; 
			cout << k << "]: " << *(a + n*j + k);
		}
		cout << endl;
	}
}

