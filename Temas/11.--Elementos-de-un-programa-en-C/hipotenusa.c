#include <stdio.h>
#include <math.h> // librería para usar la función sqrt

int main(){
	float x,y,aux,h;
	printf("Inserte los lados del triángulo rectángulo:\n");	
	scanf("%f %f",&x,&y);  
	aux = pow(x,2)+pow(y,2);
	h = sqrt(aux); /* sacando la raiz cuadrada a aux*/
	printf("La hipotenusa es: %f\n",h);	// IMPRIMIENDO LA HIPOTENUSA
	return 0;
}
