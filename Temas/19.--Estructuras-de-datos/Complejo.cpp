#include <cstdio>

typedef struct {
    int x;
    int y;
} Complejo;

void sumar(Complejo * p1, Complejo * p2, Complejo * pd);

int main(){
    Complejo c1, c2, suma;
    c1.x = 1;
    c1.y = 2;
    c2.x = 3;
    c2.y = 5;
    sumar(&c1, &c2,&suma);
    printf("suma: %d + %di\n", suma.x, suma.y);
}

void sumar(Complejo * p1, Complejo * p2, Complejo * pd) {
    pd->x = p1->x + p2->x;
    pd->y = p1->y + p2->y;
}
