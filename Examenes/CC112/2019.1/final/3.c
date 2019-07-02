//3.c
#include<cstdio>
#include<cstdlib>
void asignar(int n, int *p);
void escribirTranspuesta(int m, int n, int *p);
main(){
	int m=2, n=3, mn = m*n, *p;
	p = (int *)malloc(mn*sizeof(int));
	if(p==NULL) {printf("No hay memoria dinámica"); exit(EXIT_FAILURE);}
	asignar(mn, p);
	escribirTranspuesta(m, n, p);
	free(p);
}
void asignar(int n, int *p){
	int i;
	for(i=0; i<n; i++) *p++=2*i;
}
void escribirTranspuesta(int m, int n, int *p){
	int i, j;
	printf("Matriz transpuesta %dx%d\n", n, m);
	for(j=0; j<n; j++){
		for(i=0; i<m; i++) printf("%5d", p[i*n+j]);
		printf("\n");
	}
}

