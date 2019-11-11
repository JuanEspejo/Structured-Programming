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

    cout << "sizeof(rectangulo.esquina1) = ";
    cout << sizeof(rectangulo.esquina1) << endl;

    cout << "sizeof(Coordenada) = ";
    cout << sizeof(Coordenada) << endl;

    cout << "sizeof(rectangulo) = ";
    cout << sizeof(rectangulo) << endl;
}
