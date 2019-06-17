#include <cstdio>
#include <cstdlib>

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
    int delta1, delta2;
    long area;
    /* Ingresando las coordenadas de esquina1 */
    printf("\n Ingrese la abcisa de esquina1: ");
    scanf("%d", &rectangulo.esquina1.x);
    printf("Ingrese la ordenada de esquina1: ");
    scanf("%d", &rectangulo.esquina1.y);

    /* Ingresando las coordenadas de esquina2 */
    printf("\nIngrese la abcisa de esquina2: ");
    scanf("%d", &rectangulo.esquina2.x);
    printf("Ingrese la ordenada de esquina2: ");
    scanf("%d", &rectangulo.esquina2.y);

    /* Calculando y mostrando el \'area */
    delta1 = abs(rectangulo.esquina1.x - rectangulo.esquina2.x);
    delta2 = abs(rectangulo.esquina1.y - rectangulo.esquina2.y);
    area = delta1*delta2;
    printf("\nEl area es de %ld unidades.\n\n", area);
}
