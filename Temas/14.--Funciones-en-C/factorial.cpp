#include<iostream>

using namespace std;

int factorial (int N);

int main ()
{
	int n;
	cout << "n: ";
	cin >> n;
	cout << "factorial: " << factorial(n) << endl;
}

int factorial (int N)
{
	if (N == 1) return 1;
	else return N*factorial(N - 1);
}






