//4.c
#include<stdio.h>
int mcd(int m, int n){
	int r;
	if(m<n){
		r = m;
		m = n;
		n = r;
	}  
	while(r=m%n) {
		m = n;
		n = r;
	}
	return n;
}
void main(void){
	int m, n;
	printf("Máximo común divisor de 2 números\n");
	printf("Ingrese 2 números > 0: ");
	scanf("%d %d", &m, &n);
	printf("El máximo común divisor de %d y %d es: %d\n", m, n, mcd(m,n));
}
