#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void main ()
{
	srand(time(NULL));
	
	char lista[30][10] = 
		{"Juan","Maria","Jose","Elena","Fiore","Rosita"};
	int nl = 0, i = 0;
	
	for(;i < 10;i++)
	{
		if(strlen(lista[i]))
			nl++;
	}
	
	i = rand()%nl;
	
	printf("El ganador es: %d ", i+1);
	puts(lista[i]);
}

