/* Programa que muestra el uso de las sentencias "while" */
#include <stdio.h>

int cont;

void main( void )
{
	/* mostrando los números enteros del 1 al el 20 */
	cont = 1;
	while (cont <= 20)
	{
		printf(" %d\n", cont);
		cont++;
	}
}

