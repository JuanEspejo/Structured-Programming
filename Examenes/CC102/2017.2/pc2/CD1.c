// 1.c
#include<stdio.h>

void imprimir1(int n);
void imprimir2(int n);
void ascender(int n);

int n = 5, n1[5] = {6, 4, 4, 3, 2}, n2[5];

void main(void){
	printf(" Arreglo descendente: ");
	imprimir1(n);		
	ascender(n);
	printf(" Arreglo ascendente : ");
	imprimir2(n);		
}

void imprimir1(int n){
	int i;
	for(i=0; i<n; i++) printf("%d ", n1[i]);
	printf("\n");
}

void imprimir2(int n){
	int i;
	for(i=0; i<n; i++) printf("%d ", n2[i]);
	printf("\n");
}

void ascender(int n){
	int i, j;
	for(i=0, j=n-1; i<n; i++, j--) n2[j] = n1[i];
}
