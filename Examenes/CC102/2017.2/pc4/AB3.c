//AB3.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ingresar ();
void generar ();
void mostrar ();
typedef struct plantilla_vendedor {
	char nombre[10];
	float base; // el sueldo base
} vendedor;
vendedor vendedores[2];	
float    ventas[2];
void main (){
	ingresar ();
	generar ();
	mostrar ();
}
void ingresar (){
	int i = 0;
	for ( ; i < 2 ; i += 1){
		printf("\n");
		printf("Datos de vendedores[%d]:\n",i+1);
		printf("  Nombre     : ");
		scanf("%s", vendedores[i].nombre);
		printf("  Sueldo base: ");
		scanf("%f", &vendedores[i].base);
	}
}
void generar (){
	int i = 0; // ventas en miles de soles
	srand(time(NULL));
	for ( ; i < 2 ; i += 1) ventas[i] = rand()%10;
}
void mostrar (){
	int i = 0;
	float com, pago, total=0;
	printf("\nNombre   Base    Comisión       Pago\n");
	for ( ; i < 2 ; i += 1){
		com = 200 * ventas[i];
		pago = vendedores[i].base + com;
		total += pago;
		printf("%s\t %.2f\t %.2f\t %.2f\n", vendedores[i].nombre, vendedores[i].base, com, pago);		
	}
	printf("\t\t   Total pagos:  %.2f\n", total);
}
