#include <stdio.h>

int main ()
{
	int M, N, d;
	
	printf ("Ingrese un dos enteros positivos:");
	scanf ("%d %d", &M, &N);

    	d = M;	
	if (M > N)
		d = N;
    	// d = min(M,N)

	for ( ; d >= 1 ; d = d - 1)
	{
		if ( (M%d == 0) && (N%d == 0) ) 
		{// Es decir, d es divisor tanto de M como de N	
			 mcd = d;
			 d = 1;
		}
	}

	printf ("\n El mcd(%d,%d) = %d\n", M, N, mcd);

}
