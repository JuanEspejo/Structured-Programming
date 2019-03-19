#include <stdio.h>
#include <stdlib.h>
#include <time.h>


short lanzamiento();
void llenado(short *lan, int n);
void prin(short *lan, int n);

int main()
{
	short *lan;
	int n;
	printf("\n\n  Ingrese el número de lanzamientos: ");
	scanf("%d", &n);
	lan = (short*) malloc(n * sizeof(short));
	if(lan == NULL) 
	{
		printf("\n\n  Memoria insuficiente.\n\n");
		return 0;
	}
	else
	{
		llenado(lan, n);
		prin(lan, n);
		printf("\n\n");
		return 0;
	}
}

short lanzamiento()
{
	return rand()%2;
}

void llenado(short *lan, int n)
{
	int i;
	srand(time(NULL));
	for(i = 0; i < n; i++)
	{
		*(lan + i) = lanzamiento();
	}
}

void prin(short *lan, int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		if(*(lan + i) == 0) printf("\n  SELLO");
		if(*(lan + i) == 1) printf("\n  CARA");
	}
}



