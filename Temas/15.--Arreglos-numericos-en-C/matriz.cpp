#include<iostream>
#include<cstdlib>
#include<iomanip>
#define ROW 2
#define COLUMN 3

using namespace std;

void fill(int* a, int row, int col);

main()
{
	srand(time(NULL));
	int notas[ROW][COLUMN];
	fill((int *)notas, ROW, COLUMN);
}

void fill(int* a, int row, int col)
{
	for(int j = 0; j < row; j++)
	{
		for(int k = 0; k < col; k++)
		{
			*(a + col*j + k) = 1 + rand()%20;
			cout << setw(4) << "a[" << j << "][";
			cout << k << "]:";
			cout << setw(2) << *(a + col*j + k);
		}
		cout << endl;
	}
}


