/* Ilustrando el alcance de una variable global. */

#include <stdio.h>

void imprimir_valor(void);

int main( void )
{
	int x = 999; // variable local
	printf(" %d\n", x);
	imprimir_valor();
	printf(" %d\n", x);	
	return 0;
}

void imprimir_valor(void)
{
	//int x = 25;
	printf(" %d\n", x);
}
