#include <cstdio>

typedef struct {
    int x;
    int y;
} Punto;

int main(){
    /* asignando valores a las coordenadas de punto */
    Punto punto;
    punto.x = 5;
    punto.y = 12;
    printf("\nLas coordenadas son: (%d,%d).\n\n", punto.x, punto.y);
}
