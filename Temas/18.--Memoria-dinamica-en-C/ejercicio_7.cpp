#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

int **leer_matriz(int n);
void imprimir_matriz(int m, int n, int **p);
int **multiplicar_matrices(int n, int **p, int **q);
void liberar(int m, int **p);

int main()
{
    int m, n, **pa, **pb, **pc;
    cout << "\nIngrese el orden de la matriz: ";
    cin >> n; 
    pa = leer_matriz(n);
	imprimir_matriz(n,n,pa);
    pb = leer_matriz(n);
    imprimir_matriz(n,n,pb);
	pc = multiplicar_matrices(n,pa,pb);
	imprimir_matriz(n,n,pc);
	liberar(n,pa);
	liberar(n,pb);
	liberar(n,pc);
}
  
int **leer_matriz(int n)
{
    int **p = (int **)malloc(n*sizeof(int *)); 
    if(p == NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    for (int i=0; i < n; i++)
    {
        p[i] = (int *)malloc(n*sizeof(int)); 
        if(p[i] == NULL) 
			{cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++)
             p[i][j] = rand()%4; 
    }   
    return p; 
}

void imprimir_matriz(int m, int n, int **p)
{
    cout << "Matriz:\n";
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++) cout << setw(4) << p[i][j];
        cout << endl;
    }
}

int **multiplicar_matrices(int n, int **pa, int **pb)
{
	int **pc = (int **)malloc(n*sizeof(int *)); 
    if(pc == NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    for (int i=0; i < n; i++)
    {
        pc[i] = (int *)malloc(n*sizeof(int)); 
        if(pc[i] == NULL) 
			{cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    }
    for (int i=0; i < n; i++)
	{
        for (int j=0; j < n; j++)
		{
        	pc[i][j] = 0;
			for (int k=0; k < n; k++)
				pc[i][j] += pa[i][k]*pb[k][j];
		}
    }   
    return pc; 
}

void liberar(int m, int **p)
{
    for (int i=0; i < m; i++) free(p[i]);
    free(p);
}



