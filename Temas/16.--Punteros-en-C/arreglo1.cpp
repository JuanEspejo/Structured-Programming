/* Demonstración de la relación entre dirección de memoria y
   elementos de arreglos de diferentes tipos de datos. */

#include <iostream>
using  namespace std;

int main()
{
    /* tres tipos de arreglos. */
    short arreglo_s[10];
    float arreglo_f[10];
    double arreglo_d[10];

    short *p_s = arreglo_s;

    /* sizeof */
    cout << "sizeof(short) = " << sizeof(short) << endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(double) = " << sizeof(double) << endl;

    /* Imprimiendo la cabecera de la tabla */
    cout << "\t\t\t\t\tShort\t\tFloat\t\tDouble";
    cout << "\n================================";
    cout << "========================";

    /* Imprimiendo la dirección de cada elemento de los arreglos. */
    for (int j = 0; j < 10; j++)
    {
        cout << "\n Elemento " << j << ":\t" << p_s++;
        cout << "\t" << arreglo_f + j;
        cout << "\t" << arreglo_d + j << endl;
    }
    cout << "\n================================";
    cout << "========================";
}


