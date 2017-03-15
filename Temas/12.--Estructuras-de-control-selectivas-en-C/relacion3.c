/* Programa que muestra el uso de sentencias "if" con cláusula "else" */
#include <stdio.h>


void main( void )
{
	int x, y;
	
	/* Ingresando los dos valores a ser comparados */
	printf("\n Ingrese un valor entero para x: ");
	scanf("%d", &x);
	printf(" Ingrese un valor entero para y: ");
	scanf("%d", &y);

	if (x == y) 
		printf(" x es igual a y.\n\n");
	else
	{
		if (x < y) 
			printf(" x es menor que y.\n\n");
		else 
			printf(" x es mayor que y.\n\n");
	}
}

