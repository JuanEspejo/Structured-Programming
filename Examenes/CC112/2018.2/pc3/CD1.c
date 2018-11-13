//CD1.c
#include <stdio.h>
void copiar(int * des, int * ori);
void mostrar(int * p);
int main(){
	int destino[5] = {4,5,6,7,0};
	int origen[4] = {-1,-3,-2,0};
	mostrar(destino);
	copiar(destino, origen);
	mostrar(destino);		
}
void mostrar(int * p){
	while(*p != 0)	printf("%4d", *p++);
	printf("\n");			
}
void copiar(int * des, int * ori){
	while(*ori != 0) *des++ = *ori++;
}
