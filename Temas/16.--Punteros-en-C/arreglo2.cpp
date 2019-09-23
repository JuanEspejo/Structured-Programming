/* Demonstración de la relación entre dirección de memoria y
   elementos de arreglos de diferentes tipos de datos. */

#include <iostream>
using  namespace std;

int main()
{
    int edades[6] = { 15,19,20,16,18,17 };
    int * p1 = edades + 1;
    int * p2 = edades + 3;
    cout << "\n El elemento " << *p2 << "está ";
    cout << p2 - p1 << "lugares a la derecha del elemento ";
    cout << *p1 << endl;

    if (p2 > p1)
    {
        cout << "El elemento " << *p2;
        cout << " está después del elemento " << *p1 << endl;
    }
}


