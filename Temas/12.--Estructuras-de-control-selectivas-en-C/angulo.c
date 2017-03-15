/* Programa que muestra el uso de sentencias "if" 
 * con cláusulas "else" anidadas  */
#include <stdio.h>


void main( void )
{
	int x;

	printf("\n Ingrese el ángulo en sexagesimales: ");
	scanf("%d", &x);

	x = x % 360; // garantizando que |x|<=360

	if (x < 0) // si x<0, entonces trabajamos con su coterminal de sentido antihorario
		x = x + 360; 

	if (x == 0)
		printf (" Está en el semieje positivo x.");
	else if (0 < x && x < 90) 
		printf(" Está en el primer cuadrante.");
	else if (x == 90)
		printf (" Está en el semieje positivo y.");
	else if (90 < x && x < 180) 
		printf(" Está en el segundo cuadrante.");
	else if (x == 180)
		printf (" Está en el semieje negativo x.");
	else if (180 < x && x < 270) 
		printf(" Está en el tercer cuadrante.");
	else if (x == 270)
		printf (" Está en el semieje negativo y.");
	else 
		printf(" Está en el cuarto cuadrante.");

	printf ("\n\n");
}
