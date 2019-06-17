#include <cstdio>
#include <cstdlib>

int delta1, delta2;
long area;
struct coordenada{
    int x;
    int y;
};

struct rectangulo{
    struct coordenada esquina1;
    struct coordenada esquina2;
} rectangulo1;

int main(){
    /* Ingresando las coordenadas de esquina1 */
    printf("\n Ingrese la abcisa de esquina1: ");
    scanf("%d", &rectangulo1.esquina1.x);
    printf("Ingrese la ordenada de esquina1: ");
    scanf("%d", &rectangulo1.esquina1.y);

    /* Ingresando las coordenadas de esquina2 */
    printf("\nIngrese la abcisa de esquina2: ");
    scanf("%d", &rectangulo1.esquina2.x);
    printf("Ingrese la ordenada de esquina2: ");
    scanf("%d", &rectangulo1.esquina2.y);

    /* Calculando y mostrando el \'area */
    delta1 = abs(rectangulo1.esquina1.x - rectangulo1.esquina2.x);
    delta2 = abs(rectangulo1.esquina1.y - rectangulo1.esquina2.y);
    area = delta1*delta2;
    printf("\nEl area es de %ld unidades.\n\n", area);
}
