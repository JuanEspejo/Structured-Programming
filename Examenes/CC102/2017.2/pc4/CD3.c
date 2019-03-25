//CD3.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ingresar ();
void mostrar ();

typedef struct {
	char nombre[10];
	float compra; // 
} Comprador;

Comprador compradores[2];	

void main (){
	ingresar ();
	mostrar ();
}

void ingresar (){
	int i = 0;
	for ( ; i < 2 ; i += 1){
		printf("Pedido del comprador[%d]:\n",i+1);
		printf("Nombre: ");
		scanf("%s", compradores[i].nombre);
		printf("Compra: ");
		scanf("%f", &compradores[i].compra);
	}
}

void mostrar (){
	int i = 0;
	float desc, fact, total=0;
	printf("\nNombre   compra  Descto. Factura\n");
	for ( ; i < 2 ; i += 1){
		desc = .10 * compradores[i].compra;
		fact = compradores[i].compra - desc;
		total += fact;
		printf("%s\t %.2f\t %.2f\t %.2f\n", compradores[i].nombre, compradores[i].compra, desc, fact);		
	}
	printf("\tTotal facturas:  %.2f\n", total);
}
