#include <cstdio>
#include <cstdlib>

int main ()
{
    FILE *pf1, *pf2;
    char saludo[20];

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

	fgets(saludo, 11, pf1);
	saludo[10] = 0;
    fputs(saludo, pf2);
    fclose(pf1);
    fclose(pf2);
}
