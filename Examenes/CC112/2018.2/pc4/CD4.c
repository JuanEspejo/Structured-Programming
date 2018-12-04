//CD4.c&
#include<cstdio>
#include<cstdlib>
typedef struct{
	int codigo;
	char nombre[10];
	int notas[4];
} Alumno;
main(){
	Alumno alum[] = {1, "Juan", 13, 14, 15, 16, 2, "María", 17, 12, 13, 18, 3, "Ross", 18, 17, 12, 15};
	int n = sizeof(alum)/sizeof(Alumno), i, j, suma, imin, imax;
	float prom, pmin=20, pmax=0;

	printf("Lista de estudiantes\nCódigo  Nombre 	Notas         Promedio\n");
	for(i=0; i<n; i++){
		suma = 0;
		for(j=0; j<4; j++) suma += alum[i].notas[j];
		prom = (float)suma/4;		
		if(pmax<prom) {
			pmax = prom;
			imax = i;
		} 
		if(pmin>prom){
			pmin = prom;
			imin = i;
		}
		printf("%d\t%s\t%d %d %d %d   %.2f\n", alum[i].codigo, alum[i].nombre, alum[i].notas[0], alum[i].notas[1], alum[i].notas[2], alum[i].notas[3], prom);		
	}
	printf("Estudiantes con las notas mínima y máxima:\n");
	printf("%d\t%s\t%d %d %d %d   %.2f\n", alum[imin].codigo, alum[imin].nombre, alum[imin].notas[0], alum[imin].notas[1], alum[imin].notas[2], alum[imin].notas[3], pmin);		
	printf("%d\t%s\t%d %d %d %d   %.2f\n", alum[imax].codigo, alum[imax].nombre, alum[imax].notas[0], alum[imax].notas[1], alum[imax].notas[2], alum[imax].notas[3], pmax);		
}
