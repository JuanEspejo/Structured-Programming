#include<iostream>

using namespace std;			

int main() {
	int A[20];
	int B[20];
	int nA, jA = 0, nB, jB = 0, N, suma;
	int fibo0 = 0, fibo = 1, aux;
	
	cout << "N(<=20): ";
	cin >> N;
	while (fibo <= N) {
		if (fibo%2 == 0) A[jA++] = fibo;
		else B[jB++] = fibo;
		aux = fibo;
		fibo = fibo0 + fibo;
		fibo0 = aux;  
	}
	
	nA = jA--;
	suma = 0;
	while (jA >= 0)
		suma = suma + A[jA--];
	cout << "promedio de A: " << (float)suma/nA << endl;
	
	nB = jB--;
	suma = 0;
	while (jB >= 0)
		suma = suma + B[jB--];
	cout << "promedio de A: " << (float)suma/nB << endl;	
}
