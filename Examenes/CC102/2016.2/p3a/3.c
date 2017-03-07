#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

	int i,aux;
	char letras[21];
	srand (time(NULL)); 
	
	for(i=0;i<20;i++){
		letras[i]=rand()%26 + 97;
	}
	letras[20]='\0';
	printf("Cadena en orden:\t %s\n",letras);
	
	for(i=0;i<10;i++){
		aux=letras[i];
		letras[i]=letras[19-i];
		letras[19-i]=aux;
	}
	letras[20]='\0';
	printf("Cadena en orden inverso: %s\n",letras);
	printf("\n");
	
}

// (Y)
