#include <cstdio>
#include <cstdlib> // la función exit() vive aquí

int main() 
{
	int item;
	char nombre[10];
	float monto;
	FILE *fp;

	if((fp = fopen("prueba.txt", "r")) == NULL)
	{
		printf("No se pudo abrir el archivo.\n"); 
		exit(1);
	}
	while(fscanf(fp, "%d %s %f", &item, nombre, &monto) > 0) 
		printf("%d %s %f\n", item, nombre, monto);
	fclose(fp);
}
