//3.c
#include<stdio.h>
void main(void){
	int n, i, j, ia, ja;
	printf("Ingrese un entero > 0: ");
	scanf("%d", &n);
	for(i=n; i>=-n; i--){
		ia = (i<=0)? i:-i;
		for(j=-n;j<=n;j++){
			ja = (j<=0)? j:-j;
			if(ia==ja) printf("* ");
			else 		  printf("  ");
		}
		printf("\n");
	}
}
