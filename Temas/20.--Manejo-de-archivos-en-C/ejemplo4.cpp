#include <cstdio>
#include <cstdlib>

int main ()
{
    char cc;
    FILE *pf;

    if((pf = fopen("nombre.txt", "w")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    printf("Ingrese su nombre completo: ");
    while((cc = getchar()) != '\n')
        printf("%c", fputc(cc, pf));
    printf("%c", fputc('\n', pf));
    fclose(pf);

    if((pf = fopen("nombre.txt", "r")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    cc = fgetc(pf);
    while (!feof(pf))
    {
        printf("%c", cc);
        cc = fgetc(pf);
    }
    fclose(pf);\
}
