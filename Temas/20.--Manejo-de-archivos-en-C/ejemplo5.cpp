#include <cstdio>
#include <cstdlib>
int main ()
{
    FILE *pf;
    char saludo1[] = "Hola",
            saludo2[] = "Olas",
            saludo[20];

    if((pf = fopen("saludo.txt", "w")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }

    fputs(saludo1, pf);
    fputs(saludo2, pf);
    fclose(pf);

    pf = fopen("saludo.txt", "r" );
    while(fgets(saludo, 5, pf) != NULL)
        printf("%s\n", saludo);
    fclose(pf);
}
