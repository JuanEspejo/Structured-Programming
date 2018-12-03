//AB4.c&
#include<cstdio>
#include<cstdlib>
typedef struct{
	int codigo;
	char nombre[10];
	int notas[4];
} Alumno;
main(){
	Alumno alum[] = {1, "Juan", 13, 14, 15, 16, 2, "María", 17, 12, 13, 18, 3, "Ross", 18, 17, 12, 15};
	int n = sizeof(alum)/sizeof(Alumno), i, j, suma, min;
	float prom, pmin=20, pmax=0;
	printf("Lista de estudiantes\nCódigo  Nombre 	Notas         Promedio\n");
	for(i=0; i<n; i++){
		suma = 0;
		min = alum[i].notas[0];
		for(j=0; j<4; j++){
			if(min>alum[i].notas[j]) min = alum[i].notas[j];
			suma += alum[i].notas[j];
		}
		prom = (float)(suma-min)/3;
		if(pmax<prom) pmax = prom;
		if(pmin>prom) pmin = prom;
		printf("%d\t%s\t%d %d %d %d   %.2f\n", alum[i].codigo, alum[i].nombre, alum[i].notas[0], alum[i].notas[1], alum[i].notas[2], alum[i].notas[3], prom);		
	}
	printf("Mínimo: %.2f, Máximo: %.2f\n", pmin, pmax);
}
