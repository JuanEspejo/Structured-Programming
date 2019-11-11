#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct {
    int x;
    int y;
} Coordenada;

typedef struct {
    Coordenada esquina1;
    Coordenada esquina2;
} Rectangulo;

int main(){
    Rectangulo rectangulo;
    int delta1, delta2, area;
    /* Ingresando las coordenadas de esquina1 */
    cout << "Ingrese la abcisa de esquina1: ";
    cin >> rectangulo.esquina1.x;
    cout << "Ingrese la ordenada de esquina1: ";
    cin >> rectangulo.esquina1.y;

    /* Ingresando las coordenadas de esquina2 */
    cout << "Ingrese la abcisa de esquina2: ";
    cin >> rectangulo.esquina2.x;
    cout << "Ingrese la ordenada de esquina2: ";
    cin >> rectangulo.esquina2.y;

    /* Calculando y mostrando el \'area */
    delta1 = abs(rectangulo.esquina1.x - rectangulo.esquina2.x);
    delta2 = abs(rectangulo.esquina1.y - rectangulo.esquina2.y);
    area = delta1*delta2;
    cout << "El area es de " << area << " unidades (cuadradas)." << endl;
}
