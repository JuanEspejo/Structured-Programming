//3.c
#include<stdio.h>
void main(void){
	int n, i, j;
	for(i=1; i<=8; i++){
		for(j=1; j<=8; j++)
			if(i%2)
				if(j%2) printf("* ");
				else 	  printf("  ");
			else
				if(j%2==0) printf("* ");
				else 	  printf("  ");
		printf("\n");
	}
}
