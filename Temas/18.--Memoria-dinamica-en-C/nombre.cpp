#include<iostream>
#include<cstdlib>

using namespace std;

void ingresar (char * p);
void mostrar (char * p);

int main ()
{
    char * nombre = (char *)malloc(sizeof(char));
    if(nombre==NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
    ingresar (nombre);
    cout << "Hola " << nombre << endl;
    free (nombre);
}

// Milagros Ulloa
void ingresar (char * p)
{
    int i = 1, ch;
    cout << "\nIngresa tu nombre: ";
    ch = getchar();
    while(ch != '\n'){
        p = (char *)realloc(p, (++i)*sizeof(char));
        if(p==NULL) {cout << "No se pudo alojar la matriz en memoria"; exit(EXIT_FAILURE);}
        p[i-2] = ch;
        ch = getchar();
    }
    p[i-1] = 0;
}
