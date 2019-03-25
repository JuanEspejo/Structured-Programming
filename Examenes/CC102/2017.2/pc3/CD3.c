#include <stdio.h>
#define lon 400

// Declarando prototipo de funciones 
void descifrar(char * ent, char * sal);
void mostrar(char * p);

void main(){
	char cifrado[lon] = "C\"ocvjgocvkekcp";
	char descifrado[lon]; 
	mostrar (cifrado);
	descifrar (cifrado, descifrado);
	mostrar (descifrado);
}
void descifrar(char * ent, char * sal) {
	while (*ent != '\0')
	{if (*ent <= 1) *sal++ = *ent++ + 126;
	else *sal++ = *ent++ - 2;}
	*sal = '\0';
}

void mostrar(char * p){
	while (*p != '\0') printf("%c", *p++);
	printf("\n");
}
