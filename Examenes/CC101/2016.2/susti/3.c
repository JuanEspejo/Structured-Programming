#include <stdio.h>

int main ()
{
	int i, n, primos = 0, noprimos = 0, propios, d;

	printf (" Ingrese un entero positivo: ");
	scanf ("%d", &n);
	
	// noprimos almacenará la suma de los enteros que NO son primos
	noprimos = 1; // ya que, 1 NO es primo
	
	for ( i = 2 ; i <= n ; i = i+1 )
	{
		// se verá si el número i es o NO un primo
		propios = 0;
		for ( d = 2 ; d < i ; d = d+1 )
		    if (i%d == 0) propios += 1; // contamos un divisor propio (>1) de i
		if (propios == 0) primos += i; // caso en que i es primo
		else noprimos += i; // caso en que i NO es primo
	}
		
	printf (" primos: %d\n", primos);
	printf (" no primos: %d\n", noprimos);
	printf (" todos: %d\n", primos + noprimos);
}
