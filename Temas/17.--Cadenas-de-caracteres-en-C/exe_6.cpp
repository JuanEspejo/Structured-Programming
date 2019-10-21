#include<iostream>
#include<cstring>
#define TAM 51
using namespace std;

void asignar(char*c, int r);
void mostrar(char*c, int r);

int main()
{
    srand(time(NULL));
    char chain[TAM];
    int tam = 50;
    asignar(chain,tam);
    mostrar(chain,tam);

    for(int j=0; j<=tam; j++)
    {
        if(97 <= chain[j] && chain[j]<= 122)
            chain[j]= chain[j]-32;
        else if(65 <= chain[j] && chain[j]<=90)
            chain[j]=chain[j]+32;
        else if(48 <=chain[j] && chain[j]<= 57)
            chain[j]= 105-chain[j];
    }
    mostrar(chain,tam);
}

void asignar(char *c, int r)
{
    int m;
    for(int j=0; j<r; j++)
    {
        m = rand()%63;
        if(m == 0)
            c[j] = 32;
        else if(m < 11)
            c[j] = m + 47;
        else if(m < 37)
            c[j] = m + 54;
        else
            c[j] = m + 60;
    }
    c[r] = 0;
}

void mostrar(char *c, int r)
{
    for(int j=0; j<=r-1; j++)
        cout << c[j];
    cout << ":FIN" << endl;
}
