#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int* x, int y);

void main(){
     
     srand(time(NULL));
     
     int *arr=NULL;
     int a,c,i;
     
    	printf("Ingresar cantidad de numeros: ");
	scanf("%d",&c);
	
	arr=(int*) malloc(c*sizeof(int));
	
	for(i=0;i<c;i++){
	     *(arr+i)=rand()%100+1;
	}
	
	ordenar(arr,c);
	
	printf("El menor valor es: %d\n",*arr);
	printf("El mayor valor es: %d\n",*(arr+c-1));
	
	free(arr);
}

void ordenar(int* x, int y){
	int k,l,aux;
	
	for(k=0;k<y;k++){
		for(l=k+1;l<y;l++){
			if(x+k>x+l){
				aux=*(x+k);
				*(x+k)=*(x+l);
				*(x+l)=aux;
			}
		}
	}
}
