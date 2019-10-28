#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    char * notas;
    size_t k;

    cout << " ingrese la cantidad de bytes: ";
    cin >> k;
    notas = (char *)malloc(k);


    if (notas == NULL)
    {
        cout << " NO se pudo asignar memoria" << endl;
        return 0;
    }

    cout << " se ha asignado " << k;
    cout << " bytes de memoria." << endl;
    cout << " notas  : " << (void *)notas << endl;
    cout << " notas+1: " << (void *)(notas+1) << endl;

    free (notas); // liberando
}
