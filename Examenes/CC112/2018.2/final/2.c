//2.c
#include<stdio.h>
int cantidad(char *c);
int main(){
	char c[] = "  hola   cómo   estás María?  ";
	printf("%s\n", c);
	printf("palabras = %d  \n", cantidad(c));
}
int cantidad(char *pc){
	int cant = 0;
	char ant = ' ';
	while(*pc){	
		if(*pc != ' ' && ant == ' ') cant++;
		ant = *pc++;
	}
	return cant;
}
