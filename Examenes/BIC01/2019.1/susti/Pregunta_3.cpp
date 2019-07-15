#include<cstdio>
#include<cmath>

void euler();
void ln2();

int main()
{
	euler();
	ln2();
}

void euler()
{
	double an = 0;
	for (int n = 1; n <= 25000; n++)
	{
		an += (double)1/pow(n,2);
		if (n % 5000 == 0)
			printf(" a(%3d) = %.3f\n", n, sqrt(6*an));
	}
}

void ln2()
{
	double bn = 0;
	for (int n = 1; n <= 25000; n++)
	{
		if (n % 2 == 0)
			bn -= (double)1/n;
		else
			bn += (double)1/n;
		if (n % 5000 == 0)
			printf(" b(%3d) = %.3f\n", n, bn);
	}
}