#include<stdio.h>
void main(void){
	int n, i = 1, k;
	printf("Ingrese un entero >0: ");
	scanf("%d", &n);
	do{
		k = n%10;
		printf("%d: %d\n", i, k);
		i *=10;
		n = (n-k)/10;
	} while(n>0);
}
