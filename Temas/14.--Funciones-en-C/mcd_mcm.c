              /* Este programa pide ingresar dos enteros positivos y muestra
 * el MCD y el MCM de ambos, empleando funciones */
 
#include <stdio.h>

// prototipos de funciones
int mcd (int a, int b); 
int mcm (int a, int b);

int main (void)
{
	int a,b;
	
	printf("\n a: ");
	scanf("%d", &a);
	printf(" b: ");
	scanf("%d", &b);

	printf(" mcd = %d.\n",mcd(a,b));
	printf(" mcm = %d.\n",mcm(a,b));
	printf("\n");
	return 7;		
}

// funcion que retorna el MCD si se ingresan dos enteros positivos
int mcd (int a, int b)
{
	int d = 1, m;
	while (d <= a && d <= b)
	{
		if (a % d == 0  &&  b % d == 0) m = d;
		d++;
	}
	return m;
}

// funcion que retorna el MCM si se ingresan dos enteros positivos
int mcm (int a, int b)
{
	int m = mcd(a,b);
	return (a*b)/m;
}








