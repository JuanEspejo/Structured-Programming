//AB1.c
#include<cstdio>
#include<cstdlib>
main(){
	int n=5, m=2, *p, *pmax, *ip, i, j;
	p = (int *)malloc(sizeof(int)*n);
	if(p==NULL){printf("Falta espacio en memoria dinámica"); exit(EXIT_FAILURE);}
	pmax = p+n;
	ip = p;
	for(i=0; i<n; i++, ip++) {
		printf("Ingrese el dato %d: ", i+1);
		scanf("%d", ip);
	}
	printf("Datos en 'serrucho':");
	for(j=0; j<m; j++) {
		printf("\nAdelante %d: ", j+1);
		for(ip = p; ip<pmax; ip++) printf("%d  ", *ip);
		printf("\nAtrás    %d: ", j+1);
		for(ip--; ip>=p; ip--)		printf("%d  ", *ip);
	}
	printf("\n");
	free(p);
}
