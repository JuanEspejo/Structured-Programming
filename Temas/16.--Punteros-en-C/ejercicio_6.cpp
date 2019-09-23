#include <iostream>
#include <cstdlib>
using namespace std;

int mostrar(int * p, int n);
void intercambio (int * x, int * y);

int main ()
{
    srand(time(NULL));
    int vector[10];
    for (int j = 0; j < 10; j++)
    {
        vector[j] = rand() % 21;
    }
    mostrar(vector,10);

    for (int c = 1; c < 10 ;c++)
    {
        for (int j = 0; j < 10-c;j++ )
        {
            if (vector[j] > vector[j+1])
            {
                intercambio(vector + j, vector + j + 1);
            }
        }
    }
    mostrar(vector,10);
}

int mostrar(int * p, int n)
{
    for (int c = 0; c < n ; c++)
    {
        cout << p[c]<< " ";
    }
    cout << endl;
}

void intercambio (int * x, int * y)
{
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}








