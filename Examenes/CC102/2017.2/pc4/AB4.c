//AB4.c
#include<stdio.h>
#include<string.h>
typedef struct {
	char nombre[10];
	int sueldo, edad;
} Profe;
void impr      (Profe *profe, int n);
void actualizar(Profe *profe, int n, int carlosSueldo, int carlosEdad); 
void main(void){
	int n = 4, carlosSueldo = 20000, carlosEdad = 25;
	Profe profe[4] = {{"Juan", 1000, 27}, {"Pedro", 4000, 40}, {"Carlos", 120, 1200}, {"Martín", 2000, 21}};
	printf("Datos iniciales:\n");
	impr(profe, n);
	actualizar(profe, n, carlosSueldo, carlosEdad); 
	printf("\nDatos actualizados:\n");
	impr(profe, n);
}
void impr(Profe *profe, int n){
	int i;
	printf("Nombre   Sueldo  Edad\n");
	for(i=0; i< n; i++, profe++)
		printf("%s\t %d\t %d\n", profe->nombre, profe->sueldo, profe->edad);
}
void actualizar(Profe *profe, int n, int carlosSueldo, int carlosEdad){
	int i;
	char carlos[] = "Carlos", dato[7];
	for(i=0; i< n; i++, profe++){
		strncpy(dato, profe->nombre, 6);
		if(strcmp(carlos, dato)==0){
			profe->sueldo = carlosSueldo;
			profe->edad = carlosEdad;
		} else profe->sueldo *= 2;
	}
}
