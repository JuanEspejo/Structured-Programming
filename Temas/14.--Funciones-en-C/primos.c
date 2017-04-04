/* Este programa pide ingresar un entero positivo "n" mayor que 2 
 * y muestra todos los primos menores o iguales a "n" */
 
#include <stdio.h>

int esprimo (int N);

void main (void)
{
	int n, i, d, cont;
	
	printf("\n Ingrese un entero n mayor que 2: ");
	scanf("%d", &n);
	printf(" Los primos menores o iguales a %d son: 2", n);
	
	for(i = 3; i <= n; i++)
		if (esprimo(i) == 1) printf(", %d",i);
	printf(".\n\n");
}


int esprimo (int N)
{
	int d = 2, cont = 0;
	while (d < N && cont == 0)
	{
		if (N % d == 0) cont++;
		d++;
	}
	if (cont == 0) return 1;
	else return 0;
}
