/* Programa que muestra el anidamiento de dos sentencias "while" */
/* Este programa pide el ingreso de tres valores enteros 
 * del intervalo [1,9] */ 

#include <stdio.h>

void main( void )
{	
	int 	i; // para almacenar el índice
	int 	numero[3]; // declarando arreglo numero
	int 	temp; // para almacenar valores temporalmente

	i = 0;
	while (i <= 2) // leyendo los tres enteros 
	{
		temp = 0;
		while (temp < 1  ||  temp > 9)
		{
			printf(" numero[%d] = ", i);
			scanf("%d", &temp);
		}
		numero[i++] = temp;
	}
			
	printf("\n Datos ingresados:\n");
	for (i = 0; i <= 2; i++)
		printf(" numero[%d] = %d\n", i, numero[i]);
}

