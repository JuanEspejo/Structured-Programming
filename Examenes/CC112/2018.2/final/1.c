//1.c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cantidad(char *c);
int main(){
	char str[] = "  hola   cómo   estás María?  ", *p= str;
	printf("Texto original  : %s\n", str);
	int n = strlen(str)+1;
	char *str1= (char *)malloc(n+1), *p1=str1, ant = ' ';
	if(str1==NULL){printf("No hay espacio\n"); exit(EXIT_FAILURE);}
	while(*p){
		if(ant != ' ' || *p != ' ') *p1++ = *p;
		ant = *p;
		p++;
	}
	if(ant==' ' ) p1--;
	*p1 = '\0';
	if(str1==NULL){printf("No hay espacio\n"); exit(EXIT_FAILURE);}
	str1= (char *)realloc(str1, strlen(str1)+1);
	printf("Texto modificado: %s\n", str1);
	free(str1);
}
