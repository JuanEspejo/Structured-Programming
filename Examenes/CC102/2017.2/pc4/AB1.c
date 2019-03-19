//AB1.c
#include<stdio.h>
#include<stdlib.h>
int leerCantidad();
int *leer(int cantidad);
void imprimir(int cantidad, int *numeros);
void main(void) {
	int cantidad, *numeros;
	cantidad = leerCantidad();
   numeros = leer(cantidad);
	imprimir(cantidad, numeros);
	free(numeros);
}
int leerCantidad() {
    int cantidad;
    printf("Cuantos numeros va a ingresas ?: ");
    scanf("%d", &cantidad);
    return cantidad;
}
int *leer(int cantidad) {
	int i, *numeros = malloc(cantidad * sizeof(int)), *p;
	if(!numeros) {
		printf("No hay espacio para la memoria dinámica");
		exit(EXIT_FAILURE);
	}
	p = numeros;
	while(i<cantidad){
		printf("Número %d: ", i++ +1);
		scanf("%d", p++);
  	}
	return numeros;
}
void imprimir(int cantidad, int *numeros) {
	int i = 0;
	printf("\nNúmeros ingresados:\n");
	while(i<cantidad) printf("Número %d: %d\n", i++ +1, *numeros++);
}
