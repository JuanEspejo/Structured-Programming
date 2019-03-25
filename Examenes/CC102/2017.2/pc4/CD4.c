// CD4.c
#include<stdio.h>

typedef struct {
	char nombre[10];
	int sueldo, edad;
} Profe;

void impr      (Profe *profe, int n);
void actualizar(Profe *profe, int n); 

void main(void){
	int n = 4, carlosSueldo = 20000, carlosEdad = 25;
	Profe profe[4] = {{"Juan", 1100, 27}, {"Pedro", 4300, 40}, {"Carlos", 2010, 70}, {"Martín", 3100, 21}};
	printf("Datos iniciales:\n");
	impr(profe, n);
	actualizar(profe, n); 
	printf("\nDatos actualizados:\n");
	impr(profe, n);
}

void impr(Profe *profe, int n){
	int i;
	printf("Nombre   Sueldo  Edad\n");
	for(i=0; i< n; i++, profe++)
		printf("%s\t %d\t %d\n", profe->nombre, profe->sueldo, profe->edad);
}

void actualizar(Profe *profe, int n){
	int i;
	for(i=0; i< n; i++, profe++)
		if (profe->sueldo<2000) profe->sueldo *= 4;
		else if (profe->sueldo<3000) profe->sueldo *= 3;
		else if(profe->sueldo<4000) profe->sueldo *= 2;
		else profe->sueldo *= 1.5;
}

