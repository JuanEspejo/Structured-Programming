/* Programa que muestra el uso de la sentencia "switch" */
#include <stdio.h>

void main( void )
{
	int entrada;

	printf("\n Ingrese un número del 1 al 3: ");
	scanf("%d", &entrada);
	
	switch (entrada)
	{
		case 1: 
		{
			printf(" Ingresaste el 1.\n\n");
			break;
		}
		case 2: 
		{
			printf(" Ingresaste el 2.\n\n");
			break;
		}
		case 3: 
		{
			printf(" Ingresaste el 3.\n\n");
			break;
		}
		default: 
			printf(" ¡Fuera del rango!\n\n");			
	}
}
