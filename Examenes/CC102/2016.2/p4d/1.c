#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void ingresar (float **m, int n);
void mostrar (float **m, int n);
void multiplicar (float **m1, float **m2, float **m3, int n);

void main ()
{
	float **M1, **M2, **M3;
   	int N, i;
   	printf ("Ingresar la dimension de la matrices: ");
   	scanf ("%d", &N);
   
   	M1 = calloc(N, sizeof(float*));
   	for (i = 0; i < N; i++)
      		M1[i] = (float*)calloc(N, sizeof(float));
   	M2 = calloc(N, sizeof(float*));
   	for (i = 0; i < N; i++)
      		M2[i] = (float*)calloc(N, sizeof(float));
   	M3 = calloc(N, sizeof(float*));
   	for (i = 0; i < N; i++)
      		M3[i] = (float*)calloc(N, sizeof(float));
   
   	printf ("Matriz 1: \n");
   	ingresar(M1, N);
   	printf ("Matriz 2: \n");
   	ingresar(M2, N);
   	mostrar(M1, N);
   	printf ("\n");
   	mostrar(M2, N);
   	multiplicar(M1, M2, M3, N);
   	printf ("Matriz resultante luego de la multiplicacion de las 2 anteriores: \n");
   	mostrar(M3, N);
   	printf ("\n");
}

void ingresar(float **m, int n)
{
    	int i, j;
    	for(i = 0; i < n; i++)
	{
        	for(j = 0; j < n; j++)
		{
            		printf ("Ingresar elemento [%d][%d]: ", i + 1, j + 1);
            		scanf ("%f", &m[i][j]);
        	}
    	}
} 

void mostrar (float **m, int n)
{
    	int i, j;
    	for(i = 0; i < n; i++)
	{
        	printf ("\t");
        	for(j = 0; j < n; j++)
			printf ("%.2f  ", m[i][j]);
        	printf ("\n");
    	}
}

void multiplicar (float **m1, float **m2, float **m3, int n)
{
    	int i, j, k;
    	float sum;
    	for(i=0; i<n; i++)
	{
      		for(j=0; j<n; j++)
		{
          		m3[i][j]=0;
          		for(k=0; k<n; k++)
              			m3[i][j]=(m3[i][j]+(m1[i][k]*m2[k][j]));
      		}
  	}	
}
