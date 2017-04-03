/* Programa que muestra el uso de sentencias "for" */
#include <stdio.h>

void main()
{
	int i; // para almacenar el índice
	float ingresos[7]; // para almacenar los ingresos de la semana

	/* leyendo los ingresos de la semana */
	for (i = 0; i <= 6; i++)
	{
		printf(" ingreso[%d] = ", i);
		scanf("%f", &ingresos[i]);
	}		
	/* escribiendo los datos leidos */
	printf("\n Datos ingresados:\n");
	for (i = 0; i <= 6; i++)
		printf(" ingreso[%d] = %f\n", i, ingresos[i]);
}

