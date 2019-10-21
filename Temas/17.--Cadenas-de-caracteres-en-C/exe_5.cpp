#include <iostream>
#include <cstdlib>

using namespace std;
#define TAM 51

void generar(char *c, int r);
void convertir(char *c, int r);
void mostrar(char *c, int r);

int main()
{
    srand(time(NULL));
    char cad[TAM];
    int tam = 50;
    generar(cad, tam);
    mostrar(cad,tam);

    convertir(cad,tam);
    mostrar(cad,tam);
}

void generar(char *c, int r)
{
    int m;
    for (int i = 0; i < r; i++) 
	{
        m = rand()%53;
        if(m == 0)
            c[i] = 32;
        else if(m < 27)
            c[i] = m + 64;
        else
            c[i] = m + 70;
    }
    c[r] = 0;
}

void convertir(char *c, int r)
{
    for (int i = 0; i < r; i++)
    {
        if (97 <= c[i] && c[i] <= 122)
            c[i] -= 32;
    }
}

void mostrar(char * c, int r){
    for (int i = 0; i < r; i++) {
        cout << c[i];
    }
    cout << ":FIN" << endl;
}
