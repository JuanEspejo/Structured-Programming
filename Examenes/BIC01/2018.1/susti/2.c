//2.c
#include <stdio.h>
void main(void) {
	int n, cie, cin, vei;	
	printf ("\n ingrese cantidad de billetes de 100, 50 y 20, respectivamente: ");
	scanf ("%d %d %d", &cie, &cin, &vei);
	printf (" ingrese la cantidad a retirar: ");
	scanf ("%d", &n);		
	if (n > cie*100 + cin*50 + vei*20)
		printf(" No hay saldo suficiente.\n\n");
	else 
		printf(" Sí hay saldo suficiente.\n\n");
}
