//CD1.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
main(){
	int n=5, *p, *pmax, *pp, i, j, primo;
	srand(time(NULL));
	p = (int *)malloc(sizeof(int)*n);
	if(p==NULL){printf("Falta espacio en memoria dinámica"); exit(EXIT_FAILURE);}
	pmax = p+n;
	printf("Valores: ");
	for(pp = p; pp<pmax; pp++){
		*pp = 1+rand()%10;
		printf("%d  ", *pp);
	}
	printf("\nValores primos: ");
	for(pp = p; pp<pmax; pp++){
		primo=1;
		for(j=2; primo && j*j <= *pp; j++) if(*pp%j==0) primo=0;
		if(primo) printf("%d  ", *pp);
	}
	printf("\n");
	free(p);
}
