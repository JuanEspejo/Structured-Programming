//3.c
#include<cstdio>
#include<cstdlib>
#include<ctime>
main(){
	int n, n2, i, j, *p, *pi;
	printf("Mi cielo\n");
	printf("Ingrese un entero positivo: ");
	scanf("%d", &n);
	n2 = n*n;
	p = (int*)malloc(n*n*sizeof(int));	
	srand(time(NULL));
	for(i=0, pi=p; i < n2; i++, pi++) *pi = rand()%3;
	for(i=0, pi=p; i < n; i++) {
		for(j=0   ; j < n; j++, pi++)
			switch (*pi){
				case 0:  printf("*  "); break;	
				case 1:  printf("+  "); break;
				default: printf("   "); 
			}
		printf("\n");
	}
}
