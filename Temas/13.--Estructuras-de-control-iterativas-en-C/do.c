/* Programa que muestra el empleo de un menú de 
 * selección mediante una sentencia del tipo "do...while" */

#include <stdio.h>

void main( void )
{
	int seleccion = 0;
	
	do
	{
		printf("\n 1. Agregar" );
		printf("\n 2. Cambiar");
		printf("\n 3. Eliminar");
		printf("\n 4. Salir");
		printf("\n" );
		printf("\n Ingrese una seleccion: " );
		scanf("%d", &seleccion );
	}
	while ( seleccion < 1 || seleccion > 4 );
	
	printf(" Usted eligió: %d\n", seleccion);
}

