#include <iostream>

using namespace std;

typedef struct {
    int re;
    int im;
} Complejo;

void sumar(Complejo * p1, Complejo * p2, Complejo * pd);

int main(){
    Complejo c1, c2, suma;
    c1.re = 1;
    c1.im = 2;
    c2.re = 3;
    c2.im = 5;
    sumar(&c1, &c2,&suma);
    cout << "suma: " << suma.re;
    cout << " + " << suma.im << "i" << endl;
}

void sumar(Complejo * p1, Complejo * p2, Complejo * pd) {
    pd->re = p1->re + p2->re;
    pd->im = p1->im + p2->im;
}
