#include <cstdio>
#include <cstdlib>

typedef struct
{
    int dato1;
    char dato2[4];
    int dato3[2];
} Dato;

void mostrar(Dato *p);

int main()
{
    Dato arreglo[2] = {1, "abc", 2, 3, 4, "def", 5, 6},
        arreglo2[2];
    size_t size = sizeof(Dato);
    size_t nmemb = 2;
    size_t temp;
    FILE *pf;

    printf("Entrada\n");
    mostrar(arreglo);
    mostrar(arreglo + 1);

    if((pf = fopen("prueba.dat", "w+")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    fwrite(arreglo, size, nmemb, pf);
    rewind(pf);
    printf("Salida:\n");
    while((temp = fread(arreglo2, size, 3, pf)) > 0)
    {
        fprintf(stdout, "temp = %zu\n", temp);
        mostrar(arreglo2);
    }
    fclose(pf);
}

void mostrar(Dato *p)
{
    printf("%d \n", p->dato1);
    printf("%s \n", p->dato2);
    printf("%d \n", p->dato3[0]);
    printf("%d \n", p->dato3[1]);
    printf("------\n");
}
