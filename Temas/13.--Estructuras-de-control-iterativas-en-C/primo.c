#include <stdio.h>

int main ()
{
	int N, d, propios = 0;
	
	printf ("Ingrese un entero mayor que uno:");
	scanf ("%d",&N);
	
	for (d = 2; d < N; d = d + 1)
	{
		if (N%d == 0) 
		{// Es decir, d es divisor de N	
			//Contamos un divisor propio de N
			 propios = propios + 1;
		}
	}

	if (propios == 0)
		printf ("El numero ingresado es primo.\n");
	else
		printf ("El numero ingresado NO es primo.\n");

}
