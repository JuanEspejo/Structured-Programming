#include <iostream>
#include <cstdlib>
using namespace std;

void gen(char * c, int r);
void shw(char * c, int r);
void uplw(char *c, int r);

int main(){
    srand(time(NULL));
    char sr[50];
    int tam = 2 + rand()%29;
    gen(sr, tam);
    shw(sr, tam);
    uplw(sr, tam);
    shw(sr, tam);
}

void gen(char *c, int r){
    char n = 65, q = 97;
    int m;
    for(int j = 0; j < r; j++){
        m = rand()%52;
        if(m < 26)
            c[j] = m + 65;
        else
            c[j] = m + 71;
    }
    c[r] = 0;
}

void shw(char * c, int r){
    for(int j = 0; j < r; j++){
        cout << c[j] << "\t";
    }
    cout << endl;
}

void uplw(char *c, int r){
    int m;
    for(int j = 0; j < r; j++){
        m = c[j];
        if(m > 96)
            c[j] -= 32;
        else
            c[j] += 32;
    }
}
