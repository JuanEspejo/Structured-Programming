#include<iostream>
#include<cstdlib>
#define LENGTH 6

using namespace std;

void fill(int a[], int n);
void printVector(int a[], int n); 
void sortInsertion(int a[], int n);

int main()
{
	srand(time(NULL));
	int grade[LENGTH];
	fill(grade, LENGTH);
	printVector(grade, LENGTH);			
	sortInsertion(grade, LENGTH);
	printVector(grade, LENGTH);			
}

void fill(int a[], int n)
{
	for(int j = 0; j < n; j++)
	{
		a[j] = 1 + rand()%20;
	}
}

void sortInsertion(int a[], int n)
{
	int temp;
	for(int j = 0; j< n - 1; j++) {
		for(int k = j; k >= 0; k--) {
			if(a[k] > a[k+1] ) {
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
			else break;
		}
	}
}

void printVector(int a[], int n) 
{
	cout << " Vector:" << endl;
	for(int j = 0; j < n; j++)
	{
		cout << "a[" << j << "]: " << a[j] << endl;
	}
	cout << endl;
}
