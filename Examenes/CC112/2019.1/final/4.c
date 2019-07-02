//4.c
#include<cstdio>
typedef struct{
	int  codigo;
	char nombre[11];
	int  pre[4];
} Notas;
main(){
	int m=3, n=4, i, j;
	Notas notas[4]= {11, "Juan",   2, 1, 3, 5, 
						  12, "José",   5, 3, 4, 5,
						  13, "Fiore",  4, 4, 3, 5};
	float ppre[n];
	printf("Promedio de las preguntas\n    1    2    3    4\n");
	for(j=0; j<n; j++) ppre[j]=0;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++) ppre[j] += notas[i].pre[j];
	for(j=0; j<n; j++) printf("%5.2f", ppre[j]/m);
	printf("\n");
}
