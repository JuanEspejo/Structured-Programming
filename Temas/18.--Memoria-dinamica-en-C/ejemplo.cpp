#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    int * notas;
    size_t k;

    cout << " ingrese la cantidad de bytes: ";
    cin >> k;
    notas = (int *)malloc(k);

    if (notas == NULL)
        cout << " NO se pudo asignar memoria" << endl;
    else
    {
        cout << " se ha asignado " << k;
        cout << " bytes de memoria." << endl;
        cout << " notas  : " << notas << endl;
        cout << " notas+1: " << notas+1 << endl;
    }
    free (notas); // liberando
}
