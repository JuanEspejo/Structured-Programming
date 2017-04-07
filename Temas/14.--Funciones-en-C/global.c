/* Ilustrando el alcance de una variable global. */

#include <stdio.h>

int x = 999; // variable global
void imprimir_valor(void);

int main( void )
{
	printf(" %d\n", x);
	imprimir_valor(); // llamando/evocando a la función imprimir_valor
	return 0;
}

void imprimir_valor(void)
{
	printf(" %d\n”", x);
}
