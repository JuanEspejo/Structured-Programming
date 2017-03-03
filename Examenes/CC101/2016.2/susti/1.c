#include <stdio.h>

int main ()
{
	int chicles, razon, envoltorios, gratis, total;

	printf (" Ingrese la cantidad de envoltorios necesarios para que la empresa regale un chicle: ");
	scanf ("%d", &razon);
	printf (" Ingrese la cantidad de chicles comprados: ");
	scanf ("%d", &chicles);
	
	// en un inicio se come todos los chicles comprados
	total = chicles; 
	
	// calculamos la cantidad de chicles gratis que podemos canjear (*) 
	gratis = chicles/razon;
	
	// calculamos la cantidad de envoltorios que no logramos canjear (**)
	envoltorios = chicles%razon;
	
	for ( ; gratis > 0 ; ) // mientras podamos canjear al menos un chicle seguiremos deleitándonos
	{
		total = total + gratis; // total almacena la cantidad de deleites acontecidos
		envoltorios = envoltorios + gratis; // actualizamos la cantidad de envoltorios que tenemos 
		gratis = envoltorios/razon; // (*)
		envoltorios = envoltorios%razon; // (**)
	}
	
	printf (" La máxima cantidad de chicles con las que puedes deleitarte es %d\n", total);
}
