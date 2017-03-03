#include <stdio.h>

int main ()
{
    const float pi = 3.1416; // definiendo pi como una constante
    float L = pi*pi/6;
    
    int i=1;
    float s, epsilon, n = 2;
	
	printf (" Ingrese un un margen de error (epsilon): ");
	scanf ("%f", &epsilon);

    printf (" L = %f\n", L);
    printf (" Sumas parciales que superan el margen de error ingresado:\n");
	for (s = 1 ; s < L - epsilon ; )
	{ // mientras que s (la suma parcial actual) sea menor que L-epsilon...
	    printf (" s(%d) = %f\n", i, s);
	    i += 1; // actualizando el valor de i
	    s += 1/((float) i*i); // actualizando la suma parcial
	}
}
