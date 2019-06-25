#include <stdio.h>
int main()
{
	int indice,x;
	char frase[60] ; /* Define arreglo de caracteres */
	printf("Ingrese la frase :");
	fgets(frase, 60, stdin);
	printf("%s" ,frase); /* Imprime la cadena frase */
	printf("\n");
	for(x = 0;x < 60;x++)
	{
		if (frase[x]=='\0')
		{
			indice = x;
			break;
		}
	}
	printf("La ultima letra es: \n");
	printf("%c",frase[indice-2]);
	printf("\n\n");
	return 0;
}

