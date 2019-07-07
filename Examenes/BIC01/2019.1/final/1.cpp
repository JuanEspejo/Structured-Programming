#include<cstdio>
#include<ctime>
#include<cstdlib>

void ordenarColumnas(int n);
void ordenarFilas(int n);
void mostrar1(int n);
void mostrar2(int n);

int matriz1[11][11], matriz2[11][11], N;

int main()
{
	printf(" ingrese un entero mayor que cero (<=10): ");
	scanf("%d", &N);
	srand(time(NULL));
	for (int j = 0; j < N; j++) 
	{
		for (int k = 0; k < N; k++)
		{
			matriz1[j][k] = rand()%90 + 10;
			matriz2[j][k] = matriz1[j][k];
			printf("%4d", matriz2[j][k]);
		}
		printf("\n"); 
	}
	
	ordenarColumnas(N);
	mostrar1(N);
	ordenarFilas(N);
	mostrar2(N);	
}

void ordenarColumnas(int n)
{
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; ++i)
			for (int j = 1; j < n-i; ++j)
			{
				int aux;
				if (matriz1[j-1][k] < matriz1[j][k])
				{
					aux = matriz1[j-1][k];
					matriz1[j-1][k] = matriz1[j][k];
					matriz1[j][k] = aux;
				}
			}
}

void ordenarFilas(int n)
{
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; ++i)
			for (int j = 1; j < n-i; ++j)
			{
				int aux;
				if (matriz2[k][j-1] < matriz2[k][j])
				{
					aux = matriz2[k][j-1];
					matriz2[k][j-1] = matriz2[k][j];
					matriz2[k][j] = aux;
				}
			}
}

void mostrar1(int n)
{
	printf(" columnas ordenadas en forma ascendente:\n");
	for (int j = 0; j < n; j++) 
	{
		for (int k = 0; k < n; k++)
			printf("%4d", matriz1[j][k]);
		printf("\n"); 
	}	
}

void mostrar2(int n)
{
	printf(" filas ordenadas en forma descendente:\n");
	for (int j = 0; j < n; j++) 
	{
		for (int k = 0; k < n; k++)
			printf("%4d", matriz2[j][k]);
		printf("\n"); 
	}	
}
