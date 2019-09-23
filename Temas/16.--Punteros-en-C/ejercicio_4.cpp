// Demonstrando el paso de puntero a un
// arreglo multidimensional a una funcion

#include <iostream>
#define FILAS 3
#define COLUMNAS 5
using namespace std;

// Declarando prototipo de funciones
void mostrar1 (short (*ptr)[COLUMNAS]);
void mostrar2 (short (*ptr)[COLUMNAS]);

int main()
{
    // Inicializando arreglo multidimensional
    short notas[FILAS][COLUMNAS] =
        {
            { 1, 2, 3, 4, 5 },
            { 6, 7, 8, 9, 10  },
            { 11, 12, 13, 14, 15 }
        };

    cout << "\n================= Imprimiendo arreglo mutidimensional ";
    cout << "===================\n";
    short (*andrew)[COLUMNAS] = notas;
    for (int k = 0; k < FILAS; k++)
    {
        mostrar1 (andrew++);
        cout << endl;
    }

    mostrar2 (notas);
    cout << endl;
}

void mostrar1 ( short (*ptr)[COLUMNAS] )
{
    short * p = (short *)ptr;

    for (int j = 0; j < COLUMNAS; j++)
        cout << "\t" << *p++;
}

void mostrar2 ( short (*ptr)[COLUMNAS] )
{
    short * p, i, j;
    printf("\n================= Imprimiendo arreglo mutidimensional ");
    printf("===================\n");
    for (int j=0 ; j < FILAS ; j++)
    {
        p = (short *) ptr++;
        for (int k = 0; k < COLUMNAS; k++)
            cout << "\t" <<  *p++;
        cout << endl;
    }
}
