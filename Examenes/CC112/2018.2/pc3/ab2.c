// pregunta 3

#include <stdio.h>

void contrario(int * p);
int longitud(int * p);

int main()
{
	int numeros[4] = {-1,-3,-2,0};
	
	printf(" cantidad de numeros:%3d\n", longitud(numeros));
	contrario(numeros);		
}

int longitud(int * p)
{
	int i = 0;
	while(*p++ != 0)
	{
		i++;
	}
	return i;			
}

void contrario(int * p)
{
	int i = longitud(p) - 1;
	while(i >= 0)
	{
		printf("%4d", *(p + i--));
	}
	printf("\n");			
}