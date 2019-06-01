// 4.c
#include <stdio.h>
void hanoi(int n,int com, int aux, int fin);
void main(void){
	char com='A', aux='B', fin='C';
	int n;
 	printf("Número de discos: ");
	scanf("%d",&n);
 	printf("Los movimientos a realizar son: \n");
	hanoi(n,com,aux,fin);
	printf("\n");
}
void hanoi(int n, int com, int aux, int fin){
	if(n==1)	printf("%c->%c",com,fin);
	else{		
				hanoi(n-1,com,fin,aux);
				printf("\n%c->%c\n",com,fin);
				hanoi(n-1,aux,com,fin);
	}
}
