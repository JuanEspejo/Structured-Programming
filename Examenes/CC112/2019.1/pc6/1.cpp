#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

typedef struct{
    int vertice0[2];
    int vertice1[2];
    int vertice2[2];
    double perimetro;
} Triangulo;

double distancia(int x[], int y[]);

main() {
    Triangulo triangulo;
    triangulo.vertice0[0] = 0;
    triangulo.vertice0[1] = 0;
    triangulo.vertice1[0] = 1;
    triangulo.vertice1[1] = 0;
    triangulo.vertice2[0] = 0;
    triangulo.vertice2[1] = 2;
    triangulo.perimetro =
        distancia(triangulo.vertice0, triangulo.vertice1) +
        distancia(triangulo.vertice1, triangulo.vertice2) +
        distancia(triangulo.vertice2, triangulo.vertice0);
    cout << "Perimetro del triangulo: " ;
    cout << fixed << setprecision(2) << triangulo.perimetro << endl;
}

double distancia(int x[], int y[]) {
    return sqrt(pow(x[0] - y[0],2) + pow(x[1] - y[1],2));
}
