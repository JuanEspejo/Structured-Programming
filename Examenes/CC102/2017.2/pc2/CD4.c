//CD4.c
#include<stdio.h>
void main(void){
	int i,n;
	float x, m=0, mm;
	printf("Ingrese la cantidad de numeros para calcular la media: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		printf("Ingrese el %d valor: ",i); scanf("%f",&x);
		mm = m+(x-m)/i;
		m = mm;
	}
	printf("la media es %.2f\n",mm);
}
