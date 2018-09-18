#include <stdio.h>

void main ()
{
	float a, b, c, d;
	
	printf("\n Ingrese los coeficientes del sistema lineal de dos ecuaciones con una incógnita: ");
	scanf ("%f %f %f %f", &a, &b, &c, &d);	

	if (a==0 && c==0){
		if (b==0 && d==0) printf (" C.S. = R");
		else printf (" C.S. = {}");
	}
	else if (a==0 && c!=0){
		if (b==0) printf (" C.S. = {%f}", d/c);
		else printf (" C.S. = {}");
	}
	else if (a!=0 && c==0){
		if (d==0) printf (" C.S. = {%f}", b/a);
		else printf (" C.S. = {}");
	}
	else                 {
		if (b/a == d/c) printf (" C.S. = {%f}", b/a);
		else printf (" C.S. = {}");
	}
	printf ("\n\n");
}