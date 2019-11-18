// escribe y lee un registro en el archivo miArch.dat
#include <cstdio>
#include <cstdlib>

int main()
{
    typedef struct{ // define una estructura
        int codigo;
        char nombre[20];
        int notas[2];
    } Estudiante;

    size_t size = sizeof(Estudiante); // tamaño de Estudiante
    size_t count = 1;
    FILE *pf; // declara apuntador a archivo

    if((pf = fopen("progra.txt", "w+")) == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        exit(1);
    }
    Estudiante estudiante = {1, "Hans", 20, 20},
        estudiante2; // define un registro

    fwrite(&estudiante, size, count, pf); // escribe un registro
    rewind(pf); // va al inicio del archivo
    if(fread(&estudiante2, size, count, pf) > 0) // lee un registro
        printf("%d %s %d %d\n", estudiante2.codigo, estudiante2.nombre, estudiante2.notas[0], estudiante2.notas[1]);
    fclose(pf); // cierra el archivo
}


