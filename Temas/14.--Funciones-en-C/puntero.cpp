#include<iostream>

using namespace std;

int main ()
{
    int nota = 20;
    int * puntero = &nota; // & es el operador unario direccion

    cout << "nota: " << nota << endl;
    cout << "nota: " << *puntero << endl;
    cout << "&nota: " << &nota << endl;
    cout << "puntero: " << puntero << endl;
}
