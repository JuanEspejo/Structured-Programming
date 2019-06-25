#include<stdio.h>

int fibo(int n); // Prototipo de la función fibo

int main()
{
	printf(" F(%d) = %d.\n\n", 30, fibo(30));
	printf(" F(%d) = %d.\n\n", 35, fibo(35));
}

int fibo(int n)
{
	if (n <= 2)
		return 1; // fibo(1) = fibo(2) = 1else
	return fibo(n-1) + fibo(n-2); // fibo(n) = fibo(n-1) + fibo(n-2)
}
