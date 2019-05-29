//3.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
main(){
	int n =10, i;
	float x[n], *px, y[n], *py, xmin, xmax, A=-1, B=1, a, b;
	printf("Normalización de datos:\n");
	srand(time(NULL));
	xmin = xmax = x[0] = rand()%19+2;
	for(i=1, px = x+1; i<n; i++, px++){
		*px = rand()%19+2;
		if(xmin>*px) xmin = *px;
		if(xmax<*px) xmax = *px;
	}
	printf("Inicio: "); for(i=0, px = x; i<n; i++, px++) printf("%5.2f  ", *px);  printf("\n");

	a = (B-A)/(xmax-xmin);
	b = A - a*xmin;
	printf("Fin   : ");
	for(i=0, px=x, py=y; i<n; i++, px++, py++){
		*py = a * *px + b;
		printf("%5.2f  ", *py);
	}
	printf("\n");
}
