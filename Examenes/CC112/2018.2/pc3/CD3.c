//CD3.c
#include<cstdio>
#include<cstring>
#include<ctype.h>
main(){
	char letrero[4][40] = {"La hora es la hora",
								  "Antes de la hora no es la hora",
								  "Después de la hora tampoco es la hora",
								  "La hora es la hora."}, *pinicio=letrero[0], *pi;	
	int nl = 4, nMay=0, nMin=0, nBlan=0, nPuntos=0, nTotal, i;
	for(i=0; i<nl; i++) {
		for(pi= pinicio+i*40; *pi; pi++){
			if(isupper(*pi)) nMay++;
			if(islower(*pi)) nMin++;
			if(*pi == ' ')   nBlan++;
			if(*pi == '.')   nPuntos++;
		}
		nTotal = nMay + nMin + nBlan + nPuntos;
	}
	printf("Número de mayúsculas: %d\nNúmero de minúsculas: %d\nNúmero de blancos: %d\nNúmero de puntos: %d\nNúmero total de caracteres: %d\n", nMay, nMin, nBlan, nPuntos, nTotal);
}
