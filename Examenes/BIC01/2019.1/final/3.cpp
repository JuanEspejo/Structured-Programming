#include<cstdio>

int factorial(int n);

int main()
{
	double sn = 0;
	for (int n = 0; n <= 10; n++)
	{
		sn += (double)1/factorial(n);
		if (n%2 == 0)
			printf(" s(%2d) = %.6f\n", n, sn);
	}
}

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n*factorial(n - 1);
}
