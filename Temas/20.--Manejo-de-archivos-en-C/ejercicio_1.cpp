#include <cstdio>
#include <cstdlib>

int main ()
{
    char cc;
	FILE *pf;

    if((pf = fopen("palabra.txt", "w")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    printf("Ingrese una palabra: ");
    while((cc = getchar()) != '\n')
        fputc(cc, pf);
    fclose(pf);

	// Ne
    if((pf = fopen("palabra.txt", "r")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    cc = fgetc(pf);
	printf("Lectura del archivo:\n");
    while(feof(pf) == 0)
    {
        if(97 <= cc && cc <= 122) 
        	printf("%c", cc - 32);
		else
			printf("%c", cc);
		cc = fgetc(pf);
    }
    fclose(pf);
	printf("\n");
}
