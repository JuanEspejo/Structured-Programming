//1.c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define CINCO 5
main(){
	int i, aux, *x=NULL;
	srand(time(NULL));
	aux = rand()%6 + 1;
	for(i=0; CINCO != aux; i++){
		x = (int *)realloc(x, (i+1)*sizeof(int));
		if(x == NULL) {printf(" No hay espacio suficiente.\n"); exit(EXIT_FAILURE);}
		x[i] = aux;
		aux = rand()%6 +1;
	}
	printf(" lances desde el más reciente: ");
	if(i) {
		x[i] = aux;
		for(; i>0; i--)	printf("%2d,", x[i]);
		printf("%2d\n", x[i]);
		free(x);
	} else printf("%2d \n", aux);
}
