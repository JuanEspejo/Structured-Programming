// 4.c
#include<stdio.h>
#include<string.h>

typedef struct{
	char nombre[10];
	char apellido[10];
} Nombre;

typedef struct{
	int codigo;
	Nombre nombre;
	int notas[4];
} Alumno;

int main(){
	int i, I=3, ko; 
	char nombre[10];
	Alumno als[3] = {1, "Carlos", "Bazán" , 12, 13, 14, 14,
						  2, "Fiore" , "Campos", 13, 14, 15, 16,
						  3, "Mary"  , "Espejo", 14, 15, 16, 17};
	for(i=0; i<I; i++) 
		printf("%d %s %s %d %d %d %d\n", als[i].codigo, als[i].nombre.nombre, als[i].nombre.apellido, als[i].notas[0],
												   als[i].notas[1], als[i].notas[2], als[i].notas[3]);
	printf("Ingrese nombre de alumno a buscar: ");
	scanf("%s", nombre);
	ko=1;
	for(i=0; i<I; i++) {
		if(strcmp(als[i].nombre.nombre,nombre)==0) {
			ko=0;
			printf(" %d %s %s %d %d %d %d\n", als[i].codigo, als[i].nombre.nombre, als[i].nombre.apellido, als[i].notas[0],
													   als[i].notas[1], als[i].notas[2], als[i].notas[3]);
		}
	}
	if(ko) printf(" Lo siento: %s No estudia en la UNI\n", nombre);
}
