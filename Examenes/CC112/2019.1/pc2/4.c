//4.c
#include<cstdio>
void cielo(int n);
main(){
	int nCielos, i=1;
	printf("Mis cielos\n");
	printf("Ingrese el número de cielos: ");
	scanf("%d", &nCielos);
	for(; i<=nCielos; i++) cielo(i);
	printf("¡Mis cielos se expanden rápidamente!\n");
}
void cielo(int n){
	printf("\nCielo de tamaño %dx%d\n", n, n);
	int i, j;
	for(i=0; i<n; i++){
		for(j=0;j<n; j++)
			if((i+j)%2) printf(".  ");
			else 			printf("*  ");
		printf("\n");
	}
}
