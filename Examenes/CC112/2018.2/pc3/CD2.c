//CD2.c
#include <stdio.h>
void anexar(int * des, int * ori);
void mostrar(int * p);
int longitud(int * p);
int main(){
	int destino[6] = {4,5,0};
	int origen[4] = {-1,-3,-2,0};
	mostrar(destino);
	anexar(destino, origen);
	mostrar(destino);		
}
int longitud(int * p){
	int i = 0;
	while(*p++ != 0) i++;
	return i;			
}
void mostrar(int * p){
	while(*p != 0)	printf("%4d", *p++);
	printf("\n");			
}
void anexar(int * des, int * ori) {
	des = des + longitud(des);
	while(*ori != 0) *des++ = *ori++;
}
