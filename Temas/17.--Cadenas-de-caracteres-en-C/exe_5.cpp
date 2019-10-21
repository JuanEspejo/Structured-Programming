#include <iostream>
#include <cstdlib>
using namespace std;

#define TAM 51
void generar(char * c, int r);
void mostrar(char * c, int r);

int main(){
    srand(time(NULL));
    char cad[TAM];
    int tam = 50;
    generar(cad, tam);
    mostrar(cad, tam);
}

void generar(char *c, int r)
{
    int m;
    for(int j = 0; j < r; j++){
        m = rand()%53;
        if(m == 0)
            c[j] = 32;
        else if(m < 27)
            c[j] = m + 64;
        else
            c[j] = m + 70;
    }
    c[r] = 0;
}

void mostrar(char * c, int r){
    for(int j = 0; j < r; j++){
        cout << c[j];
    }
    cout << ":FINAL" << endl;
}
