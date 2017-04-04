#include <stdio.h>

int main ()
{
	int M, N, R;
	
	printf (" Ingrese dos enteros positivos: ");
	scanf ("%d %d", &M, &N);
	
	if (M < N)
	{
	    R = M; // utilizamos R como variable auxiliar	
        M = N;
        N = R;
	}
        
	for (R = M%N ; R != 0 ; R = M%N)
	{
        M = N;
        N = R;
	}

	printf (" El mcd es %d\n", N);

}
