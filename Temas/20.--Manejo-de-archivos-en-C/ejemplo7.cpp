#include <cstdio>
#include <cstdlib>

int main()
{
    char cc;
    long offset = 0L;
    FILE *pf;

    if((pf = fopen("saludo.txt", "r")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    cc = fgetc(pf);
    while(!feof(pf))
    {
        //fseek(pf, offset++, SEEK_SET); 
        fseek(pf, offset++, 0);
        putchar(cc);
        cc = fgetc(pf);
    }
    fclose(pf);
}
