/* Programa que muestra el anidamiento de dos sentencias "for" */
#include <stdio.h>

int x, y; // para almacenar las coordenadas

void main( void )
{
	for (y = 0; y >= -2; y--)
	{
		for (x = 0; x <= 4; x++)
			printf("*");
		printf("\n");
	}
}

