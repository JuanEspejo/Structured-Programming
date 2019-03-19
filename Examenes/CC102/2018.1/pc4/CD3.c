#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int num;
	char cosa[10];
	int cantidad;
	int precio;
} Lista;

void factura(int n, Lista *compra){
	int i;
	float suma = 0;
	printf("Num Cosa   Cantidad Precio Total\n");
	for(i=0; i<n; i++, compra++){
		printf("%d\t%s\t%d\t%d\t%d\n", compra->num, compra->cosa, compra->cantidad, compra->precio, compra->cantidad * compra->precio);
		suma = suma + compra->cantidad * compra->precio;
	}
	printf("Suma Total\t\t: %g\n", suma);
	printf("18.5 IGV\t\t: %g\n", (float)suma * 0.185);
	printf("Suma Total\t\t: %g\n", (float)suma + (float)suma * 0.185);
}

void main(void){
	int n=4;
	Lista compra[4] = {1, "ají", 1, 2, 2, "pescado", 3, 4, 5, "papa", 5, 6, 4, "fideos", 7, 8};
	factura(n, compra);
}

