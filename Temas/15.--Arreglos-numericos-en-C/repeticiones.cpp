#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void generar (int * p, int n);
void mostrar (int * p, int n);

int main ()
{
    int numeros[14];
    srand(time(NULL));
    generar(numeros,14);
    mostrar(numeros,14);
}

void generar (int * p, int n)
{
    for (int j = 0; j < n; j++)
        p[j] = 1 + rand()%10;
}

void mostrar (int * p, int n)
{
    int repeticiones[11] = {0,0,0,0,0,0,0,0,0,0,0};
    for (int j = 0; j < n; j++)
    {
        cout << setw(3) << j << ":";
        cout << setw(4) << p[j] << endl;
        repeticiones[p[j]] += 1;
    }
    cout << "\n Repeticiones:\n";
    for (int j = 1; j < 11; j++)
    {
        cout << setw(3) << j << ":";
        cout << setw(4) << repeticiones[j] << endl;
    }
}
