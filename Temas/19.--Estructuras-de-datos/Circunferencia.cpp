#include <cstdio>

typedef  struct {
    int x;
    int y;
} Coordenada;

typedef struct {
    Coordenada centro;
    int radio;
} Circunferencia;

int main() {
    Circunferencia circunferencia;
    circunferencia.centro.x = 1;
    circunferencia.centro.y = 2;
    circunferencia.radio = 5;

    printf(" ecuación de la circunferencia: (x-%d)^2 + (y-%d)^2 = %d^2\n",
           circunferencia.centro.x, circunferencia.centro.y,
           circunferencia.radio);
}
