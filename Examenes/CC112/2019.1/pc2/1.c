//1.c
#include<cstdio>
#include<cmath>
main(){
	float r=1, r2, lc, lci, lcj;
	int nc = 0, i=1, j;
	printf("Cuadrados alojados en un círculo de radio %f\n", r);
	printf("Ingrese el lado del cuadrado: ");
	scanf("%f", &lc);
	r2 = r*r;
	for(lci=lc*i; lci<r; i++, lci=lc*i){
		j = 1;
		for(lcj=lc*j; lci*lci+lcj*lcj < r2; j++, lcj=lc*j) nc++;
	}	
	printf("radio = %f, lado = %f\n", r, lc);	
	printf("Número de cuadrados: %d\n", nc);	
	printf("Suma de las áreas de los cuadrados: %f\n", nc*lc*lc);	
}
