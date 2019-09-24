#include <iostream>
#include <cstdlib>
using namespace std;

int verificar (int * dado, int n);

int main ()
{
    srand(time(NULL));
    int arr[10];
    for (int j = 0; j < 10; j++)
    {
        arr[j] = rand() % 21;
        cout << j << ": " << arr[j] << endl;
    }
    int nota = rand() % 21;

    cout << "nota: " << nota << endl;
    if (verificar(arr,nota) == 1)
        cout << nota << " está!" << endl;
    else
        cout << nota << " NO está!" << endl;
}

int verificar (int * dado, int n)
{
    for (int j = 0; j < 10; j++)
        if (*(dado + j) == n) return 1;
    return 0;
}

