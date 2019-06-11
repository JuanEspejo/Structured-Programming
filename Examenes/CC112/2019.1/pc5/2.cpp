//2.c
#include <cstdio>
#include <cstring>
void buscar(char cad[]){
	char find[4][6] = {"juan","pedro","maria","rosa"};
	int i;
	for(i=0; i<4; i++) if(strstr(cad, find[i]))   printf("   encontre a %s\n",find[i]);	
}
main(){
	char linea[81],*p;
	printf("Ingresar la cadena: ");
	fgets(linea, 80, stdin);
	buscar(linea);
}
