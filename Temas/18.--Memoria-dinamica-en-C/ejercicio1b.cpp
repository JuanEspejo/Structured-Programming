#include <iostream>
#include <cstdlib>
using namespace std;

int **gen(int ** p, int m, int n);
void mos(int ** p, int m, int n);
void leer(int *m, int *n);
void trans(int ** p, int m, int n);
void liberar(int m, int **p);

int main(){
    srand(time(NULL));
    int ** p;
    int m=3, n=2;
    //leer(&m,&n);
    p = gen(p,m,n);
    mos(p,m,n);
    cout << "Transpuesta: " << endl;
    trans(p,m,n);
    liberar(m,p);
}

void liberar(int m, int **p)
{
    for (int i=0; i < m; i++) free(p[i]);
    free(p);
}

void leer(int *m, int *n){
    *m = 1 + rand()%20;
    *n = 1 + rand()%20;
}

int **gen(int ** p, int m, int n){
    p = (int **)malloc(m*sizeof(int *));
    if(p == NULL){
        cout << "No hay memoria suficiente"; }
    for(int j = 0; j < m; j++){
        p[j] = (int *)malloc(n*sizeof(int));
        if(p[j] == NULL){
            cout << "No hay memoria suficiente";}
    }
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            p[j][i] = rand()%21;
        }
    }
    return p;
}

void mos(int **p, int m, int n){
    for(int j = 0; j<m; j++){
        for(int i = 0; i< n; i++){
            cout << p[j][i] << "\t";
        }
        cout << endl;
    }
}

void trans(int ** p, int m, int n){
    int **pp = (int **)malloc(n*m* sizeof(int *));
    if(pp == NULL){
        cout << "No hay memoria suficiente \n";

    }
    for(int j =0; j < n; j++){
        pp[j] = (int *)malloc(m*sizeof(int));
        if(pp[j] == NULL){
            cout << "No hay memoria suficiente \n";
        }
    }
    for(int j = 0; j < m; j++){
        for(int i = 0; i<n; i++) pp[i][j] = p[j][i];
    }
    for(int j = 0; j<n; j++){
        for(int i = 0; i< m; i++){
            cout << pp[j][i] << "\t";
        }
        cout << endl;
    }
}
