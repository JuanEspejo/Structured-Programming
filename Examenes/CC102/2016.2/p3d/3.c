/*
[5 ptos.] Implemente un programa que genere aleatoriamente una cadena de caracteres de tamaño 100 formado por letras del abecedario ingles (mayusculas o minusculas), numeros o espacios. Finalmente, muestre la cadena aleatoria generada y la cadena que surge de realizar las siguientes modificaciones:

-cambiar una letra minuscula por una letra mayuscula y viceversa, y 

-cambiar un numero n (del 0 al 9) por 9 − n.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100

void main(){

	int i,j,xd;
	char v[MAX];
	
	srand(time(NULL));
	for(i=0;i<MAX;i++){
		xd=rand()%12;  // ¿No se debería dar las mismas chances de salir cualquier letra (ya sea mayúscula o minúscula) y el caracter espacio?
		if(xd%4==0){
		v[i]=rand()%10+48;
		}
		else if(xd%3==0){
		v[i]=rand()%26+65;
		}
		else if(xd%5==0){
		v[i]=rand()%26+97;
		}
		else{
		v[i]=32;
		}
	}v[i]='\0';
	
	printf("La cadena original:\n%s\n",v);
	
	for(i=0;i<MAX;i++){
		if(v[i]>=97){
		v[i]=v[i]-32;
		}
		else if((v[i]>=65)&&(v[i]<=90)){
		v[i]=v[i]+32;
		}
		else if((v[i]>=48)&&(v[i]<=57)){
		v[i]=(57-v[i])+48;
		}
	}v[i]='\0';
	
	printf("La nueva cadena:\n%s\n",v);
}

// (Y)
