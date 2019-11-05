// ejercicio 1.6 de memoria dinámica
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int *aleatorio(int);
void maxmin(int);
void maxmin(int *p, int lon);

int main()
{
    int n;
    cout << "digite la cantidad de numeros del arreglo: "; cin >> n;
    int *notas = aleatorio (n);
	maxmin(notas,n);   
}

// generando el arreglo aleatorio;
int *aleatorio (int t)
{
    int *arr = (int *)malloc( t*sizeof(int) );
    if (arr == NULL)
    {
        cout << "NO se pudo asignar memoria." << endl;
        exit(EXIT_FAILURE);
    }
    srand(time(NULL));
    for (int i = 0; i < t; i++)
    {
        arr[i] = rand()%21;
        cout << setw(4) << arr[i];
    }
	cout << endl;
	return arr;
}

// mostrando el máximo y mínimo valor del arreglo
void maxmin(int *p, int lon)
{
    int max = 0, min = 20;
    for (int i = 0; i < lon; i++)
    {
        if (p[i] < min){
            min = p[i];
        }
        if (p[i] > max){
            max = p[i];
        }
    }
    cout << "el mayor elemento del arreglo es: " << max << endl;
    cout << "el menor elemento del arreglo es: " << min << endl;
}
