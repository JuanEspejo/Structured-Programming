//4.c
#include<stdio.h>
void multiplicar(int n){
	int i, j;
	printf("Multiplicación:\n");
	for(i=1; i<= n; i++){
		for(j=1; j<= 9; j++) printf("%d x %d = %d\n", i, j, i*j);
		printf("\n");
	}
}
void main(void){
	int n;
	printf("Ingrese un entero en [1, 10]: ");		
	scanf("%d", &n);
	multiplicar(n);
}
