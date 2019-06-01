//3.c
#include <stdio.h>
#define N 100
void main(void) {  
   char criba[N];  int i, j;
	criba[0] = 0;  /* Inicialización */ 
	criba[1] = 0;
	for (i=2; i<N; i++) criba[i] = 1;

/* Criba de Eratóstenes */
	for (i=2; i<N; i++) 
		if (criba[i]) 
			for (j=2; i*j<N; j++) criba[i*j] = 0;

 /* Mostrar los resultados */
	printf("Criba de Eratóstenes\n");
	for (i=0; i<N; i++) if (criba[i]) printf ("%d\n", i);
}
