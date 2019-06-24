#include <stdio.h>

int cantidadMinusculas();
	
int main()
{
	printf("\n\nEn la frase hay %d minusculas\n\n",cantidadMinusculas());printf("\n\n");
	return 0;
}

int cantidadMinusculas()
{
	int sum = 0, x, indice;
	char frase[50];
	printf("Introduzca una frase: ");
	fgets(frase,50,stdin);
	for(x = 0; x < 50;x++)
	{
		if (frase[x]=='\0')
		{
			indice=x;
			break;
		}
	}
	for(x = 0; x < indice;x++)
	{
		if (frase[x]>=97 && frase[x]<=122)
		{
			sum++;
		}
	}
	return sum;
}
