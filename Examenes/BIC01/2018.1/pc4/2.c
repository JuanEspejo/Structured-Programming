#include<stdio.h>
void main(void){
	int i, j, n;
	printf("Ingrese un numero natural > 6: ");
	scanf("%d", &n);
	for(i=0; i<=n; i++) printf("  ");
	printf("UNI2 x 100PRE\n");
	for(i=n; i>=0; i--){
		for(j=0; j<=3*n; j++)
			if(j<=n || j >= 2*n || i==n || i==0) printf(" *");
			else						printf("  ");
		printf("\n");
	}
}
