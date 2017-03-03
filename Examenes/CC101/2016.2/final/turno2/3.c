#include<stdio.h>
void main(void){
	int n, suma = 0, k=10;
	printf("Ingrese un entero >0: ");
	scanf("%d", &n);
	do{
		suma += n%k; 
		k *=10;
	} while(k<n);
	suma += n; 
	printf("La suma es: %d\n", suma);
}
