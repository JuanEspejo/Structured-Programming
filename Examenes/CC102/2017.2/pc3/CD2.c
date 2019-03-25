#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
int valCod(char *cod, int *anno, int *puesto, char *clave);
void main(void){ 
	char cod[] = "20170034J", clave;
	int anno, puesto;
	if(valCod(cod, &anno, &puesto, &clave)){
		printf("Código correcto\n");
		printf("Año = %d, puesto = %d, clave = %c\n", anno, puesto, clave);
	}	
	else printf("Código incorrecto: %s\n", cod);
}
int valCod(char *cod, int *anno, int *puesto, char *clave){
	char an[9], abc[] = "ABCDEFGHJKLMNPQRSTUVWXYZ";  // no contiene I ni O
	int n;
	strncpy(an, cod, 8);											// an = "20170034"
	n = atoi(an);													// n = 20170034
	*anno   = n/10000;
	*puesto = n%10000;
	*clave  = *(cod+8);
	if(cod[8] == abc[n%strlen(abc)-1]) return 1;
	return 0;
}
