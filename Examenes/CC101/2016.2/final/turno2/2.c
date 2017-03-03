#include<stdio.h>
void main(void){
	int m, n;
	printf("Ingrese dos enteros >0: ");
	scanf("%d %d", &m, &n);
	printf("El número de cerillos es: %d\n", m*(n+1)+ n*(m+1));
}
