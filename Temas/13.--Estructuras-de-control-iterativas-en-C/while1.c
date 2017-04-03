/* Programa que muestra el uso de las sentencias "while" */
#include <stdio.h>

void main( void )
{
	int cont;
	
	/* mostrando los números enteros del 1 al el 20 */
	cont = 1;
	while (cont <= 20)
	{
		printf(" %d\n", cont);
		cont++;
	}
}

