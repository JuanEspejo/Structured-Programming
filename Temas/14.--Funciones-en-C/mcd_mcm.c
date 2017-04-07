/* Este programa pide ingresar dos enteros positivos y muestra
 * el MCD y el MCM de ambos, empleando funciones */
 
#include <stdio.h>

// prototipos de funciones
int mcd (int a, int b); 
int mcm (int a, int b);

int main (void)
{
	int x, y;
	
	printf("\n x: ");
	scanf("%d", &x);
	printf(" y: ");
	scanf("%d", &y);

	printf(" mcd = %d.\n", mcd(x,y)); 
	printf(" mcm = %d.\n", mcm(x,y));
	printf("\n");
	return 7;		
}

// funcion que retorna el MCD de dos enteros positivos
int mcd (int a, int b)
{
	int d = 1, m;
	while (d <= a && d <= b)
	{
		if (a % d == 0  &&  b % d == 0) m = d;
		d++;
	}
	return m; // m almacena al mayor divisor común de a y b
}

// funcion que retorna el MCM de dos enteros positivos
int mcm (int a, int b)
{
	int m = mcd(a,b);
	return (a*b)/m;
}








