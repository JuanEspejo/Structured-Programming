#include<iostream>
using namespace std;
void maximo(void * p, int lon, char tipo);

int main(){
    double notas[4] = {12.5, 18.6, 17.2, 16.1};
    int edades[6] = {16,17,18,19,20,21}, max;

    maximo(notas, 4, 'd');
    maximo(edades, 6, 'i');
}

void maximo(void * p, int lon, char tipo)
{
    if (tipo == 'd')
    {
        double *ptr = (double *)p;
        double max = ptr[0];
        for(int j = 1; j < lon; j++) {
            if(ptr[j] > max)
                max = ptr[j];
        }
        cout << " el máximo elemento es " << max << endl;
    }
    if (tipo == 'i')
    {
        int *ptr = (int *)p;
        int max = ptr[0];
        for(int j = 1; j < lon; j++) {
            if(ptr[j] > max)
                max = ptr[j];
        }
        cout << " el máximo elemento es " << max << endl;
    }
}
