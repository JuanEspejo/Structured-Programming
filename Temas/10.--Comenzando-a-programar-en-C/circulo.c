#include <stdio.h> 
#include <math.h>


void main( void )
{
	#define PI 3.14
	float radio;

	/* ingresando datos */
	printf("\n Ingrese el radio del circulo: ");
	scanf("%f", &radio);

	printf(" diametro = %f \n", 2*radio);
	printf(" perimetro = %f \n", 2*PI*radio);
	printf(" area = %f \n\n", PI*pow(radio,2) );
}
