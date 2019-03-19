#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void minmax(int *inicio, int size);

int main()
{
	int size;
	printf("  Por favor introduzca el tamaño del arreglo: ");
	scanf("%d", &size);
	int *inicio = malloc(size * sizeof(int));
	srand(time(NULL));
	int i;
	for(i = 0; i < size; i++)
	{
		inicio[i] = rand();
	}
	minmax(inicio, size);
	return 0;
}

void minmax(int *inicio, int size)
{
	int min, max, i;
	min = inicio[0];
	max = min;
	for(i = 0; i < size; i++)
	{
		if(inicio[i] > max) max = inicio[i];
		if(inicio[i] < min) min = inicio[i];
	}
	printf("  El número mínimo es %d y el máximo es %d\n\n", min, max);
}