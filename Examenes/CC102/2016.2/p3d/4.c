/*
[5 ptos.] Cree un programa que genere aleatoriamente un arreglo de 10 numeros enteros del intervalo [0, 20]. Luego muestre dicho arreglo, ordene dicho arreglo de manera creciente utilizando punteros y finalemte muestre el arreglo ordenado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

void ordenar(int *b,int lon);
void leer(int *b);

void main(){

	int i,v[MAX];
	
	printf("El arreglo original:\n");
	srand(time(NULL));
	for(i=0;i<MAX;i++){
		v[i]=rand()%21;
		printf("%d, ",v[i]);
	}v[i]='\0';
	printf("\n");
	
	ordenar(v,MAX);
	leer(v);

}
void ordenar(int *b,int lon){
	
	int i,j,aux;
	
	for(i=0;i<lon;i++){
		for(j=0;j<lon;j++){
			if((*(b+i)<*(b+j))&&(i!=j)){
				aux=*(b+i);
				*(b+i)=*(b+j);
				*(b+j)=aux;
			}
		}
	}
}	

void leer(int *b){

	int i;

	printf("El arreglo ordenado:\n");
	for(i=0;i<10;i++){
	printf("%d, ",*(b+i));
	}
	printf("\n");
}

// (Y)
