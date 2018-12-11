#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i, n, *x, *y, a;
	srand(time(NULL));
	n = rand()%6 + 1;
	printf(" Dado lanzado: %d\n", n);
	x = (int *)malloc(n*sizeof(int));
	if(x == NULL) {printf(" No hay espacio suficiente.\n"); return 1;}
	y = (int *)malloc(n*sizeof(int));
	if(y == NULL) {printf(" No hay espacio suficiente.\n"); return 1;}	
	for(i=0, a=0; i<n; i++)	{
		x[i] = rand()%11 - 5;
		y[i] = rand()%11 - 5;
		a += x[i]*y[i];
	}
	printf(" x = (");
	for(i=0; i<n-1; i++)	printf("%2d,", x[i]);
	printf("%2d)\n", x[n-1]);
	printf(" y = (");
	for(i=0; i<n-1; i++)	printf("%2d,", y[i]);
	printf("%2d)\n", y[n-1]);
	printf(" <x,y> = %d\n", a);
}
