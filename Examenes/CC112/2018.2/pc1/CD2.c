// CD2.c
#include<cstdio>
main(){
	int a, b, c, aux;
	printf(" ingrese el primer entero: "); 
	scanf("%d", &a);
	printf(" valores ingresados: %d\n", a);
	printf(" ingrese el segundo entero: "); 
	scanf("%d", &b);
	if (b < a){
		aux = b;
		b = a;
		a = aux;
	}
	printf(" valores ingresados: %d %d\n", a, b);
	printf(" ingrese el tercer entero: "); 
	scanf("%d", &c);
	printf(" valores ingresados: ");
	if (c < a)
		printf(" %d %d %d", c, a, b);
	else if (b < c)
		printf(" %d %d %d", a, b, c);
	else
		printf(" %d %d %d", a, c, b);
	printf("\n");
}
