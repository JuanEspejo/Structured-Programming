/* Programa que muestra el uso de variables y constantes */

/* librería estándar de E/S de datos */
#include <stdio.h> 

/* definiendo la constante de conversión de kilogramos a libras */
#define LIBRASxKILOGRAMO 2.2

/* declarando variables */
float masa_kg, masa_lb;

void main( void )
{
	/* ingresando datos */
	printf("\n Ingrese su masa en kilogramos: ");
	scanf("%f", &masa_kg);

	/* realizando la conversión */
	masa_lb = masa_kg * LIBRASxKILOGRAMO;

	printf(" Su masa es de %f libras.\n\n", masa_lb);
}
