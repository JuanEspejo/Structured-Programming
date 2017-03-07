#include<stdio.h>
int main()
{
	int N,i,S;
	printf("Ingrese N: "); scanf("%d",&N);
	for(S=0, i=1; i<=N; i++)
		S=S+i*i;
	printf("La suma de los cuadrados hasta %d es: ",S);
return 0;
}
