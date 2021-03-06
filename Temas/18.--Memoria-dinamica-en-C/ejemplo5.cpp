// Leer, alojar en memoria dinámica e imprimir matrices utilizando puntero
#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void leerMN(int *m, int *n);
int *leer_matriz(int m, int n);
void imprimir(int m, int n, int *p);

int main()
{
    int m, n, *p ;
    cout << "\nUso de punteros y funciones\n";
    leerMN(&m, &n);
    p = leer_matriz(m, n);
    imprimir(m, n, p);
    free(p);
}

void leerMN(int *r, int *s)
{
    cout << "\nIngrese el número de filas: ";
    cin >> *r;
    cout << "Ingrese el número de columnas: ";
    cin >> *s;
}

int *leer_matriz(int m, int n)
{
    int *p, *pp;
    pp = p = (int *)malloc(m*n*sizeof(int));
    if(p==NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    // Lectura de datos
    cout << "\n";
    for (int i=0; i < m; i++)
        for (int j=0; j < n; j++)
        {
            cout << "Para la fila " << i+1 << " ingrese el número " << j+1 << ": ";
            cin >> *p++;
        }
    return pp;
}

void imprimir(int m, int n, int *p)
{
    cout << "\nMatriz cargada:\n";
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            cout << setw(4) << *p++;
        cout << "\n";
    }
}










