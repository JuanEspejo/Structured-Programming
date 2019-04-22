#include<iostream>
#include<cstdlib>
#define LENGTH 10 

using namespace std;

void fill(int a[], int n);
void max(int a[], int n);

main()
{
	srand(time(NULL));
	int grade[LENGTH];
	fill(grade, LENGTH);
	max(grade, LENGTH);			
}

void fill(int a[], int n)
{
	for(int j = 0; j < n; j++)
	{
		a[j] = 1 + rand()%20;
		cout << "a[" << j << "]: " << a[j] << endl;
	}
}

void max(int a[], int n)
{
	int max = a[0];
	for(int j = 1; j < n; j++)
		if(a[j] > max) max = a[j];
	for(int j = 0; j < n; j++)
		if(a[j] == max)
		{
			cout << " index: " << j << endl;
			cout << " max: " << max << endl;
			break;
		}
}
