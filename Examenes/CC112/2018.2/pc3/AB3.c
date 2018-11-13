//AB3.c
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<ctime>
main(){
	char lista[30][10] = {"Juan", "María", "José", "Elena", "Fiore", "Rosita"};
	int nl=0, i, nGanador;
	for(i=0;i<10;i++) if(strlen(lista[i])) nl++ ;
	srand(time(NULL));
	nGanador = rand()%nl;
	for(i=0;i<nl;i++) if(nGanador==i) break;
	printf("El ganador es: %d  %s\n", nGanador+1, lista[nGanador]);
}
