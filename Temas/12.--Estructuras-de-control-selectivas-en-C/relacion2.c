/* Programa que muestra el uso de sentencias "if" */
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
		printf(" x e y son iguales.\n");
	if ((x < y) || (x > y)) 
	{
		printf(" El valor de x es %d.\n",x); 
		printf(" El valor de y es %d.\n",y); 
		printf(" Luego, x e y son diferentes.\n\n"); 
	}
}
