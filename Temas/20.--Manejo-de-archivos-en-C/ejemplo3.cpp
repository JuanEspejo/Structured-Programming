#include<cstdio>

int main() 
{
	// definiendo un puntero a FILE
	FILE *fp;
	
	// abre el archivo prueba.txt para escribir
	if((fp = fopen("prueba.txt", "a")) != NULL) 
	{
		fprintf(fp, "%d %s %f\n", 1, "Pedro", 1.7);
		fprintf(fp, "%d %s %f\n", 2, "Paul", 3.1);
		fclose(fp); // cierra el archivo
	} 
	else printf("No se pudo abrir el archivo.\n");
}
