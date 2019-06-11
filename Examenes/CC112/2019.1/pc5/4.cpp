//4.c
#include<cstdio>
#include<cstdlib>
#include<cstring>
char *leer(void);
main(){
	char *p = leer();
	printf("%s, longitud: %lu\n", p, strlen(p));
}
char *leer(void){
	int n=0;
	char ch, *p = (char*)malloc(sizeof(char));
	if(p==NULL) {printf("No hay espacio\n"); exit(EXIT_FAILURE);}

	printf("Ingrese una cadena de caracteres: ");
	while((ch=getchar())!=10){
		p = (char*)realloc(p, (n+2)*sizeof(char));
		if(p==NULL) {printf("No hay espacio\n"); exit(EXIT_FAILURE);}
		p[n++]= ch;
	}
	p[n] = 0;
	return p;
}
