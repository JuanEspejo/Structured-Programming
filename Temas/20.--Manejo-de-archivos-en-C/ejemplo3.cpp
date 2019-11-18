#include<cstdio>

int main() 
{
	// definiendo un puntero a FILE
	FILE *pf;
	
	// abre el archivo prueba.txt para escribir
	if((pf = fopen("prueba.txt", "a")) != NULL) 
	{
		fprintf(pf, "%d %s %f\n", 1, "Pedro", 1.7);
		fprintf(pf, "%d %s %f\n", 2, "Paul", 3.1);
		fclose(pf); // cierra el archivo
	} 
	else printf("No se pudo abrir el archivo.\n");
}
