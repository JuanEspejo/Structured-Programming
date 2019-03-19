#include<stdio.h>
#include<stdlib.h>

void main(){
	int num, x ,y, markval;
	printf("Ingrese un numero entero n>0: ");
	scanf("%d", &num);
	for(y=num; y>=-num; y--){
		for(x=-num; x<=num; x++){
			if(abs(x)+abs(y) > num)
				printf("  ");
			else if((x+y)%2 == 0)
				printf("+ ");
			else printf ("- ");
		}
		printf("\n");
	}
}
