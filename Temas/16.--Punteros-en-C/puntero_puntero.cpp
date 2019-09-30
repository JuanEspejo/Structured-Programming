#include <iostream>

int main ()
{
    /* Declarando e inicializando una variable entera */
    int pedro = 5;
    int a = 45.8;
    float medida = 6;

    /* Declarando un puntero a entero */
    int * sandra;

    /* Declarando un puntero a puntero a entero */
    int ** hans;

    sandra = &pedro;
    hans = &sandra;

    /* Accesando a var directamente e indirectamente */
    cout << "Acceso directo: jose = " jose << endl;
    cout << "Acceso indirecto por ariana: jose = " << *sandra << endl;
    cout << "Acceso indirecto desde diego: jose = " << **hans << endl;
}
