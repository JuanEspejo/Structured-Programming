#include <cstdio>
#include <cstdlib>

int main ()
{
    FILE *pf1, *pf2;
    size_t longitud = 1;
    char *saludo = (char *) malloc(sizeof(char));
    char cc;

    if((pf1 = fopen("test1.txt", "r")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    if((pf2 = fopen("test2.txt", "w")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }

    cc = fgetc(pf1);
    while(feof(pf1) == 0)
    {
        saludo = (char *)realloc(saludo,++longitud*sizeof(char));
        saludo[longitud-2] = cc;
        cc = fgetc(pf1);
    }
    saludo[longitud-1] = 0;
    fputs(saludo, pf2);
    fclose(pf1);
    fclose(pf2);
}








