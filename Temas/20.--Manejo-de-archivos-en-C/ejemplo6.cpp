#include <cstdio>
#include <cstdlib>
#include <cstring>

int main ()
{
    FILE *pf;
    char saludo1[20] = "Hola mundo",
        saludo2[20], *pc = saludo2;
    size_t lon1 = strlen(saludo1), lon2;

    printf("%zu: %s\n", lon1, saludo1);

    if((pf = fopen("saludo.txt", "w+")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }

    fwrite(saludo1, sizeof(char), lon1, pf);
    rewind(pf);
    lon2 = fread(pc, sizeof(char), lon1, pf);
    pc[lon1] = 0;
    printf("%zu: %s\n", lon2, pc);
    fclose(pf);
}








