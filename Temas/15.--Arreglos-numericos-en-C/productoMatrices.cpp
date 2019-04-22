#include<iostream>
#include<cstdlib>
#include<iomanip>
#define ROW 2
#define COLUMN 3

using namespace std;

void fill(int * a, int row, int col);
void product(int * a, int * b, int p, int q, int r);

main()
{
	srand(time(NULL));
	int matrixA[ROW][COLUMN], matrixB[COLUMN][ROW];
	fill((int *)matrixA, ROW, COLUMN);
	fill((int *)matrixB, COLUMN, ROW);
	product((int *)matrixA, (int *)matrixB, ROW, COLUMN, ROW);
}

void fill(int* a, int row, int col)
{
	for(int j = 0; j < row; j++)
	{
		for(int k = 0; k < col; k++)
		{
			*(a + col*j + k) = rand()%5;
			cout << setw(4) << "a[" << j << "][";
			cout << k << "]:";
			cout << setw(2) << *(a + col*j + k);
		}
		cout << endl;
	}
	cout << endl;
}

void product(int * a, int * b, int p, int q, int r)
{
	for(int j = 0; j < p; j++)
	{
		for(int l = 0; l < r; l++)
		{
			int sum = 0;
			for(int k = 0; k < q; k++)
				sum += *(a + q*j + k)**(b + r*k + l);
			cout << setw(4) << "R[" << j << "][";
			cout << l << "]:";
			cout << setw(2) << sum;
		}
		cout << endl;
	}
	cout << endl;
}








