#include <stdio.h>

int main ()
{
	int M, N, d, mcd = 1;
	
	printf ("Ingrese un dos enteros positivos:");
	scanf ("%d %d", &M, &N);
	
	for (d = 2; (d <= M) && (d <= N) ; d = d + 1)
	{
		if ( (M%d == 0) && (N%d == 0) ) 
		{// Es decir, d es divisor tanto de M como de N	
			 mcd = d;
		}
	}

	printf ("\n El mcd(%d,%d) = %d\n", M, N, mcd);

}
