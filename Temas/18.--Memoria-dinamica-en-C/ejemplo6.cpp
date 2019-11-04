// Leer, alojar en memoria dinámica e imprimir matrices utilizando puntero a puntero
#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void leerMN(int *m, int *n);
int **leer_matriz(int m, int n);
void imprimir(int m, int n, int **p);
void liberar(int m, int **p);

int main()
{
    int m, n, **p; // m filas, n columnas y p valores; equivalente: *(*p)
    cout << "\nUso de punteros y funciones\n";
    leerMN(&m, &n); // m y n se pasan por referencia para que tomen valor
    p = leer_matriz(m, n);
    imprimir(m, n, p);
    liberar(m, p);
}

void leerMN(int *m, int *n)
{
    cout << "\nIngrese el número de elementos de la primera dimensión: ";
    cin >> *m;
    cout << "Ingrese el número de elementos de la segunda dimensión: ";
    cin >> *n;
}

int **leer_matriz(int m, int n)
{
    int **p;
    // Alojamientos de memoria
    p = (int **)malloc(m*sizeof(int *)); // p apunta a la memoria alojada
    if(p==NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    for (int i=0; i < m; i++)
    {
        p[i] = (int *)malloc(n*sizeof(int)); // p[i] apunta a la memoria alojada
        if(p[i]==NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    }

    // lectura de datos
    cout << "\n";
    for (int i=0; i < m; i++)
        for (int j=0; j < n; j++)
        {
            cout << "Para la fila " << i+1 << " ingrese el número " << j+1 << ": ";
            cin >> p[i][j]; // *(*(p + i) + j)
        }
    return p; // se retorna el valor del puntero p
}

void imprimir(int m, int n, int **p)
{
    cout << "\nMatriz cargada:\n";
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++) cout << setw(4) << p[i][j];
        cout << "\n";
    }
}

void liberar(int m, int **p)
{
    for (int i=0; i < m; i++) free(p[i]);
    free(p);
}
