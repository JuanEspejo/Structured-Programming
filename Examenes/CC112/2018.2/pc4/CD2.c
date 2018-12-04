//CD2.c
#include<stdio.h>
#include<stdlib.h>
main(){
	int * p_numero, * new_numero;	
	int i, t, n, j;
	printf("Ingrese el número de enteros a alojar: ");
	scanf("%d",&t);
	p_numero = (int*)malloc(t * sizeof(int));
	if(p_numero==NULL) {printf("No hay suficiente memoria"); exit(EXIT_FAILURE);}
	printf("Ingrese el numero de elementos a leer: ");
	scanf("%d",&n);
	for(i = 0; i < n ; i++) {
		printf("Ingrese el elemento %d: ", i%t+1);
		scanf("%d",&p_numero[i%t]);
	}
	printf("------\n");
	for(i = 0; i < t ; i++) printf("Elemento %d: %d\n", i+1, p_numero[i]);
	free(p_numero);	
}
