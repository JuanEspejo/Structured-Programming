/* Este programa pide ingresar dos enteros y muestra
 * el producto de ambos empleando una función */
 
#include <stdio.h>

int producto (int a, int b); // prototipo de la función producto

void main (void)
{
	int x, y;
	
	printf("\n Ingrese un valor entero: ");
	scanf("%d", &x);
	printf(" Ingrese otro valor entero: ");
	scanf("%d", &y);
	
	// pasamos a la función producto LOS VALORES de x e y, respectivamente
    printf(" El producto de dichos valores es %d\n\n", producto(x,y));
}

// definición de la función producto
int producto (int a, int b)
{
	return a*b; // retornando el valor que resulta de evaluar a*b
}

