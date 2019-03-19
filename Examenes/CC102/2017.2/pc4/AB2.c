//AB2.c
#include<stdio.h>
#include<stdlib.h>

int * espacio(int m, int n);
void asigna(int *pa, int m, int n, int k);
void por(int *pa, int *pb, int *pc, int k, int m, int n);
void imp(int *p, int m, int n);

void main(void){
	int *pa, *pb, *pc;
	int k=2, m=3, n=2;
	pa = espacio(k, m);
	pb = espacio(m, n);
	pc = espacio(k, n);
	asigna(pa, k, m, 1);
	printf("Matriz A\n");
	imp(pa, k, m);
	asigna(pb, m, n, 2);
	printf("Matriz B\n");
	imp(pb, m, n);
	por(pa, pb, pc, k, m, n);
	printf("Matriz C\n");
	imp(pc, k, n);
}
int * espacio(int m, int n){
	int *p;
	p = malloc(sizeof(int)*m*n);
	if(!p) {
		printf("No hay memoria dinámica");
		exit(EXIT_FAILURE);
	}
	return p;
}
void asigna(int *pa, int m, int n, int k){
	int *pmax = pa+m*n;
	while(pa<pmax) *pa++ = k;
}
void por(int *pa, int *pb, int *pc, int k, int m, int n){
	int i, j, l;
	int suma;
	for(i=0; i<k; i++)
		for(j=0; j<n; j++){
			suma=0;
			for(l=0; l<m; l++) suma += pa[i*m+l] * pb[l*n+j];
			*pc++ = suma;
		}
}
void imp(int *p, int m, int n){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++) printf("%d  ", *p++);			
		printf("\n");
	}
}
