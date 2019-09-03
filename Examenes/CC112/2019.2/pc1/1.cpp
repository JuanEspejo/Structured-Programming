//1.cpp
#include<iostream>
#include<iomanip>
using namespace std;

void mulDiv(int n);

int main()
{
	cout<<"Multiplicación y División" << endl << endl;
	mulDiv(1);
}

void mulDiv(int n)
{
	if(n<=10)
	{
		for(int k = 1; k <= 10; k++) 
		{
			cout << setw(4) << n << "*" << setw(2) << k << " = " << n*k;
			cout << setw(5) << n*k << "/" << n << " = " << k << "\n";
		}
		cout<<endl;
		mulDiv(n+1);
	} else return;
}
