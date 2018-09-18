#include<stdio.h>

void main(){
	int n;
	printf("n = "); scanf("%d",&n);
	printf("Secuencia de Ulam: ");
	while (n>1){
		printf("%d, ",n);
		if (n%2 == 0) n = n/2; else n = 3*n + 1;
	}
	printf("%d.\n",n);			
}
