//2.c
#include <cstdio>
#include <cstring>
#define MAX_SIZE 100 // Maximo tamaño de la cadena
int leerString(char *cc, int n){ 
	int c, m=0;
	n--;
	for(;(c=getchar())!=10 && m<n; m++) *cc++= c;
	*cc = '\0';
	return m;
}
main(){
	char str[MAX_SIZE], *ps=str;
	int len, nVoc=0, nCon=0;
	printf("Ingrese una cadena de caracteres: ");
	leerString(ps, MAX_SIZE);
	len = strlen(ps);
	for(; *ps; ps++)
   	if((*ps>='a' && *ps<='z') || (*ps>='A' && *ps<='Z'))
			if(*ps =='a' || *ps=='e' || *ps=='i' || *ps=='o' || *ps=='u' || 
				*ps =='A' || *ps=='E' || *ps=='I' || *ps=='O' || *ps=='U'  )
				nVoc++;
			else nCon++;
	printf("Número total de vocales = %d\n", nVoc);
	printf("Nmero total de consonantes = %d\n", nCon);
}
