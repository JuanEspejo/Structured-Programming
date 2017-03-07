#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){

	int i,j,aux;
	char letras[21];
	srand (time(NULL)); 
	
	for(i=0;i<20;i++){
		letras[i]=rand()%26 + 65;
	}
	letras[20]='\0';
	printf("Cadena en orden:\t\t%s\n",letras);
	
	for(i=0;i<20;i++){
		for(j=i+1;j<20;j++){
			if(letras[j] < letras[i]){
				aux=letras[i];
				letras[i]=letras[j];
				letras[j]=aux;
			}
		}
	}
	letras[20]='\0';
	printf("Cadena en orden ascendente: \t%s\n",letras);
	printf("\n");
}
		
// (Y)	
