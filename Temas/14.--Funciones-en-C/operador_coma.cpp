#include<iostream>

using namespace std;

int factorial (int N);

int main ()
{
	int a = 2, b = 3;
	int j = (a, b);
	//int j = (a += 2, a + b);
	//(a += 2, b *= 5, a + 2*b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "j: " << j << endl;
}





