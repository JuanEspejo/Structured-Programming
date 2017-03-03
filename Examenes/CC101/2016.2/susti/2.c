#include <stdio.h>

int main ()
{
	int altura, canicas, cont;

	printf (" Ingrese la altura de la pirámide a formar: ");
	scanf ("%d", &altura);
	
	for ( cont = 1, canicas = 0; cont <= altura; cont = cont +1 )
		canicas = canicas + (cont*(con+1))/2; // actualizando la cantidad de canicas necesarias para construir una pirámide de altura "cont"
	
	printf (" La cantidad de canicas necesarias es %d\n", canicas);
}
