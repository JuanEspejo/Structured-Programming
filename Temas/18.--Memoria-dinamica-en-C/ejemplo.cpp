#include <iostream>

using namespace std;

int main() {
    double * pDouble;
    size_t size;
    cout << "Ingrese el tamano del arreglo: ";
    cin >> size;
    //pDouble = (double *)calloc(size, sizeof(double));
    pDouble = (double *)malloc(size*sizeof(double));
    if (pDouble == NULL) {
        cout << "No hay espacio suficiente!" << endl;
        return 0;
    }
    cout << "Se asignó espacio exitosamente." << endl;
    for (size_t j = 0; j < size; ++j) {
        cout << pDouble[j] << endl;
    }

    cout << "Ingrese el nuevo tamano del arreglo: ";
    cin >> size;
    pDouble = (double *)realloc(pDouble, size*sizeof(double));
    if (pDouble == NULL) {
        cout << "No hay espacio suficiente!" << endl;
        return 0;
    }
    cout << "Se asignó espacio exitosamente." << endl;
    free(pDouble);
}
