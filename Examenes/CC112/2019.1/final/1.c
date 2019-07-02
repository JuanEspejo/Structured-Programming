//1.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
void leer_matriz(int n, int *p);
void escribir_matriz(int m, int n, int *p);
void maximo(int n, int *p);
main(){
	int m=4, n=3, mat[4][3], *p=mat[0];
	leer_matriz(m*n, p);
	escribir_matriz(m, n, p);
	maximo(m*n, p);
}
void leer_matriz(int n, int *p){
	int i;
	srand(time(NULL));
	for(i=0; i<n; i++) *p++ = rand()%21;
}
void escribir_matriz(int m, int n, int *p){
	int i, j;
	printf("Matriz %dx%d\n", m, n);
	for(i=0; i<m; i++){
		for(j=0; j<n; j++) printf("%5d", *p++);
		printf("\n");
	}
}
void maximo(int n, int *p){
	int i, max;
	for(max=*p++, i=1; i<n; i++, p++) if(max <*p) max=*p;
	printf("El máximo es: %d\n", max);
}
