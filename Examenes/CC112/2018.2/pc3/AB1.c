//AB1.c
#include <stdio.h>
int maximo(int * p);
int main(){
	int edades[] = {22,19,17,23,18,0};
	printf(" edad máxima: %d\n", maximo(edades));
}
int maximo(int * p){
	if(*p == 0) return 0;
	int max = *p;
	while(*++p != 0) 	if(*p > max) max = *p;
	return max;
}
