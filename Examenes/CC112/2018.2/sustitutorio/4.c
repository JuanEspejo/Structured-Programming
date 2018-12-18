#include<cstdio>
#include<cstdlib>
typedef struct{
	char nombre[10];
	char apellido[10];
} Nombre;
typedef struct{
	int codigo;
	Nombre nombre;
	int notas[4];
} Alumno;
main(){
	int n=2, i, j, bono;
	Alumno *p= (Alumno *)malloc(n*sizeof(Alumno));
	if(p==NULL) {printf("No hay memoria dinámica\n"); exit(EXIT_FAILURE);}
	Alumno *pp=p;
	for(i=0; i<n; i++, pp++){
		printf("Alumno %d:\n", i+1);		
		printf("Ingrese Código: "); 	scanf("%d", &pp->codigo);
		printf("Ingrese Nombre: "); 	scanf("%s", pp->nombre.nombre);
		printf("Ingrese Apellido: "); scanf("%s", pp->nombre.apellido);
		printf("Ingrese 4 notas: ");  scanf("%d %d %d %d", &pp->notas[0], &pp->notas[1], &pp->notas[2], &pp->notas[3]);
	}
	for(pp=p, i=0; i<n; i++, pp++){
		printf("\nAlumno %d: ", i+1);		
		printf("%d ", pp->codigo);
		printf("%s ", pp->nombre.nombre);
		printf("%s ", pp->nombre.apellido);
		printf("%d %d %d %d", pp->notas[0], pp->notas[1], pp->notas[2], pp->notas[3]);
	}
	printf("\n\nIngrese el bono para las notas: "); 	scanf("%d", &bono);
	for(pp=p, i=0; i<n; i++, pp++){
		printf("\nAlumno %d: ", i+1);	
		printf("%d ", pp->codigo);
		printf("%s ", pp->nombre.nombre);
		printf("%s ", pp->nombre.apellido);
		for(j=0; j<4; j++) {
			pp->notas[j]= (pp->notas[j]>20-bono)? 20: pp->notas[j]+bono;
			printf("%d ", pp->notas[j]);
		}
		printf("\n");
	}
	free(p);
}
