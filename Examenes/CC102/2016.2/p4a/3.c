#include <stdio.h>
#include <stdlib.h>

void main ()
{

	int i,t;
	char ch,*cadena;
	printf("ingrese una cadena de caracteres;");
	ch=getchar();
	while(ch !='\n')
	{
		t=t+1;
		cadena=realloc(cadena,(t+1)*sizeof(char));
		cadena[t-1]=ch;
		ch=getchar();
	}

	cadena[t]='\0';

	for(i=0;i<t;i++)
		printf("%c",cadena[i]);

	printf("\n");
	free(cadena);

}

// (Y)
