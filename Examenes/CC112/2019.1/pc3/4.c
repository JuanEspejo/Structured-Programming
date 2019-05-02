//4.c
#include<stdio.h>

void prin(int n, int cola[]);

int main() {
	int n=20, cola[20] = {}, in=0, grave, i, ipos; 
	prin(in, cola);
	do{
		printf("Ingrese gravedad del paciente: ");
		scanf("%d", &grave);
		if(grave<1) break;
		ipos = in;
		while(ipos && grave>cola[ipos-1]){
			cola[ipos] = cola[ipos-1];
			ipos--;
		}
		cola[ipos]= grave;
		in++;
		prin(in, cola);
	} while(1);
}

void prin(int n, int cola[]){
	int i;
	for(i=0; i<n; i++) printf("%d  ", cola[i]);
	printf("\n");
}
