/*
[5 ptos.] Cree un programa que que lea una palabra o frase en ingl ́es de tamaño no mayor a 100 y muestre un mensaje diciendo si dicha palabra o frase es o no un palındromo.
*/
#include<stdio.h>
#include<string.h>
#define MAX 100

void main(){

	int i,j,lon,aux;
	char v[MAX],b[MAX];
	
	printf("Ingrese una palabra o frase: ");
	scanf("%[^\n]",v);
	
	lon=strlen(v);
	
	for(i=0;i<lon;i++){
	v[i]=tolower(v[i]);
	}v[i]='\0';
	
	for(i=0;i<lon;i++){
		if(v[i]==32){
		for(j=i;j<lon;j++){
			v[j]=v[j+1];
			}
		}
	}v[i]='\0';
	
	strcpy(b,v);
	lon=strlen(b);
	
	j=lon-1;
	for(i=0;i<lon;i++){
		if(i<j){
		aux=b[i];
		b[i]=b[j];
		b[j]=aux;
		j--;
		}
	}
	
	if(strcmp(b,v)==0){
	printf("Dicha palabra o frase SI es palindromo.\n");
	}
	else{
	printf("Dicha palabra o frase NO es palindromo.\n");
	}
}	

// (Y)
