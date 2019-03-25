//CD2.c
#include<stdio.h>
#include<stdlib.h>

int * espacio(int m, int n);
void cargar(int *pa, int m, int n);
void trans(int *pa, int *pb, int m, int n);
void imp(int *p, int m, int n);

void main(void){
	int *pa, *pb, *pc;
	int m=2, n=3;
	pa = espacio(m, n);
	pb = espacio(n, m);
	cargar(pa, m, n);
	printf("Matriz A\n");
	imp(pa, m, n);
	trans(pa, pb, m, n);
	printf("Matriz B\n");
	imp(pb, n, m);
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

void cargar(int *pa, int m, int n){
	int i;
	for(i=1; i<=m*n; i++) *pa++ = i;
}

void trans(int *pa, int *pb, int m, int n){
	int i, j;
	for(i=0; i<n; i++)
		for(j=0; j<m; j++) *pb++ = pa[j*n+i] ;
}

void imp(int *p, int m, int n){
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++) printf("%d  ", *p++);			
		printf("\n");
	}
}
