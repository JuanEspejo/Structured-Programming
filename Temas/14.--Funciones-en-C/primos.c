/* Este programa pide ingresar un entero positivo "n" mayor que 2 
 * y muestra todos los primos menores o iguales a "n" */
 
#include <stdio.h>

// prototipo de la función esprimo
int esprimo (int N); 

void main (void)
{
	int n, i, d, cont;
	
	printf("\n Ingrese un entero n mayor que 2: ");
	scanf("%d", &n);
	printf(" Los primos menores o iguales a %d son: 2", n);
	
	for(i = 3; i <= n; i++)
	    // pasamos a la función esprimo EL VALOR de i
		if (esprimo(i) == 1) printf(", %d",i);
	printf(".\n\n");
}


int esprimo (int N)
{
	int d = 2, cont = 0; 
	while (d < N && cont == 0)
	{
		if (N % d == 0) cont++; // contando
		d++;
	}
	// cont almacena la cantidad de divisores propios de N mayores que 1
	if (cont == 0) return 1; // retornamos 1 si N es primo
	else return 0; // retornamos 0 si N no es primo
}
