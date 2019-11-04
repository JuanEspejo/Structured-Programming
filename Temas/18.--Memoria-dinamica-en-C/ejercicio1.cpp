#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

void leerEnt(int * x, int * y)
{
    cout << "Ingrese el número de filas: ";
    cin >> *x;
    cout << "Ingrese el número de columnas: ";
    cin >> *y;
}

int *leer_matriz(int x, int y) {
    int *A = (int *) malloc(x * y * sizeof(int));
    if (A == NULL) {
        cout << "No se pudo alojar la matriz en la memoria :(" << endl;
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            *(A + i * y + j) = rand()%21;
    return A;
}

int *transponer(int x, int y, int *pInt)
{
    int *B = (int *)malloc(x*y*sizeof(int));
    if (B == NULL)
    {
        cout << "No se pudo alojar la matriz en la memoria :("<< endl;
        exit(EXIT_FAILURE);
    }
    for (int i=0; i < y; i++)
        for (int j=0; j < x; j++)
            *(B + i*x + j) = *(pInt + j*y + i);
    return B;
}

void imprimir(int m, int n, int *p)
{
    cout << "La Matriz : " << endl;
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
            cout << setw(4) << *p++;
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));
    int i, j, *ma, *mb;

    leerEnt(&i,&j);
    ma = leer_matriz(i,j);
    imprimir(i,j,ma);
    mb = transponer(i,j,ma);
    imprimir(j,i,mb);
    free(ma);
    free(mb);
}
