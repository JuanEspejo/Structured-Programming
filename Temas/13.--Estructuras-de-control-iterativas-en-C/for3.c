/* Programa que muestra el anidamiento de dos sentencias "for" */
#include <stdio.h>

void main( void )
{
	int x, y; // para almacenar las coordenadas
	
	for (y = 0; y >= -2; y--)
	{
		for (x = 0; x <= 4; x++)
			printf("*");
		printf("\n");
	}
}

