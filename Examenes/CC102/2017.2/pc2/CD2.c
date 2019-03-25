// 2.c

#include<stdio.h>

void asignar ();
void imprimir1 ();
void imprimir2 ();
void imprimir3 ();

int n1=5, nn1[5] = {2, 3, 4, 7, 7}, n2=6, nn2[6]={1, 3, 5, 7, 8, 10},n3=11;
int nn3[11];

void main(void){
	imprimir1 ();
	imprimir2 ();
	asignar ();
	imprimir3 ();
}

void asignar (){
	int i=0, j=0, k=0;
	while (i<n1 && j<n2)  nn3[k++] = (nn1[i]<nn2[j])? nn1[i++]:nn2[j++];	
	if(i<n1) for(;i<n1;) nn3[k++] = nn1[i++];
	else for(;j<n2;) nn3[k++] = nn2[j++];
}

void imprimir1 (){
	int i; printf(" nn1: ");
	for(i=0; i<n1; i++) printf("%d ", nn1[i]);
	printf("\n");
}

void imprimir2 (){
	int i; printf(" nn2: ");
	for(i=0; i<n2; i++) printf("%d ", nn2[i]);
	printf("\n");
}

void imprimir3 (){
	int i; printf(" nn3: ");
	for(i=0; i<n3; i++) printf("%d ", nn3[i]);
	printf("\n");
}
