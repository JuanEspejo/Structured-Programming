//1.c
#include <stdio.h>
void main(void) {
	int a1,a2,a3,b1,b2,b3;	
	printf ("\n ingrese las coordenadas de A: ");
	scanf ("%d %d %d", &a1, &a2, &a3);
	printf ("\n ingrese las coordenadas de B: ");
	scanf ("%d %d %d", &b1, &b2, &b3);		
	printf (" AxB = (%d,%d,%d)\n", a2*b3 - b2*a3, b1*a3 - a1*b3, a1*b2 - b1*a2);
	printf (" A.B = %d\n", a1*b1 + a2*b2 + a3*b3);
}
