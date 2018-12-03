//AB2.c
#include<stdio.h>
#include<stdlib.h>
main(){
	int * p_numero, * new_numero;	
	int i, dato, tama=4, tamb, n2=0, in2=0;
	p_numero = (int*)malloc(tama * sizeof(int));
	if(p_numero==NULL) {printf("No hay suficiente memoria"); exit(EXIT_FAILURE);}
	for(i = 0; i < tama ; i++){
		printf("Ingrese el valor %d: ", i+1);
		scanf("%d", (p_numero + i));
	}
	for(i = 0; i < tama ; i++){
		printf("Valor %d: %d\n", i+1, p_numero[i]);
		if( *(p_numero + i) % 2 == 0) n2++;
	}
	printf("\nAdicional %d \n",n2);	
	tamb = tama + n2;
	p_numero = (int*)realloc( p_numero , tamb * sizeof(int));
	if(p_numero==NULL) {printf("No hay suficiente memoria"); exit(EXIT_FAILURE);}
	for( i = 0; i <  tama ; i++ )
		if(p_numero[i] % 2 == 0) {
			p_numero[tama+in2] = p_numero[i];
			in2++;
		}	
	printf("------\n");
	for(i = 0; i < tamb ; i++) printf("Valor %d: %d\n", i+1, p_numero[i]);
	free(p_numero);	
}
